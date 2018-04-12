//
// SKSplineAnimator.cs
//
// Created by Ryan Graham on 09/02/15.
// Copyright (c) 2015 Ryan Graham. All rights reserved.
//

using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace SplineKitPro
{
    public class SKSplineAnimator : MonoBehaviour
    {
        // The spline we're attached to
        [SerializeField] GameObject m_splineGameObject;
        public GameObject SplineGameObject
        {
            get { return m_splineGameObject; }
            set
            {
                if(m_splineGameObject != value)
                {
                    m_spline = null;
                    m_splineGameObject = value;
                    if(m_splineGameObject != null)
                    {
                        m_spline = m_splineGameObject.GetComponent<SKSpline>();
                    }
                    SendMessage("SplineSet", SendMessageOptions.DontRequireReceiver);
                }
            }
        }

        [SerializeField] bool m_editorSplineFoldout = false;
        public bool SplineFoldout
        {
            get { return m_editorSplineFoldout; }
            set { m_editorSplineFoldout = value; }
        }

        [SerializeField] bool m_editorStartupFoldout = false;
        public bool StartupFoldout
        {
            get { return m_editorStartupFoldout; }
            set { m_editorStartupFoldout = value; }
        }

        [SerializeField] bool m_editorSamplingFoldout = false;
        public bool SamplingFoldout
        {
            get { return m_editorSamplingFoldout; }
            set { m_editorSamplingFoldout = value; }
        }

        [SerializeField] bool m_editorLoopingFoldout = false;
        public bool LoopingFoldout
        {
            get { return m_editorLoopingFoldout; }
            set { m_editorLoopingFoldout = value; }
        }

        [SerializeField] bool m_editorSpeedFoldout = false;
        public bool SpeedFoldout
        {
            get { return m_editorSpeedFoldout; }
            set { m_editorSpeedFoldout = value; }
        }

        [SerializeField] bool m_editorUpdateFoldout = false;
        public bool UpdateFoldout
        {
            get { return m_editorUpdateFoldout; }
            set { m_editorUpdateFoldout = value; }
        }

        [SerializeField] bool m_editorSplineRotationFoldout = false;
        public bool SplineRotationFoldout
        {
            get { return m_editorSplineRotationFoldout; }
            set { m_editorSplineRotationFoldout = value; }
        }

        [SerializeField] bool m_editorScaleFoldout = false;
        public bool ScaleFoldout
        {
            get { return m_editorScaleFoldout; }
            set { m_editorScaleFoldout = value; }
        }

        [SerializeField] bool m_editorInfoFoldout = false;
        public bool InfoFoldout
        {
            get { return m_editorInfoFoldout; }
            set { m_editorInfoFoldout = value; }
        }

        // Turn on / off the evaluator
        [SerializeField] bool m_run = false;
        public bool Run
        {
            get { return m_run; }
            set { m_run = value; }
        }

        // The Unity update method to use when evaluating
        public enum LoopType { None, Circular, Reverse };
        [SerializeField] LoopType m_loopType = LoopType.None;
        public LoopType Loop
        {
            get { return m_loopType; }
            set { m_loopType = value; }
        }

        // Apply spline pitch
        [SerializeField] bool m_useSplineRotation = true;
        public bool UseSplineRotation
        {
            get { return m_useSplineRotation; }
            set { m_useSplineRotation = value; }
        }

        // Apply spline pitch
        [SerializeField] bool m_applyPitch = true;
        public bool ApplyPitch
        {
            get { return m_applyPitch; }
            set { m_applyPitch = value; }
        }

        // Apply spline heading
        [SerializeField] bool m_applyHeading = true;
        public bool ApplyHeading
        {
            get { return m_applyHeading; }
            set { m_applyHeading = value; }
        }

        // Apply spline roll
        [SerializeField]
        bool m_applyRoll = true;
        public bool ApplyRoll
        {
            get { return m_applyRoll; }
            set { m_applyRoll = value; }
        }

        // Apply spline bank to roll
        [SerializeField] bool m_applyBanking = false;
        public bool ApplyBanking
        {
            get { return m_applyBanking; }
            set { m_applyBanking = value; }
        }

        [SerializeField] float m_bankLookAheadScalar = 1.0f;
        public float BankLookAheadScalar
        {
            get { return m_bankLookAheadScalar; }
            set { m_bankLookAheadScalar = value; }
        }

        [SerializeField] float m_bankAmplifier = 1.0f;
        public float BankAmplifier
        {
            get { return m_bankAmplifier; }
            set { m_bankAmplifier = value; }
        }

        [SerializeField] float m_maxBank = -1.0f;
        public float MaxBank
        {
            get { return m_maxBank; }
            set { m_maxBank = value; }
        }
        
        [SerializeField] bool m_smoothRotation = false;
        public bool SmoothRotation
        {
            get { return m_smoothRotation; }
            set { m_smoothRotation = value; }
        }

        [SerializeField] float m_rotationSmoother = 0.05f;
        public float RotationSmoother
        {
            get { return m_rotationSmoother; }
            set { m_rotationSmoother = value; }
        }

        // Moves game object back to the beginning of the spline when the end is reached
        [SerializeField] bool m_resetAtEnd = false;
        public bool ResetAtEnd
        {
            get { return m_resetAtEnd; }
            set { m_resetAtEnd = value; }
        }

        // Sets the game object active to false when the end of the spline is reached
        [SerializeField] bool m_disableAtEnd = false;
        public bool DisableAtEnd
        {
            get { return m_disableAtEnd; }
            set { m_disableAtEnd = value; }
        }

        [SerializeField] float m_velocity = 0.0f;
        public float Velocity
        {
            get { return m_velocity; }
            set { m_velocity = value; }
        }

        [SerializeField] float m_maxVelocity = 1000.0f;
        public float MaxVelocity
        {
            get { return m_maxVelocity; }
            set { m_maxVelocity = value; }
        }

        [SerializeField] float m_acceleration = 0.0f;
        public float Acceleration
        {
            get { return m_acceleration; }
            set { m_acceleration = value; }
        }

        // The delta time step to use when evaluating
        public enum TimeDeltaType { Variable, Fixed, Smoothed, Unscaled };
        [SerializeField] TimeDeltaType m_deltaType = TimeDeltaType.Fixed;
        public TimeDeltaType DeltaType
        {
            get { return m_deltaType; }
            set { m_deltaType = value; }
        }

        // The Unity update method to use when evaluating
        public enum UpdateMethodType { Update, FixedUpdate, LateUpdate };
        [SerializeField] UpdateMethodType m_updateMethod = UpdateMethodType.FixedUpdate;
        public UpdateMethodType UpdateMethod
        {
            get { return m_updateMethod; }
            set { m_updateMethod = value; }
        }

        public enum TransformUpdateType { Local, Global };
        [SerializeField] TransformUpdateType m_positionUpdateType = TransformUpdateType.Local;
        public TransformUpdateType PositionUpdateType
        {
            get { return m_positionUpdateType; }
            set { m_positionUpdateType = value; }
        }

        [SerializeField] TransformUpdateType m_rotationUpdateType = TransformUpdateType.Local;
        public TransformUpdateType RotationUpdateType
        {
            get { return m_rotationUpdateType; }
            set { m_rotationUpdateType = value; }
        }
       
        [SerializeField] SKAnimationCurveContainer m_motionCurve;
        public SKAnimationCurveContainer MotionCurve
        {
            get { return m_motionCurve; }
            set 
            {
                m_motionCurve = value;
                if(m_motionCurve != null)
                {
                    m_motionTVal = m_motionCurve.Speed > 0.0f ? 0.0f : m_motionCurve.Duration;
                    m_motionPrevVal = Mathf.Abs(m_motionCurve.AnimCurve.Evaluate(m_motionTVal));
                }
            }
        }

        [SerializeField] int m_motionLayer = 0;
        public int MotionLayer
        {
            get { return m_motionLayer; }
            set { m_motionLayer = value; }
        }

        [Range(0.0f, 1.0f)]
        [SerializeField] float m_motionTVal = 0.0f;
        public float MotionTVal
        {
            get { return m_motionTVal; }
            set { m_motionTVal = value; }
        }

        // The current t value
        [Range(0.0f, 1.0f)]
        [SerializeField] float m_tVal = 0.0f;
        public float tVal
        {
            get { return m_tVal; }
            set { m_tVal = value; }
        }

        [SerializeField] SKSpline m_spline;
        public SKSpline Spline
        {
            get { return m_spline; }
        }

        [SerializeField] bool m_useAdaptiveSampling = true;
        public bool UseAdaptiveSampling
        {
            get { return m_useAdaptiveSampling; }
            set { m_useAdaptiveSampling = value; }
        }

        [SerializeField] float m_adaptiveSubSampleScalar = 0.01f;
        public float AdaptiveSubSampleScalar
        {
            get { return m_adaptiveSubSampleScalar; }
            set { m_adaptiveSubSampleScalar = value; }
        }

        //protected Vector3 m_baseLocalPosition;
        //public Vector3 BasePosition
        //{
        //    get { return m_baseLocalPosition; }
        //}
        //protected Quaternion m_baseLocalRotation;
        //public Quaternion BaseRotation
        //{
        //    get { return m_baseLocalRotation; }
        //}
        [SerializeField] Vector3 m_baseLocalScale = Vector3.one;
        public Vector3 BaseLocalScale
        {
            get { return m_baseLocalScale; }
            set { m_baseLocalScale = value; }
        }
        [SerializeField] bool m_overrideBaseScale = false;
        public bool OverrideBaseScale
        {
            get { return m_overrideBaseScale; }
            set { m_overrideBaseScale = value; }
        }
        //protected bool m_baseTransformInitialized = false;
        protected bool m_inReverse = false;
        public bool InReverse
        {
            get { return m_inReverse; }
            set { m_inReverse = value; }
        }
        protected bool m_restoreReverseOnJunction = false;
        public bool RestoreReverseOnJunction
        {
            get { return m_restoreReverseOnJunction; }
            set { m_restoreReverseOnJunction = value; }
        }

        protected Animator m_animator;
        protected float m_motionPrevVal = 0.0f;
        protected bool m_motionSyncToCurrAnim = false;
        public bool SyncMotionToAnimCurve
        {
            get { return m_motionSyncToCurrAnim; }
            set { m_motionSyncToCurrAnim = value; }
        }
        protected float m_prevTVal = 0.0f;

#if UNITY_EDITOR
        //--------------------------------------------------------------
        void OnDrawGizmos()
        {
            InitSignals();
        }
#endif
        //--------------------------------------------------------------
        public virtual void Start()
        {
            InitSignals();

            if(m_splineGameObject != null)
            {
                m_spline = m_splineGameObject.GetComponent<SKSpline>();
            }

            if(!m_overrideBaseScale)
                m_baseLocalScale = transform.localScale;

            //m_baseLocalPosition = transform.localPosition;
            //m_baseLocalRotation = transform.localRotation;
            //m_baseTransformInitialized = true;
            m_inReverse = false;

            m_animator = GetComponent<Animator>();
        }

        //--------------------------------------------------------------
        public void InitSignals()
        {
            if(gameObject.activeInHierarchy && isActiveAndEnabled)
            {
                if(!SKSplineSignalManager.Instance.IsCallbackRegistered<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited))
                {
                    SKSplineSignalManager.Instance.SubscribeToSignal<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited);
                }
            }
        }

        void OnSplineEdited(SKSpline editedSpline)
        {
            //--------------------------------------------------------------
            if(m_spline == editedSpline)
            {
                Evaluate();
            }
        }

        //--------------------------------------------------------------
        public virtual void OnDestroy()
        {
            SKSplineSignalManager.Instance.EmitSignal(SKSplineSignalManager.kSplineAnimComplete, this);
            BroadcastMessage("SplineAnimatorFinish", m_spline, SendMessageOptions.DontRequireReceiver);

            SKSplineSignalManager.Instance.UnsubscribeToSignal<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited);
        }

        //--------------------------------------------------------------
        public void SetSpline(SKSpline spline)
        {
            SplineGameObject = spline != null ? spline.gameObject : null;
        }

        //--------------------------------------------------------------
        public void SetT(float t)
        {
            m_tVal = t;
        }

        //--------------------------------------------------------------
        public float GetBank(float lookAheadScalar=2.0f, float amplify=1.0f, float maxBank=-1.0f)
        {
            float lookAheadDist = CalculateLookAheadDist();
            return Spline.GetBank(m_tVal, lookAheadDist, lookAheadScalar, amplify, maxBank);
        }

        //--------------------------------------------------------------
        void Update()
        {
            if(m_updateMethod == UpdateMethodType.Update)
                Step();
        }

        //--------------------------------------------------------------
        void FixedUpdate()
        {
            if(m_updateMethod == UpdateMethodType.FixedUpdate)
                Step();
        }

        //--------------------------------------------------------------
        void LateUpdate()
        {
            if(m_updateMethod == UpdateMethodType.LateUpdate)
                Step();
        }

        //--------------------------------------------------------------
        void Step()
        {
            if(m_spline == null || m_spline.Length <= 0.0)
                return;

            float deltaTime = UnityEngine.Time.deltaTime;
            if(m_deltaType == TimeDeltaType.Fixed)
                deltaTime = UnityEngine.Time.deltaTime;
            else if(m_deltaType == TimeDeltaType.Smoothed)
                deltaTime = UnityEngine.Time.smoothDeltaTime;
            else if(m_deltaType == TimeDeltaType.Unscaled)
                deltaTime = UnityEngine.Time.unscaledDeltaTime;

            if(m_run)
            {
                m_prevTVal = m_tVal;

                // Evaluate motion curve if used
                bool useMotionCurve = false;
                if(m_motionCurve != null && m_animator != null && m_motionTVal <= m_motionCurve.Duration)
                {
                    if(m_motionSyncToCurrAnim && !string.IsNullOrEmpty(m_motionCurve.ClipName))
                    {
                        AnimatorStateInfo currentStateInfo = m_animator.GetCurrentAnimatorStateInfo(m_motionLayer);

#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9
                        AnimationInfo[] clipInfo = m_animator.GetCurrentAnimationClipState(0);
#else
                        AnimatorClipInfo[] clipInfo = m_animator.GetCurrentAnimatorClipInfo(m_motionLayer);
#endif
                        for(int i=0; i<clipInfo.Length; i++)
                        {
                            if(clipInfo[i].clip.name == m_motionCurve.ClipName)
                            {
                                float pct = currentStateInfo.normalizedTime - (int)currentStateInfo.normalizedTime;
                                if(m_motionCurve.Speed < 0.0f)
                                    pct = 1.0f - pct;

                                m_motionTVal = pct * clipInfo[i].clip.length * clipInfo[i].weight; // TODO: Fix blending, currently, blending will likely cause issues...

                                useMotionCurve = true;
                                break;
                            }
                        }
                    }
                    else
                    {
                        m_motionTVal += m_motionCurve.Speed*deltaTime;
                        useMotionCurve = true;
                    }
                }
                
                // Calculate the distance to move
                float distanceToMove = 0.0f;
                if(useMotionCurve)
                {
                    float motionVal = Mathf.Abs(m_motionCurve.AnimCurve.Evaluate(m_motionTVal));
                    distanceToMove =  Mathf.Abs(motionVal - m_motionPrevVal);
                    m_motionPrevVal = motionVal;
                }
                else
                {
                    if(m_acceleration != 0.0f)
                    {
                        distanceToMove = m_velocity * deltaTime + m_acceleration * deltaTime * deltaTime * 0.5f;
                        m_velocity += m_acceleration * deltaTime;
                        if((m_acceleration > 0.0f && m_velocity > m_maxVelocity) || (m_acceleration < 0.0f && m_velocity < m_maxVelocity))
                            m_velocity = m_maxVelocity;
                    }
                    else
                        distanceToMove = m_velocity * deltaTime;
                }

                // Evaluate
                if(distanceToMove > 0.0f)
                {
                    float adaptiveStepT = (distanceToMove * m_adaptiveSubSampleScalar) / Spline.Length;
                    if(m_useAdaptiveSampling && adaptiveStepT > 0.001f)
                    {
                        AdaptiveStep(distanceToMove);
                    }
                    else
                    {
                        m_tVal += m_inReverse ? -(distanceToMove / m_spline.Length) : (distanceToMove / m_spline.Length);
                        m_spline.EvaluateNodes(this, m_prevTVal, m_tVal);

                        CheckForJunction();
                        Evaluate();
                        CheckForEndOfSpline();
                    }
                }
                else
                {
                    Evaluate();
                }
            }
        }

        //--------------------------------------------------------------
        public void AdaptiveStep(float distanceToMove)
        {
            float unscaledTVal = m_tVal;
            float distTraveled = 0.0f;
            Vector3 lastPos = transform.position;
            Vector3 stepPos = transform.position;
            float lookAheadDelta = distanceToMove * m_adaptiveSubSampleScalar;
            if(float.IsInfinity(lookAheadDelta) || float.IsNaN(lookAheadDelta) || lookAheadDelta < 0.0001f)
                lookAheadDelta = distanceToMove;

            float stepT = lookAheadDelta / m_spline.Length;
            while(distTraveled < distanceToMove)
            {
                m_spline.Evaluate(m_tVal, ref stepPos);
                distTraveled += Vector3.Distance(stepPos, lastPos);
                lastPos = stepPos;
                m_tVal += m_inReverse ? -stepT : stepT;
                unscaledTVal += m_inReverse ? -stepT : stepT;

                m_spline.EvaluateNodes(this, m_prevTVal, unscaledTVal);

                float distOver = CheckForJunction();
                if(distOver != 0.0f)
                {
                    distanceToMove = distOver;
                    distTraveled = 0.0f;
                }

                if(CheckForEndOfSpline())
                    break;
            }

            Evaluate();
        }

        //--------------------------------------------------------------
        public void Evaluate()
        {
            if(this == null)
                return;

            ///
            /// This class will be re-initialized whenever this game object is deselected/reselected, so we can't evaluate
            /// in this case because m_baseTransformInitialized will be reset and the transform will have been updated to
            /// match the spline, so for ex, the m_baseLocalScale will keep being scaled to the last evaluated scale for each
            /// deselect/select... We need some way for m_baseTransformInitialized to stay persistant in editor...
            /// 
            //// For editor use - since Awake/Start won't get called, we need to set the base scale here on the first update
            //if(!m_baseTransformInitialized)
            //{
            //    m_baseLocalPosition = transform.localPosition;
            //    m_baseLocalRotation = transform.localRotation;
            //    m_baseLocalScale = transform.localScale;
            //    m_baseTransformInitialized = true;
            //}

            //if(m_tVal <= 1.0f)
            {
                float deltaTime = UnityEngine.Time.deltaTime;
                if(m_deltaType == TimeDeltaType.Fixed)
                    deltaTime = UnityEngine.Time.fixedDeltaTime;
                else if(m_deltaType == TimeDeltaType.Smoothed)
                    deltaTime = UnityEngine.Time.smoothDeltaTime;
                else if(m_deltaType == TimeDeltaType.Unscaled)
                    deltaTime = UnityEngine.Time.unscaledDeltaTime;

#if UNITY_EDITOR
                if(deltaTime <= 0.0f)
                    deltaTime = 1.0f / 60.0f;
#endif

                float lookAheadDist = CalculateLookAheadDist();
                m_spline.Evaluate(this, m_tVal, deltaTime, lookAheadDist);
            }
        }

        //--------------------------------------------------------------
        float CheckForJunction()
        {
            float distanceOver = 0.0f;

            // Check for a transition to a new spline
            if(m_tVal >= 1.0f)
            {
                SKPointNode lastPt = m_spline.GetControlPoint(m_spline.Count()-2);
                if(lastPt != null && lastPt.Weld != null)
                {
                    // Transition to the welded spline
                    SKNode node = lastPt.Weld.GetComponent<SKNode>();
                    if(node != null)
                    {
                        distanceOver = (m_tVal - 1.0f) / m_spline.Length;
                        float tOver = distanceOver / node.Spline.Length;
                        SplineGameObject = node.Spline.gameObject;
                        if(m_restoreReverseOnJunction)
                        {
                            m_tVal = Mathf.Max(0.0f, node.tVal - tOver);
                            m_inReverse = true;
                            m_restoreReverseOnJunction = false;
                        }
                        else
                        {
                            m_tVal = node.tVal + tOver;
                        }
                    }
                }
                else if(m_loopType == LoopType.Circular && Spline.IsLooped)
                {
                    m_tVal = m_tVal - 1.0f;
                    distanceOver = m_tVal / m_spline.Length;
                }
            }
            else if(m_inReverse && m_tVal <= 0.0f)
            {
                SKPointNode firstPt = m_spline.GetControlPoint(1);
                if(firstPt != null && firstPt.Weld != null)
                {
                    // Transition to the welded spline
                    SKNode node = firstPt.Weld.GetComponent<SKNode>();
                    if(node != null)
                    {
                        distanceOver = -m_tVal / m_spline.Length;
                        float tOver = distanceOver / node.Spline.Length;
                        SplineGameObject = node.Spline.gameObject;
                        m_tVal = Mathf.Max(0.0f, node.tVal - tOver);
                    }
                }
            }

            return distanceOver;
        }

        //--------------------------------------------------------------
        bool CheckForEndOfSpline()
        {
            if(m_velocity > 0.0f && (m_tVal >= 1.0f || m_tVal < 0.0f))
            {
                m_tVal = Mathf.Clamp01(m_tVal);

                if(m_resetAtEnd || m_loopType == LoopType.Circular)
                {
                    // Check if we are on a branch, if so, loop back to the root spline
                    SKSpline rootSpline = m_spline;
                    SKBranchNode branchNode = rootSpline.GetComponentInParent<SKBranchNode>();
                    while(branchNode != null)
                    {
                        rootSpline = branchNode.GetComponentInParent<SKSpline>();
                        if(rootSpline != null)
                            branchNode = rootSpline.GetComponentInParent<SKBranchNode>();
                    }
                    if(rootSpline != m_spline)
                        SplineGameObject = rootSpline.gameObject;

                    m_tVal = 0.0f;
                    m_prevTVal = 0.0f;
                }

                if(m_loopType == LoopType.Reverse)
                    m_inReverse = !m_inReverse;
                //else if(m_loopType == LoopType.None)
                //    m_run = false;

                SKSplineSignalManager.Instance.EmitSignal(SKSplineSignalManager.kSplineAnimComplete, this);
                BroadcastMessage("SplineAnimatorFinish", m_spline, SendMessageOptions.DontRequireReceiver);

                if(m_disableAtEnd)
                    gameObject.SetActive(false);

                return true;
            }

            return false;
        }

        //--------------------------------------------------------------
        public float CalculateLookAheadDist()
        {
            float deltaTime = UnityEngine.Time.deltaTime;
            if(m_deltaType == TimeDeltaType.Fixed)
                deltaTime = UnityEngine.Time.fixedDeltaTime;
            else if(m_deltaType == TimeDeltaType.Smoothed)
                deltaTime = UnityEngine.Time.smoothDeltaTime;
            else if(m_deltaType == TimeDeltaType.Unscaled)
                deltaTime = UnityEngine.Time.unscaledDeltaTime;

            float lookAheadDist = m_inReverse ? -m_velocity * deltaTime : m_velocity * deltaTime;
            if(lookAheadDist == 0.0f)
                lookAheadDist = m_inReverse ? -1.0f : 1.0f;

            return lookAheadDist;
        }

        //--------------------------------------------------------------
        public void ClearDelayedCommands()
        {
            if(m_spline != null)
                m_spline.ClearDelayedCommands();
        }

        //--------------------------------------------------------------
        void ProcessSplineCommand(SKCmd cmd)
        {
            if(cmd.ID == (int)SKCmdId.SetRun)
            {
                m_run = cmd.fValue != 0.0f;
            }
            else if(cmd.ID == (int)SKCmdId.SetSpeed)
            {
                bool inheritVelocity = cmd.iAuxValue1 != 0;
                if(!inheritVelocity)
                    m_velocity = cmd.fValue;

                m_acceleration = cmd.fAuxValue1;
                if(m_acceleration != 0.0f)
                    m_maxVelocity = cmd.fAuxValue2;
            }
            else if(cmd.ID == (int)SKCmdId.ApplyMotionCurve)
            {
                MotionCurve = cmd.Curve;
                m_motionSyncToCurrAnim = cmd.iValue != 0;
            }
        }
    }
}
