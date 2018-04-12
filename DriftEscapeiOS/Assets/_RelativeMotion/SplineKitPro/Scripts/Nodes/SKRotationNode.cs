//
// SKRotationNode.cs
//
// Created by Ryan Graham on 01/17/17.
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
    public class SKRotation
    {
#if UNITY_EDITOR
        public bool FoldoutOpen;
#endif

        public float tVal;
        public float Distance;
        public Quaternion Rotation;
        public Vector3 Position;
    }

    [ExecuteInEditMode]
    public class SKRotationNode : SKBlendChainNode
    {
        [SerializeField] List<SKRotation> m_rotations = new List<SKRotation>();
        public List<SKRotation> Rotations
        {
            get { return m_rotations; }
            set { m_rotations = value; }
        }

        [SerializeField] bool m_disableBanking = false;
        public bool DisableBanking
        {
            get { return m_disableBanking; }
            set { m_disableBanking = value; }
        }

        //--------------------------------------------------------------
        public override float tVal 
        { 
            get
            {
                if(m_rotations.Count > 0)
                    return m_rotations[0].tVal;

                return -1.0f;
            }
            set
            {
                if(m_rotations.Count > 0)
                    m_rotations[0].tVal = value;
            }
        }

        //--------------------------------------------------------------
        public override float Distance
        {
            get
            {
                if(m_rotations.Count > 0)
                    return m_rotations[0].Distance;

                return -1.0f;
            }
            set
            {
                if(m_rotations.Count > 0)
                    m_rotations[0].Distance = value;
            }
        }

        //--------------------------------------------------------------
        public override float LastTVal
        {
            get
            {
                if(m_rotations.Count > 0)
                    return m_rotations[m_rotations.Count-1].tVal;

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
                for(int i=0; i<m_rotations.Count; i++)
                    m_rotations[i].tVal = m_rotations[i].Distance / Spline.Length;

                SetNodeTValue(tVal);
            }
        }

        //--------------------------------------------------------------
        public override float GetHandleSize(Vector3 pos)
        {
            return HandleUtility.GetHandleSize(pos) * Spline.RotHandleSizeScale * SKRenderer.kBlendNodeDrawScalar;
        }

        //--------------------------------------------------------------
        public override bool GetBlendInDrawTransform(out Vector3 pos, out Quaternion rot, out Vector3 scale, out Vector3 localOffset)
        {
            return GetDrawTransform(m_blendInT, 0.25f, SKRenderer.kRotationNodeDrawOffset, out pos, out rot, out scale, out localOffset);
        }

        //--------------------------------------------------------------
        public override bool GetBlendOutDrawTransform(out Vector3 pos, out Quaternion rot, out Vector3 scale, out Vector3 localOffset)
        {
            return GetDrawTransform(m_blendOutT, 0.25f, SKRenderer.kRotationNodeDrawOffset, out pos, out rot, out scale, out localOffset);
        }

        //--------------------------------------------------------------
        public override bool GetDrawTransform(int i, out Vector3 pos, out Quaternion rot, out Vector3 scale, out Vector3 localOffset)
        {
            return GetDrawTransform(m_rotations[i].tVal, 1.0f, SKRenderer.kRotationNodeDrawOffset, out pos, out rot, out scale, out localOffset);
        }

        //--------------------------------------------------------------
        public override void SetNodeTValue(float tvalue)
        {
            float deltaT = tvalue - m_rotations[0].tVal;
            m_blendInT = Mathf.Clamp01(m_blendInT + deltaT);
            m_blendInD = m_blendInT * Spline.Length;

            for(int i=0; i<m_rotations.Count; i++)
            {
                m_rotations[i].tVal = Mathf.Clamp01(m_rotations[i].tVal + deltaT);
                m_rotations[i].Distance = m_rotations[i].tVal * Spline.Length;
            }

            m_blendOutT = Mathf.Clamp01(m_blendOutT + deltaT);
            m_blendOutD = m_blendOutT * Spline.Length;

            Vector3 pos = Vector3.zero;
            if(Spline.Evaluate(m_rotations[0].tVal, ref pos))
                transform.position = pos;

            // Update the positions
            for(int i=0; i<m_rotations.Count; i++)
            {
                if(Spline.Evaluate(m_rotations[i].tVal, ref pos))
                    m_rotations[i].Position = pos;
            }
        }

        //--------------------------------------------------------------
        public override void SetTValue(int i, float tvalue)
        {
            Vector3 pos = Vector3.zero;
            if(Spline.Evaluate(tvalue, ref pos))
            {
                float deltaT = tvalue - m_rotations[i].tVal;
                m_rotations[i].tVal = Mathf.Clamp01(m_rotations[i].tVal + deltaT);
                m_rotations[i].Distance = m_rotations[i].tVal * Spline.Length;
                //m_blendOutT = Mathf.Clamp01(m_blendOutT + deltaT);
                //m_blendOutD = m_blendOutT * Spline.Length;

                m_rotations[i].Position = pos;
            }
        }
#endif
        //--------------------------------------------------------------
        public override int Count()
        {
            return m_rotations.Count;
        }

        //--------------------------------------------------------------
        protected override void OnDestroy()
        {
            base.OnDestroy();

#if UNITY_EDITOR
            if(Spline != null)
                Spline.RemoveRotationNode(this, false);
#endif
        }

        //--------------------------------------------------------------
        public bool EvaluateRotation(float t, ref Quaternion rot)
        {
            float tValStart = m_rotations[0].tVal;
            float tValEnd = m_rotations[m_rotations.Count-1].tVal;

            if(t >= tValStart && t <= tValEnd && m_rotations.Count > 1)
            {
                for(int i=0; i<m_rotations.Count-1; i++)
                {
                    if(t >= m_rotations[i].tVal && t <= m_rotations[i+1].tVal)
                    {
                        float localT = GlobalToLocalT(t, m_rotations[i].tVal, m_rotations[i+1].tVal);
                        rot = Quaternion.Lerp(m_rotations[i].Rotation, m_rotations[i+1].Rotation, localT);
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

                Quaternion blendFromRot = Quaternion.identity;
                Spline.GetSplineRotation(m_blendInT, ref blendFromRot);
                rot = Quaternion.Lerp(blendFromRot, m_rotations[0].Rotation, localT);
            }
            else if(t >= tValEnd && t <= m_blendOutT)
            {
                // Blend out
                float localT = 0.0f;
                float tLen = m_blendOutT - tValEnd;
                if(tLen != 0.0f)
                    localT = (t - tValEnd) / tLen;

                Quaternion blendToRot = Quaternion.identity;
                Spline.GetSplineRotation(m_blendOutT, ref blendToRot);
                rot = Quaternion.Lerp(m_rotations[m_rotations.Count-1].Rotation, blendToRot, localT);
            }

            return true;
        }
    }
}
