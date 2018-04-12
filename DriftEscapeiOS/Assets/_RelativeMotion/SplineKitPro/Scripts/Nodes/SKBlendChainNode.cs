//
// SKBlendChainNode.cs
//
// Created by Ryan Graham on 01/19/17.
// Copyright (c) 2017 Ryan Graham, all rights reserved.
//

using UnityEngine;
using System.Collections.Generic;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace SplineKitPro
{
    [ExecuteInEditMode]
    public abstract class SKBlendChainNode : SKNode
    {
        [SerializeField] protected NodeDirection m_direction = NodeDirection.kBoth;
        public NodeDirection Direction
        {
            get { return m_direction; }
            set { m_direction = value; }
        }

        [SerializeField] protected float m_blendInT;
        public float BlendInT
        {
            get { return m_blendInT; }
            set { m_blendInT = value; }
        }

        [SerializeField] protected float m_blendInD;
        public float BlendInD
        {
            get { return m_blendInD; }
            set { m_blendInD = value; }
        }

        [SerializeField] protected float m_blendOutT;
        public float BlendOutT
        {
            get { return m_blendOutT; }
            set { m_blendOutT = value; }
        }

        [SerializeField] protected float m_blendOutD;
        public float BlendOutD
        {
            get { return m_blendOutD; }
            set { m_blendOutD = value; }
        }

        public abstract float LastTVal { get; }


#if UNITY_EDITOR
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
        public abstract float GetHandleSize(Vector3 pos);

        //--------------------------------------------------------------
        public abstract void SetNodeTValue(float tvalue);

        //--------------------------------------------------------------
        public abstract void SetTValue(int i, float tvalue);

        //--------------------------------------------------------------
        public abstract bool GetBlendInDrawTransform(out Vector3 pos, out Quaternion rot, out Vector3 scale, out Vector3 localOffset);

        //--------------------------------------------------------------
        public abstract bool GetBlendOutDrawTransform(out Vector3 pos, out Quaternion rot, out Vector3 scale, out Vector3 localOffset);

        //--------------------------------------------------------------
        public abstract bool GetDrawTransform(int i, out Vector3 pos, out Quaternion rot, out Vector3 scale, out Vector3 localOffset);

        //--------------------------------------------------------------
        protected bool GetDrawTransform(float t, float sizeScalar, Vector3 drawOffset, out Vector3 pos, out Quaternion rot, out Vector3 scale, out Vector3 localOffset)
        {
            pos = Vector3.zero;
            rot = Quaternion.identity;
            scale = Vector3.one;
            localOffset = Vector3.zero;

            Spline.Evaluate(t, ref pos, ref rot, ref scale);

            float size = GetHandleSize(pos) * sizeScalar;
            scale.Set(size, size, size);

            Quaternion splineRot = Quaternion.identity;
            Spline.GetSplineRotation(t, ref splineRot);

            localOffset = drawOffset*GetHandleSize(pos);
            pos = pos + splineRot*localOffset;

            return true;
        }
#endif
        //--------------------------------------------------------------
        public abstract int Count();

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
        protected virtual void OnDestroy()
        {
#if UNITY_EDITOR
            SKSplineSignalManager.Instance.UnsubscribeToSignal<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited);
#endif
        }

        //--------------------------------------------------------------
        protected float GlobalToLocalT(float t, float tValStart, float tValEnd)
        {
            float localT = 0.0f;
            if(tValEnd > tValStart)
            {
                if(t < tValStart || t > tValEnd)
                    return -1.0f;

                float tLen = tValEnd - tValStart;
                localT = (t - tValStart) / tLen;
            }
            else if(tValEnd < tValStart)
            {
                if(t < tValEnd || t > tValStart)
                    return -1.0f;

                float tLen = tValStart - tValEnd;
                localT = (tValStart - t) / tLen;
            }

            return localT;
        }
    }
}
