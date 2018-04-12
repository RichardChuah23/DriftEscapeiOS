//
// SKBranchNode.cs
//
// Created by Ryan Graham on 02/02/16.
// Copyright (c) 2016 Ryan Graham, all rights reserved.
//

using UnityEngine;
using System.Collections.Generic;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace SplineKitPro
{
    [ExecuteInEditMode]
    public class SKBranchNode : SKNode
    {
        [SerializeField] float m_tVal;
        public override float tVal
        {
            get { return m_tVal; }
            set { m_tVal = value; }
        }

        [SerializeField] float m_distance;
        public override float Distance
        {
            get { return m_distance; }
            set { m_distance = value; }
        }

        [SerializeField] NodeDirection m_direction = NodeDirection.kForward;
        public NodeDirection Direction
        {
            get { return m_direction; }
            set { m_direction = value; }
        }

        [SerializeField] List<SKSpline> m_branches = new List<SKSpline>();
        public List<SKSpline> Branches
        {
            get { return m_branches; }
        }

        [SerializeField] SKCmd m_branchCmd = new SKCmd();
        public SKCmd BranchCmd
        {
            get { return m_branchCmd; }
            set { m_branchCmd = value; }
        }

        protected Dictionary<int, TriggerState> m_stateMap = new Dictionary<int, TriggerState>();
        protected SKRandomSequence m_randSplineSeq;
		public SKRandomSequence RandomSequence
        {
            get {  return m_randSplineSeq; }
            set {  m_randSplineSeq = value; }
        }


#if UNITY_EDITOR
        //--------------------------------------------------------------
        public override void OnSplineEdited(SKSpline editedSpline)
        {
            if(Spline == editedSpline)
            {
                m_tVal = m_distance / Spline.Length;    // Renormalize the tval
                SetNodeTValue(m_tVal);

                for(int i=0; i<m_branches.Count; i++)
                    m_branches[i].SplineEdited();
            }
        }
        
        //--------------------------------------------------------------
        public override void OnScriptsReloaded()
        {
            InitSignals();
        }

        //--------------------------------------------------------------
        void OnDrawGizmos()
        {
            InitSignals();
        }

        //--------------------------------------------------------------
        public void CreateBranch()
        {
            string branchName = this.name + "_Spline_" + (m_branches.Count+1).ToString("D3");
            GameObject branchObj = SKSpline.CreateSpline(branchName);
            branchObj.transform.SetParent(transform);
            branchObj.transform.localPosition = Vector3.zero;
            branchObj.transform.localRotation = Quaternion.identity;
            branchObj.transform.localScale = Vector3.one;
            SKSpline branchSpline = branchObj.GetComponent<SKSpline>();
            branchSpline.SplineUp = Spline.SplineUp;

            SKPointNode splinePoint = branchSpline.AddPoint(transform.position);
            splinePoint.Weld = gameObject;

            m_branches.Add(branchSpline);
            m_randSplineSeq = null;
        }

        //--------------------------------------------------------------
        public void RemoveBranch(SKSpline branch)
        {
            if(!m_branches.Remove(branch))
                Debug.LogWarning("SplineKitPro: Failed to find branch " + branch.name + " for delete!!");
        }
#endif

        //--------------------------------------------------------------
        void Start()
        {
            InitSignals();
        }

        //--------------------------------------------------------------
        void InitSignals()
        {
            if(gameObject.activeInHierarchy && isActiveAndEnabled)
            {
#if UNITY_EDITOR
                if(!SKSplineSignalManager.Instance.IsCallbackRegistered<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited))
                    SKSplineSignalManager.Instance.SubscribeToSignal<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited);
#endif

                if(m_randSplineSeq == null)
                    m_randSplineSeq = new SKRandomSequence(0, m_branches.Count+1);
            }
        }

        //--------------------------------------------------------------
        void OnDestroy()
        {
#if UNITY_EDITOR
            if(Spline != null)
                Spline.RemoveBranchNode(this, false);

            SKSplineSignalManager.Instance.UnsubscribeToSignal<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited);
