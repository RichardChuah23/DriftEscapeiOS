//
// SKTriggerNode.cs
//
// Created by Ryan Graham on 11/30/15.
// Copyright (c) 2015 Ryan Graham. All rights reserved.
//

using UnityEngine;
using System.Collections.Generic;
using System.Linq;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace SplineKitPro
{
    public enum TriggerState
    {
        kIdle=0,
        kActive,
    };

    public enum NodeDirection
    { 
        kBoth=0, 
        kForward, 
        kReverse,
    };

    [ExecuteInEditMode]
    public class SKTriggerNode : SKNode
    {
        static protected Dictionary<string, GameObject> s_storedRefFromName = new Dictionary<string, GameObject>();

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

        [SerializeField] NodeDirection m_direction = NodeDirection.kBoth;
        public NodeDirection Direction
        {
            get { return m_direction; }
            set { m_direction = value; }
        }

        [SerializeField] bool m_allowCollisionTrigger;
        public bool AllowCollisionTrigger
        {
            get { return m_allowCollisionTrigger; }
            set { m_allowCollisionTrigger = value; }
        }

        [SerializeField] List<SKCmd> m_commands = new List<SKCmd>();
        public List<SKCmd> Commands
        {
            get { return m_commands; }
            set { m_commands = value; }
        }

        protected Dictionary<int, TriggerState> m_stateMap = new Dictionary<int, TriggerState>();
        protected List<SKDelayedCmd> m_delayedCmds = new List<SKDelayedCmd>();
        public List<SKDelayedCmd> DelayedCommands
        {
            get { return m_delayedCmds; }
        }

#if UNITY_EDITOR
        //--------------------------------------------------------------
        public override void OnSplineEdited(SKSpline editedSpline)
        {
            if(Spline == editedSpline)
            {
                m_tVal = m_distance / Spline.Length;    // Renormalize the tval
                SetNodeTValue(m_tVal);
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
            }
        }

        //--------------------------------------------------------------
        void OnDestroy()
        {
#if UNITY_EDITOR
            if(Spline != null)
                Spline.RemoveTriggerNode(this, false);

            SKSplineSignalManager.Instance.UnsubscribeToSignal<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited);
#endif
        }

        //--------------------------------------------------------------
        void Update()
        {
            // Checked for delayed commands, loop forward to keep sequence
            bool hasExpiredCmds = false;
            for(int i=0; i<m_delayedCmds.Count; i++)
            {
                SKDelayedCmd dcmd = m_delayedCmds[i];
                dcmd.delay -= UnityEngine.Time.deltaTime;
                if(dcmd.delay <= 0.0f)
                {
                    hasExpiredCmds = true;
                    List<GameObject> receiverGameObjs = LookUpReceiverGameObjects(dcmd.evaluator, dcmd.cmd);
                    for(int j=0; j<receiverGameObjs.Count; j++)
                        ProcessCommand(receiverGameObjs[j], dcmd.cmd, false);
                }
            }

            // Remove expired commands
            if(hasExpiredCmds)
            {
                for(int i=m_delayedCmds.Count-1; i>=0; i--)
                {
                    if(m_delayedCmds[i].delay <= 0.0f)
                        m_delayedCmds.RemoveAt(i);
                }
            }
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
                        OnTriggered(evaluator);
                }
            }
            else if(evaluator.InReverse && prevTVal >= m_tVal && newTVal <= m_tVal) // Possibly todo, allow for reverse loop and check for start/end cross
            {
                if(state == TriggerState.kIdle)
                {
                    if(m_direction == NodeDirection.kBoth || m_direction == NodeDirection.kReverse)
                        OnTriggered(evaluator);
                }
            }
            else if(prevTVal != newTVal)
            {
                m_stateMap[evaluatorID] = TriggerState.kIdle;
            }
        }

        //--------------------------------------------------------------
        void OnTriggerEnter(Collider other)
        {
            if(m_allowCollisionTrigger)
            {
                SKSplineAnimator evaluator = other.gameObject.GetComponent<SKSplineAnimator>();
                if(evaluator != null)
                    OnTriggered(evaluator);
            }
        }

        //--------------------------------------------------------------
        bool IsEvaluatorAllowedToTrigger(SKSplineAnimator evaluator, SKCmd cmd)
        {
            for(int i=0; i<cmd.OmittedEvals.Count; i++)
            {
                SKCmdReceiver omitted = cmd.OmittedEvals[i];
                if(omitted.IdType == SKCmdReceiverIdType.kName)
                {
                    GameObject gameObj = GameObject.Find(omitted.NameOrTag);
                    if(gameObj == evaluator.gameObject)
                        return false;
                }
                else if(omitted.IdType == SKCmdReceiverIdType.kTag)
                {
                    GameObject[] gameObjs = GameObject.FindGameObjectsWithTag(omitted.NameOrTag);
                    if(gameObjs != null && gameObjs.Length > 0)
                    {
                        for(int j=0; j<gameObjs.Length; j++)
                        {
                            if(gameObjs[j] == evaluator.gameObject)
                                return false;
                        }
                    }
                }
                else if(omitted.IdType == SKCmdReceiverIdType.kGameObject)
                {
                    if(omitted.GameObj != null && omitted.GameObj == evaluator.gameObject)
                        return false;
                }
            }

            return true;
        }

        //--------------------------------------------------------------
        List<GameObject> LookUpReceiverGameObjects(SKSplineAnimator evaluator, SKCmd cmd)
        {
            List<GameObject> receiverGameObjs = new List<GameObject>();

            if(cmd.SendToSelf && evaluator != null)
                receiverGameObjs.Add(evaluator.gameObject);

            // Look up the registered receivers
            for(int i=0; i<cmd.Receivers.Count; i++)
            {
                SKCmdReceiver receiver = cmd.Receivers[i];
                if(receiver.IdType == SKCmdReceiverIdType.kName)
                {
                    GameObject go = GameObject.Find(receiver.NameOrTag);
                    if(go == null)
					{
                        go = s_storedRefFromName[receiver.NameOrTag];   // Look it up in the stored references
						
                        if(go == null)
                        {
                            // Object must have started off inactive, resort to looking through everything
                            // to find the inactive object (this should only have to happen once, as it will be cached below).
                            GameObject[] goArray = Resources.FindObjectsOfTypeAll<GameObject>();
                            for(int j=0; j<goArray.Length; j++)
                            {
                                if(goArray[j].name == receiver.NameOrTag)
                                {
                                    go = goArray[j];
                                    break;
                                }
                            }
                        }
					}
                    
                    if(go != null)
                    {
                        if(!receiverGameObjs.Contains(go))
                            receiverGameObjs.Add(go);
                    
                        // If this is a SetActive command, make sure it's stored in the ref list so we can find it when it's not active
                        if(cmd.ID == (int)SKCmdId.SetActive)
                        {
                            if(!s_storedRefFromName.ContainsKey(receiver.NameOrTag))
                                s_storedRefFromName[receiver.NameOrTag] = go;
                        }
                    }
                }
                else if(receiver.IdType == SKCmdReceiverIdType.kTag)
                {
                    GameObject[] goArray = null;

                    // If this is a set active cmd, get all the GameObjects in the tag inactive or not, so that
                    // we can be sure to get them all. This is not very efficient, so it should be used heavily.
                    if(cmd.ID == (int)SKCmdId.SetActive)
                        goArray = Resources.FindObjectsOfTypeAll<GameObject>();
                    else
                        goArray = GameObject.FindGameObjectsWithTag(receiver.NameOrTag);

                    if(goArray != null)
                    {
                        for(int j=0; j<goArray.Length; j++)
                        {
                            if(!receiverGameObjs.Contains(goArray[j]))
                                receiverGameObjs.Add(goArray[j]);
                        }
                    }
                }
                else if(receiver.IdType == SKCmdReceiverIdType.kGameObject)
                {
                    if(receiver.GameObj != null && !receiverGameObjs.Contains(receiver.GameObj))
                        receiverGameObjs.Add(receiver.GameObj);
                }
            }

            return receiverGameObjs;
        }

        //--------------------------------------------------------------
        void OnTriggered(SKSplineAnimator evaluator)
        {
            if(!gameObject.activeInHierarchy)
                return;

            if(m_commands != null)
            {
                for(int i=0; i<m_commands.Count; i++)
                {
                    SKCmd cmd = m_commands[i];
                    cmd.tVal = m_tVal;

                    if(!IsEvaluatorAllowedToTrigger(evaluator, cmd))
                        continue;

                    if(cmd.Delay > 0.0f)
                    {
                        SKDelayedCmd dcmd = new SKDelayedCmd();
                        dcmd.evaluator = evaluator;
                        dcmd.cmd = cmd;
                        dcmd.delay = cmd.Delay;
                        m_delayedCmds.Add(dcmd);
                        continue;
                    }

                    List<GameObject> receiverGameObjs = LookUpReceiverGameObjects(evaluator, cmd);
                    for(int j=0; j<receiverGameObjs.Count; j++)
                    {
                        bool setToTriggerTVal = receiverGameObjs[j] == evaluator.gameObject;
                        ProcessCommand(receiverGameObjs[j], cmd, setToTriggerTVal);
                    }
                }
            }

            int evaluatorID = evaluator.GetInstanceID();
            m_stateMap[evaluatorID] = TriggerState.kActive;
        }

        //--------------------------------------------------------------
        void ProcessCommand(GameObject receiver, SKCmd cmd, bool setToTriggerTVal=false)
        {
#if UNITY_EDITOR
            // Don't run commands in editor or when the evaluator is not running
            if(!Application.isPlaying)
            {
                //Debug.Log("[DISABLED] RunCommand " + cmd.ID + " : " + cmd.fValue + ", " + cmd.strValue);
                return;
            }
#endif

            //Debug.Log("RunCommand " + cmd.ID + " : " + cmd.fValue + ", " + cmd.strValue);

            // Set the tval to the trigger tval (if set via trigger) to keep trigger events happining at the exact tval;
            // for example if a trigger stops the eval and rotation is enabled, the rotation might not be correct if the tval
            // is slightly passed the trigger
            if(setToTriggerTVal)
                receiver.SendMessage("SetT", cmd.tVal, SendMessageOptions.DontRequireReceiver);

            if(cmd.ID == (int)SKCmdId.SetActive)
            {
                bool active = cmd.fValue != 0.0f;
                receiver.SetActive(active);
            }
            else if(cmd.ID == (int)SKCmdId.SetAnimTrigger)
            {
                Animator animator = receiver.GetComponentInChildren<Animator>();
                if(animator != null)
                {
                    animator.ResetTrigger(cmd.strValue);
                    animator.SetTrigger(cmd.strValue);
                }
            }
            else if(cmd.ID == (int)SKCmdId.ResetAnimTrigger)
            {
                Animator animator = receiver.GetComponentInChildren<Animator>();
                if(animator != null)
                    animator.ResetTrigger(cmd.strValue);
            }
            else if(cmd.ID == (int)SKCmdId.ExecuteFunction)
            {
                receiver.SendMessage(cmd.strValue, cmd, SendMessageOptions.DontRequireReceiver);
            }
            else if(cmd.ID == (int)SKCmdId.PlaySound)
            {
                AudioClip audioClip = UnityEngine.Resources.Load(cmd.strValue) as AudioClip;
                if(audioClip != null)
                {
                    bool played = false;
                    AudioSource[] audioSources = receiver.GetComponentsInChildren<AudioSource>();
                    for(int i=0; i<audioSources.Length; i++)
                    {
                        if(audioSources[i].clip == audioClip)
                        {
                            audioSources[i].Play();
                            played = true;
                            break;
                        }
                    }

                    if(!played)
                    {
                        AudioSource audioSource = receiver.AddComponent<AudioSource>();
                        audioSource.clip = audioClip;
                        audioSource.Play();
                    }
                }
            }
            else if(cmd.ID == (int)SKCmdId.PlayAudioSource)
            {
                if(cmd.AudioSrc != null)
                    cmd.AudioSrc.Play();
            }
            else if(cmd.ID == (int)SKCmdId.InstantiatePrefab)
            {
                GameObject instance = null;
                if(cmd.Locator != null)
                {
                    if(cmd.iValue == 0)
                    {
                        instance = GameObject.Instantiate(cmd.GameObj) as GameObject;
                        instance.transform.localPosition = Vector3.zero;
                        instance.transform.localRotation = Quaternion.identity;
                        instance.transform.SetParent(cmd.Locator);
                        instance.transform.localPosition = cmd.GameObj.transform.localPosition;
                        instance.transform.localRotation = cmd.GameObj.transform.localRotation;
                    }
                    else
                        instance = GameObject.Instantiate(cmd.GameObj, cmd.Locator.position, cmd.Locator.transform.rotation) as GameObject;
                }
                else
                    instance = GameObject.Instantiate(cmd.GameObj) as GameObject;

                if(instance != null && cmd.fValue > 0.0f)
                    GameObject.Destroy(instance, cmd.fValue);
            }
            else if(cmd.ID == (int)SKCmdId.SetAnimStateTime)
            {
                Animator animator = receiver.GetComponent<Animator>();
                if(animator != null)
                    animator.Play(cmd.strValue, 0, cmd.fValue);
            }
            else
                receiver.SendMessage("ProcessSplineCommand", cmd, SendMessageOptions.DontRequireReceiver);
        }
    }
}
