//
// SKAnchorNode.cs
//
// Created by Ryan Graham on 02/02/16.
// Copyright (c) 2016 Ryan Graham, all rights reserved.
//

using UnityEngine;
using System.Collections.Generic;

namespace SplineKitPro
{
    [ExecuteInEditMode]
    public class SKAnchorNode : SKNode
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
        void OnDestroy()
        {
#if UNITY_EDITOR
            if(Spline != null)
                Spline.RemoveAnchorNode(this, false);

            SKSplineSignalManager.Instance.UnsubscribeToSignal<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited);
#endif
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
    }
}