#endif
        }

        //--------------------------------------------------------------
        public void SetNodeTValue(float tvalue)
        {
            Vector3 pos = Vector3.zero;
            if(Spline.Evaluate(tvalue, ref pos))
            {
                m_tVal = tvalue;
                m_distance = tvalue * Spline.Length;
                transform.position = pos;
            }
        }

        //--------------------------------------------------------------
        public void Evaluate(SKSplineAnimator evaluator, float prevTVal, float newTVal)
        {
			if(evaluator.Spline != Spline)
                return;
			
            int evaluatorID = evaluator.GetInstanceID();
            if(!m_stateMap.ContainsKey(evaluatorID))
                m_stateMap.Add(evaluatorID, TriggerState.kIdle);

            TriggerState state = m_stateMap[evaluatorID];

            float newLoopedTVal = newTVal - 1.0f;

            if(!evaluator.InReverse && 
                ((prevTVal <= m_tVal && newTVal >= m_tVal) ||
                (Spline.IsLooped && newLoopedTVal > 0.0f && prevTVal >= m_tVal && newLoopedTVal >= m_tVal)))
            {
                if(state == TriggerState.kIdle)
                {
                    if(m_direction == NodeDirection.kBoth || m_direction == NodeDirection.kForward)
                        OnTriggered(evaluator, newTVal);
                }
            }
            else if(evaluator.InReverse && prevTVal >= m_tVal && newTVal <= m_tVal) // Possibly todo, allow for reverse loop and check for start/end cross
            {
                if(state == TriggerState.kIdle)
                {
                    if(m_direction == NodeDirection.kBoth || m_direction == NodeDirection.kReverse)
                        OnTriggered(evaluator, newTVal);
                }
            }
            else if(prevTVal != newTVal)
            {
                m_stateMap[evaluatorID] = TriggerState.kIdle;
            }
        }

        //--------------------------------------------------------------
        void OnTriggered(SKSplineAnimator evaluator, float evaluatedT)
        {
            if(!gameObject.activeInHierarchy)
                return;

            if(m_branchCmd.ID == (int)SKBranchCmdId.kSpecifyBranch)
            {
                Branch(m_branchCmd.strValue, evaluator, evaluatedT);
            }
            else if(m_branchCmd.ID == (int)SKBranchCmdId.kRandom)
            {
                int index = Random.Range(0, m_branches.Count+1);
                if(index < m_branches.Count)
                    Branch(index, evaluator, evaluatedT);
            }
            else if(m_branchCmd.ID == (int)SKBranchCmdId.kRandomNoRepeat)
            {
                int index = m_randSplineSeq.GetNext();
                if(index < m_branches.Count)
                    Branch(index, evaluator, evaluatedT);
            }
            else if(m_branchCmd.ID == (int)SKBranchCmdId.kExecuteFunction)
            {
                m_branchCmd.ReturnString = "";
                evaluator.SendMessage(m_branchCmd.strValue, m_branchCmd, SendMessageOptions.DontRequireReceiver);
                if(!string.IsNullOrEmpty(m_branchCmd.ReturnString))
                    Branch(m_branchCmd.ReturnString, evaluator, evaluatedT);
            }

            int evaluatorID = evaluator.GetComponent<SKSplineAnimator>().GetInstanceID();
            m_stateMap[evaluatorID] = TriggerState.kActive;
        }

        //--------------------------------------------------------------
        void Branch(string name, SKSplineAnimator evaluator, float evaluatedT)
        {
            for(int i=0; i<m_branches.Count; i++)
            {
                if(m_branches[i].name == name)
                {
                    Branch(i, evaluator, evaluatedT);
                    break;
                }
            }
        }

        //--------------------------------------------------------------
        void Branch(int i, SKSplineAnimator evaluator, float evaluatedT)
        {
            float distOver = 0.0f;
            SKSpline branchToSpline = m_branches[i];
            if(evaluator.InReverse)
            {
                distOver = (m_tVal - evaluatedT) / Spline.Length;
                evaluator.InReverse = false;
                evaluator.RestoreReverseOnJunction = true;
            }
            else
            {
                distOver = (evaluatedT - m_tVal) / Spline.Length;
            }

            float tOver = distOver / branchToSpline.Length;
            evaluator.gameObject.SendMessage("SetSpline", branchToSpline);
            evaluator.gameObject.SendMessage("SetT", tOver);
        }
    }
}
