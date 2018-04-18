//
// SKScaleNode.cs
//
// Created by Ryan Graham on 01/17/2017.
// Copyright (c) 2017 Ryan Graham, all rights reserved.
//

using UnityEngine;
using System.Collections.Generic;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace SplineKitPro
{
    [System.Serializable]
    public class SKScale
    {
#if UNITY_EDITOR
        public bool FoldoutOpen;
#endif

        public float tVal;
        public float Distance;
        public Vector3 LocalScale;
        public Vector3 Position;
    }

    [ExecuteInEditMode]
    public class SKScaleNode : SKBlendChainNode
    {
        [SerializeField] List<SKScale> m_scales = new List<SKScale>();
        public List<SKScale> Scales
        {
            get { return m_scales; }
            set { m_scales = value; }
        }

        //--------------------------------------------------------------
        public override float tVal
        {
            get
            {
                if(m_scales.Count > 0)
                    return m_scales[0].tVal;

                return -1.0f;
            }
            set
            {
                if(m_scales.Count > 0)
                    m_scales[0].tVal = value;
            }
        }

        //--------------------------------------------------------------
        public override float Distance
        {
            get
            {
                if(m_scales.Count > 0)
                    return m_scales[0].Distance;

                return -1.0f;
            }
            set
            {
                if(m_scales.Count > 0)
                    m_scales[0].Distance = value;
            }
        }

        //--------------------------------------------------------------
        public override float LastTVal
        {
            get
            {
                if(m_scales.Count > 0)
                    return m_scales[m_scales.Count-1].tVal;

                return -1.0f;
            }
        }

#if UNITY_EDITOR
        //--------------------------------------------------------------
        public override void OnSplineEdited(SKSpline editedSpline)
        {
            if(Spline == editedSpline)
            {
                // Renormalize the tvals
                m_blendInT = m_blendInD / Spline.Length;
                m_blendOutT = m_blendOutD / Spline.Length;
                for(int i=0; i<m_scales.Count; i++)
                    m_scales[i].tVal = m_scales[i].Distance / Spline.Length;

                SetNodeTValue(tVal);
            }
        }

        //--------------------------------------------------------------
        public override float GetHandleSize(Vector3 pos)
        {
            return HandleUtility.GetHandleSize(pos) * Spline.ScaleHandleSizeScale * SKRenderer.kBlendNodeDrawScalar;
        }

        //--------------------------------------------------------------
        public override bool GetBlendInDrawTransform(out Vector3 pos, out Quaternion rot, out Vector3 scale, out Vector3 localOffset)
        {
            return GetDrawTransform(m_blendInT, 0.25f, SKRenderer.kScaleNodeDrawOffset, out pos, out rot, out scale, out localOffset);
        }

        //--------------------------------------------------------------
        public override bool GetBlendOutDrawTransform(out Vector3 pos, out Quaternion rot, out Vector3 scale, out Vector3 localOffset)
        {
            return GetDrawTransform(m_blendOutT, 0.25f, SKRenderer.kScaleNodeDrawOffset, out pos, out rot, out scale, out localOffset);
        }

        //--------------------------------------------------------------
        public override bool GetDrawTransform(int i, out Vector3 pos, out Quaternion rot, out Vector3 scale, out Vector3 localOffset)
        {
            pos = Vector3.zero;
            rot = Quaternion.identity;
            scale = Vector3.one;
            localOffset = Vector3.zero;

            Spline.Evaluate(m_scales[i].tVal, ref pos, ref rot, ref scale);

            scale *= GetHandleSize(pos);

            Quaternion splineRot = Quaternion.identity;
            Spline.GetSplineRotation(m_scales[i].tVal, ref splineRot);

            localOffset = SKRenderer.kScaleNodeDrawOffset*GetHandleSize(pos);
            pos = pos + splineRot*localOffset;

            return true;
        }

        //--------------------------------------------------------------
        public override void SetNodeTValue(float tvalue)
        {
            float deltaT = tvalue - m_scales[0].tVal;
            m_blendInT = Mathf.Clamp01(m_blendInT + deltaT);
            m_blendInD = m_blendInT * Spline.Length;

            for(int i=0; i<m_scales.Count; i++)
            {
                m_scales[i].tVal = Mathf.Clamp01(m_scales[i].tVal + deltaT);
                m_scales[i].Distance = m_scales[i].tVal * Spline.Length;
            }

            m_blendOutT = Mathf.Clamp01(m_blendOutT + deltaT);
            m_blendOutD = m_blendOutT * Spline.Length;

            Vector3 pos = Vector3.zero;
            if(Spline.Evaluate(m_scales[0].tVal, ref pos))
                transform.position = pos;

            // Update the positions
            for(int i=0; i<m_scales.Count; i++)
            {
                if(Spline.Evaluate(m_scales[i].tVal, ref pos))
                    m_scales[i].Position = pos;
            }
        }

        //--------------------------------------------------------------
        public override void SetTValue(int i, float tvalue)
        {
            Vector3 pos = Vector3.zero;
            if(Spline.Evaluate(tvalue, ref pos))
            {
                float deltaT = tvalue - m_scales[i].tVal;
                m_scales[i].tVal = Mathf.Clamp01(m_scales[i].tVal + deltaT);
                m_scales[i].Distance = m_scales[i].tVal * Spline.Length;
                //m_blendOutT = Mathf.Clamp01(m_blendOutT + deltaT);
                //m_blendOutD = m_blendOutT * Spline.Length;

                m_scales[i].Position = pos;
            }
        }
#endif

        //--------------------------------------------------------------
        public override int Count()
        {
            return m_scales.Count;
        }

        //--------------------------------------------------------------
        protected override void OnDestroy()
        {
            base.OnDestroy();

#if UNITY_EDITOR
            if(Spline != null)
                Spline.RemoveScaleNode(this, false);
#endif
        }

        //--------------------------------------------------------------
        public bool EvaluateScale(float t, ref Vector3 scale)
        {
            float tValStart = m_scales[0].tVal;
            float tValEnd = m_scales[m_scales.Count-1].tVal;

            if(t >= tValStart && t <= tValEnd && m_scales.Count > 1)
            {
                for(int i=0; i<m_scales.Count-1; i++)
                {
                    if(t >= m_scales[i].tVal && t <= m_scales[i+1].tVal)
                    {
                        float localT = GlobalToLocalT(t, m_scales[i].tVal, m_scales[i+1].tVal);
                        scale = Vector3.Lerp(m_scales[i].LocalScale, m_scales[i+1].LocalScale, localT);
                        return true;
                    }
                }

                return false;
            }
            else if(t >= m_blendInT && t <= tValStart)
            {
                // Blend in
                float localT = 0.0f;
                float tLen = tValStart - m_blendInT;
                if(tLen != 0.0f)
                    localT = (t - m_blendInT) / tLen;

                scale = Vector3.Lerp(Vector3.one, m_scales[0].LocalScale, localT);
            }
            else if(t >= tValEnd && t <= m_blendOutT)
            {
                // Blend out
                float localT = 0.0f;
                float tLen = m_blendOutT - tValEnd;
                if(tLen != 0.0f)
                    localT = (t - tValEnd) / tLen;

                scale = Vector3.Lerp(m_scales[m_scales.Count-1].LocalScale, Vector3.one, localT);
            }

            return true;
        }
    }
}
