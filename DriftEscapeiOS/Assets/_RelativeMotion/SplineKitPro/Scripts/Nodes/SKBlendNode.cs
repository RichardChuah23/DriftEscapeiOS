//
// SKNode.cs
//
// Created by Ryan Graham on 01/29/16.
// Copyright (c) 2016 Ryan Graham, all rights reserved.
//

using UnityEngine;
using System.Collections.Generic;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace SplineKitPro
{
#if UNITY_EDITOR
    public enum BlendNodeSubId
    {
        kBlendIn=0,
        kStart,
        kEnd,
        kBlendOut,
    }
#endif

    [System.Obsolete("Depreciated, use SKBlendChainNode instead")]
    [ExecuteInEditMode]
    public class SKBlendNode : SKNode
    {
        [SerializeField] NodeDirection m_direction = NodeDirection.kBoth;
        public NodeDirection Direction
        {
            get { return m_direction; }
            set { m_direction = value; }
        }

        [SerializeField] float m_blendInT;
        public float BlendInT
        {
            get { return m_blendInT; }
            set { m_blendInT = value; }
        }

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

        [SerializeField] float m_endT;
        public float EndT
        {
            get { return m_endT; }
            set { m_endT = value; }
        }

        [SerializeField] float m_blendOutT;
        public float BlendOutT
        {
            get { return m_blendOutT; }
            set { m_blendOutT = value; }
        }

        [SerializeField] Vector3 m_endPosition = Vector3.zero;
        public Vector3 EndPosition
        {
            get { return m_endPosition; }
            set { m_endPosition = value; }
        }
        
        [SerializeField] Quaternion m_startRotation = Quaternion.identity;
        public Quaternion StartRotation
        {
            get { return m_startRotation; }
            set { m_startRotation = value; }
        }

        [SerializeField] Quaternion m_endRotation = Quaternion.identity;
        public Quaternion EndRotation
        {
            get { return m_endRotation; }
            set { m_endRotation = value; }
        }

        [SerializeField] Vector3 m_startScale = Vector3.one;
        public Vector3 StartScale
        {
            get { return m_startScale; }
            set { m_startScale = value; }
        }

        [SerializeField] Vector3 m_endScale = Vector3.one;
        public Vector3 EndScale
        {
            get { return m_endScale; }
            set { m_endScale = value; }
        }

        [SerializeField] bool m_usesRotation;
        public bool UsesRotation
        {
            get { return m_usesRotation; }
            set { m_usesRotation = value; }
        }

        [SerializeField] bool m_usesScale;
        public bool UsesScale
        {
            get { return m_usesScale; }
            set { m_usesScale = value; }
        }

        [SerializeField] bool m_disableBanking = false;
        public bool DisableBanking
        {
            get { return m_disableBanking; }
            set { m_disableBanking = value; }
        }

#if UNITY_EDITOR
        //--------------------------------------------------------------
        public override void OnSplineEdited(SKSpline editedSpline)
        {
            if(Spline == editedSpline)
                SetStartTValue(m_tVal);
        }

        //--------------------------------------------------------------
        public override void OnScriptsReloaded()
        {
            InitSignals();
        }

        //--------------------------------------------------------------
        protected void OnDrawGizmos()
        {
            InitSignals();
        }

        //--------------------------------------------------------------
        public float GetHandleSize(Vector3 pos)
        {
            float handleScale = m_usesRotation ? Spline.RotHandleSizeScale : Spline.ScaleHandleSizeScale;
            return HandleUtility.GetHandleSize(pos) * handleScale * SKRenderer.kBlendNodeDrawScalar;
        }

        //--------------------------------------------------------------
        public bool GetDrawTransform(BlendNodeSubId subNodeId, out Vector3 pos, out Quaternion rot, out Vector3 scale, out Vector3 localOffset)
        {
            pos = Vector3.zero;
            rot = Quaternion.identity;
            scale = Vector3.one;
            localOffset = Vector3.zero;

            float t = m_tVal;
            if(subNodeId == BlendNodeSubId.kBlendIn)
                t = m_blendInT;
            else if(subNodeId == BlendNodeSubId.kEnd)
                t = m_endT;
            else if(subNodeId == BlendNodeSubId.kBlendOut)
                t = m_blendOutT;

            Spline.Evaluate(t, ref pos, ref rot, ref scale);

            if(m_usesScale && (subNodeId == BlendNodeSubId.kStart || subNodeId == BlendNodeSubId.kEnd))
            {
                scale *= GetHandleSize(pos);
            }
            else if(subNodeId == BlendNodeSubId.kBlendIn || subNodeId == BlendNodeSubId.kBlendOut)
            {
                float size = GetHandleSize(pos) * 0.25f;
                scale.Set(size, size, size);
            }
            else
            {
                float size = GetHandleSize(pos);
                scale.Set(size, size, size);
            }

            Quaternion splineRot = Quaternion.identity;
            Spline.GetSplineRotation(t, ref splineRot);

            Vector3 nodeDrawOffset = m_usesScale ? SKRenderer.kScaleNodeDrawOffset : SKRenderer.kRotationNodeDrawOffset;
            localOffset = nodeDrawOffset*GetHandleSize(pos);
            pos = pos + splineRot*localOffset;

            return true;
        }

        //--------------------------------------------------------------
        public void SetStartTValue(float tvalue)
        {
            float deltaT = tvalue - m_tVal;
            m_blendInT = Mathf.Clamp01(m_blendInT + deltaT);
            m_tVal = Mathf.Clamp01(m_tVal + deltaT);
            m_endT = Mathf.Clamp01(m_endT + deltaT);
            m_blendOutT = Mathf.Clamp01(m_blendOutT + deltaT);

            Vector3 pos = Vector3.zero;
            if(Spline.Evaluate(m_tVal, ref pos))
                transform.position = pos;

            // Update the end transform
            if(Spline.Evaluate(m_endT, ref pos))
                m_endPosition = pos;
        }

        //--------------------------------------------------------------
        public void SetEndTValue(float tvalue)
        {
            Vector3 pos = Vector3.zero;
            if(Spline.Evaluate(tvalue, ref pos))
            {
                float deltaT = tvalue - m_endT;
                m_endT = Mathf.Clamp01(m_endT + deltaT);
                m_blendOutT = Mathf.Clamp01(m_blendOutT + deltaT);

                m_endPosition = pos;
            }
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
            SKSplineSignalManager.Instance.UnsubscribeToSignal<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited);

            //if(Spline != null)
            //{
            //    if(m_usesRotation)
            //        Spline.RemoveRotationNode(this, false);

            //    if(m_usesScale)
            //        Spline.RemoveScaleNode(this, false);
            //}
#endif
        }

        //--------------------------------------------------------------
        protected float GlobalToLocalT(float t)
        {
            float localT = 0.0f;
            if(m_endT > m_tVal)
            {
                if(t < m_tVal || t > m_endT)
                    return -1.0f;

                float tLen = m_endT - m_tVal;
                localT = (t - m_tVal) / tLen;
            }
            else if(m_endT < m_tVal)
            {
                if(t < m_endT || t > m_tVal)
                    return -1.0f;

                float tLen = m_tVal - m_endT;
                localT = (m_tVal - t) / tLen;
            }

            return localT;
        }

        //--------------------------------------------------------------
        public virtual bool EvaluateRotation(float t, ref Quaternion rot)
        {
            if(t >= m_tVal && t <= m_endT)
            {
                float localT = GlobalToLocalT(t);
                if(localT != -1.0f)
                {
                    rot = Quaternion.Lerp(m_startRotation, m_endRotation, localT);
                }
                else
                    return false;
            }
            else if(t >= m_blendInT && t < m_tVal)
            {
                // Blend in
                float tLen = m_tVal - m_blendInT;
                float localT = (t - m_blendInT) / tLen;

                Quaternion blendFromRot = Quaternion.identity;
                Spline.GetSplineRotation(m_blendInT, ref blendFromRot);
                //Spline.GetRotation(m_blendInT, ref blendFromRot, this);
                rot = Quaternion.Lerp(blendFromRot, m_startRotation, localT);
            }
            else if(t > m_endT && t <= m_blendOutT)
            {
                // Blend out
                float tLen = m_blendOutT - m_endT;
                float localT = (t - m_endT) / tLen;

                Quaternion blendToRot = Quaternion.identity;
                Spline.GetSplineRotation(m_blendOutT, ref blendToRot);
                //Spline.GetRotation(m_blendOutT, ref blendToRot, this);
                rot = Quaternion.Lerp(m_endRotation, blendToRot, localT);
            }

            return true;
        }

        //--------------------------------------------------------------
        public virtual bool EvaluateScale(float t, ref Vector3 scale)
        {
            if(t >= m_tVal && t <= m_endT)
            {
                float localT = GlobalToLocalT(t);
                if(localT != -1.0f)
                {
                    scale = Vector3.Lerp(m_startScale, m_endScale, localT);
                }
                else
                    return false;
            }
            else if(t >= m_blendInT && t < m_tVal)
            {
                // Blend in
                float tLen = m_tVal - m_blendInT;
                float localT = (t - m_blendInT) / tLen;

                Vector3 blendFromScale = Vector3.one;
                //Spline.GetScale(m_blendInT, ref blendFromScale, this);
                scale = Vector3.Lerp(blendFromScale, m_startScale, localT);
            }
            else if(t > m_endT && t <= m_blendOutT)
            {
                // Blend out
                float tLen = m_blendOutT - m_endT;
                float localT = (t - m_endT) / tLen;

                Vector3 blendToScale = Vector3.one;
                //Spline.GetScale(m_blendOutT, ref blendToScale, this);
                scale = Vector3.Lerp(m_endScale, blendToScale, localT);
            }

            return true;
        }
    }
}
