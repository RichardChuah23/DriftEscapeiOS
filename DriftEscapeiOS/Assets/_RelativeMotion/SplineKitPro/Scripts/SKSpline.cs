//
// SKSpline.cs
//
// Created by Ryan Graham on 05/25/14.
// Copyright (c) 2014 Ryan Graham, all rights reserved.
//

using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections.Generic;
using System.Linq;
using System;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace SplineKitPro
{
    [ExecuteInEditMode]
    public partial class SKSpline : MonoBehaviour
    {
        public const string kStartPointName = "Start";
        public const string kEndPointName = "End";

        public enum Plane { X, Y, Z }

        public enum SplineParameterization { Centripetal, Uniform, Chordal }
        [SerializeField] SplineParameterization m_parameterization = SplineParameterization.Centripetal;
        public SplineParameterization Parameterization
        {
            get { return m_parameterization; }
            set { m_parameterization = value; }
        }

        [SerializeField] float m_length;
        public float Length
        {
            get { return m_length; }
        }

        [SerializeField] float m_lengthCalcStepT = 0.01f;
        public float LengthCalcStepT
        {
            get { return m_lengthCalcStepT; }
            set { m_lengthCalcStepT = value; }
        }

        [SerializeField] bool m_isLooped = false;
        public bool IsLooped
        {
            get { return m_isLooped; }
            set { m_isLooped = value; }
        }

        [SerializeField] Vector3 m_splineUp = Vector3.up;
        public Vector3 SplineUp
        {
            get { return m_splineUp; }
            set { m_splineUp = value; }
        }

        [SerializeField] bool m_autoManageEndPoints = true;
        public bool AutoManageEndPoints
        {
            get { return m_autoManageEndPoints; }
            set { m_autoManageEndPoints = value; }
        }

        [SerializeField] bool m_usePointKeyframeRotation = false;
        public bool UsePointKeyframeRotation
        {
            get { return m_usePointKeyframeRotation; }
            set { m_usePointKeyframeRotation = value; }
        }

        [SerializeField] SKPointNodeRoot m_pointRoot;
        [SerializeField] SKBranchNodeRoot m_branchRoot;
        [SerializeField] SKTriggerNodeRoot m_triggerRoot;
        [SerializeField] SKRotationNodeRoot m_rotationRoot;
        [SerializeField] SKScaleNodeRoot m_scaleRoot;
        [SerializeField] SKAnchorNodeRoot m_anchorRoot;

        [SerializeField] List<SKPointNode> m_ctrlPoints = new List<SKPointNode>();
        [SerializeField] List<SKBranchNode> m_branchNodes = new List<SKBranchNode>();
        [SerializeField] List<SKTriggerNode> m_triggerNodes = new List<SKTriggerNode>();

        [System.Obsolete("Depreciated, use m_scaleChainNodes instead")]
        [SerializeField] List<SKBlendNode> m_scaleNodes = new List<SKBlendNode>();
        [System.Obsolete("Depreciated, use m_rotationChainNodes instead")]
        [SerializeField] List<SKBlendNode> m_rotationNodes = new List<SKBlendNode>();

        [SerializeField] List<SKBlendChainNode> m_scaleChainNodes = new List<SKBlendChainNode>();
        [SerializeField] List<SKBlendChainNode> m_rotationChainNodes = new List<SKBlendChainNode>();
        [SerializeField] List<SKAnchorNode> m_anchorNodes = new List<SKAnchorNode>();

        //--------------------------------------------------------------
        void OnDestroy()
        {
#if UNITY_EDITOR
            // If we are a branch, remove ourself from the branch node
            if(transform.parent != null)
            {
                SKBranchNode branchNode = transform.parent.GetComponent<SKBranchNode>();
                if(branchNode != null)
                    branchNode.RemoveBranch(this);
            }

            SKSplineManager.UnregisterSpline(this);
#endif
        }

        //--------------------------------------------------------------
        public int Count()
        {
            return m_ctrlPoints.Count;
        }

        //--------------------------------------------------------------
        public int TriggerNodeCount()
        {
            return m_triggerNodes.Count;
        }

        //--------------------------------------------------------------
        public int BranchNodeCount()
        {
            return m_branchNodes.Count;
        }

        //--------------------------------------------------------------
        public int RotationNodeCount()
        {
            return m_rotationChainNodes.Count;
        }

        //--------------------------------------------------------------
        public int ScaleNodeCount()
        {
            return m_scaleChainNodes.Count;
        }

        //--------------------------------------------------------------
        public int AnchorNodeCount()
        {
            return m_anchorNodes.Count;
        }

        //--------------------------------------------------------------
        public float GetPointLength(int i)
        {
            if(i < m_ctrlPoints.Count)
                return m_ctrlPoints[i].Length;

            return 0.0f;
        }

        //--------------------------------------------------------------
        public int IndexOf(SKPointNode pointNode)
        {
            return m_ctrlPoints.IndexOf(pointNode);
        }

        //--------------------------------------------------------------
        public SKPointNode GetControlPoint(int i)
        {
            if(i < m_ctrlPoints.Count)
                return m_ctrlPoints[i];

            return null;
        }

        //--------------------------------------------------------------
        public SKTriggerNode GetTriggerNode(int i)
        {
            if(i < m_triggerNodes.Count)
                return m_triggerNodes[i];

            return null;
        }

        //--------------------------------------------------------------
        public SKBranchNode GetBranchNode(int i)
        {
            if(i < m_branchNodes.Count)
                return m_branchNodes[i];

            return null;
        }

        //--------------------------------------------------------------
        public SKBlendChainNode GetRotationNode(int i)
        {
            if(i < m_rotationChainNodes.Count)
                return m_rotationChainNodes[i];

            return null;
        }

        //--------------------------------------------------------------
        public SKBlendChainNode GetScaleNode(int i)
        {
            if(i < m_scaleChainNodes.Count)
                return m_scaleChainNodes[i];

            return null;
        }

        //--------------------------------------------------------------
        public SKAnchorNode GetAnchorNode(int i)
        {
            if(i < m_anchorNodes.Count)
                return m_anchorNodes[i];

            return null;
        }

        //--------------------------------------------------------------
        public void ClearDelayedCommands()
        {
            for(int i=0; i<m_triggerNodes.Count; i++)
            {
                if(m_triggerNodes[i] == null)
                    m_triggerNodes[i].DelayedCommands.Clear();
            }
        }

        #region RUNTIME_SPLINE_CREATION
        //--------------------------------------------------------------
        public void RecalcEndPoints(bool force=false)
        {
            if(m_ctrlPoints.Count > 2 && (AutoManageEndPoints || force))
            {
                float capLength = m_length > 0.0f ? m_length * 0.05f : 1.0f;

                Vector3 tangent = -Vector3.forward;
                SKPointNode ptStartCap = m_ctrlPoints[0];
                SKPointNode ptEndCap = m_ctrlPoints[m_ctrlPoints.Count-1];

                // Start cap point
                SKPointNode ptA = m_ctrlPoints[1];
                SKPointNode ptB = m_ctrlPoints[2];
                tangent = ptA.transform.position - ptB.transform.position;
                tangent.Normalize();
                ptStartCap.transform.position = ptA.transform.position + tangent*capLength;

                // End cap point
                ptA = m_ctrlPoints[m_ctrlPoints.Count-2];
                ptB = m_ctrlPoints[m_ctrlPoints.Count-3];
                tangent = ptA.transform.position - ptB.transform.position;
                tangent.Normalize();
                ptEndCap.transform.position = ptA.transform.position + tangent*capLength;
            }
        }

        //--------------------------------------------------------------
        public SKPointNode AddPoint(Vector3 pos, string ptName="")
        {
            // Add the start and end cap points if needed
            if(m_ctrlPoints.Count == 0)
            {
                AddPointInternal(pos, -1, kStartPointName);
                AddPointInternal(pos, -1, kEndPointName);
            }

            SKPointNode newSplinePt = AddPointInternal(pos, m_ctrlPoints.Count-1, ptName);
            //ResetPointRotation(m_ctrlPoints.Count-2);   // Calculate the tangent of the newly added point

#if UNITY_EDITOR
            SplineEdited(true);
#else
            RecalcEndPoints(true);
            CalculateLengths();
#endif

            return newSplinePt;
        }

        //--------------------------------------------------------------
        SKPointNode AddPointInternal(Vector3 pos, int index=-1, string ptName="")
        {
            if(m_pointRoot == null)
            {
                GameObject pointRootObj = new GameObject("Control Points");
#if UNITY_EDITOR
                Undo.RegisterCreatedObjectUndo(pointRootObj, "Create " + pointRootObj.name);
#endif
                m_pointRoot = pointRootObj.AddComponent<SKPointNodeRoot>();
                pointRootObj.transform.SetParent(transform);
                pointRootObj.transform.localPosition = Vector3.zero;
                pointRootObj.transform.localRotation = Quaternion.identity;
#if UNITY_EDITOR
                UpdateSiblingOrder();
#endif
            }

            GameObject pointObj = new GameObject();
            if(ptName != "")
                pointObj.name = ptName;
            else
                pointObj.name = "Pt_" + (Count()-1).ToString("D3");
#if UNITY_EDITOR
            Undo.RegisterCreatedObjectUndo(pointObj, "Create " + pointObj.name);
#endif

            pointObj.transform.SetParent(m_pointRoot.transform);
            pointObj.transform.position = pos;

            SKPointNode splinePoint = pointObj.AddComponent<SKPointNode>();
            if(index != -1)
            {
                pointObj.transform.SetSiblingIndex(index);
                m_ctrlPoints.Insert(index, splinePoint);
            }
            else
            {
                m_ctrlPoints.Add(splinePoint);
            }

            return splinePoint;
        }

        //--------------------------------------------------------------
        public void CalculateLengths()
        {
            if(m_ctrlPoints.Count < 4)
                return;

            // First two points and the last have 0 length (if not looped)
            SetPointLength(0, 0.0f);
            SetPointLength(1, 0.0f);
            SetPointLength(m_ctrlPoints.Count-1, 0.0f);

            Vector3 pos = Vector3.zero;
            Vector3 lastPos = m_ctrlPoints[1].transform.position;
            m_length = 0.0f;
            for(int i=1; i<m_ctrlPoints.Count-2; i++)
            {
                float segLength = 0.0f;
                float t = m_lengthCalcStepT;
                while(t < 1.0)
                {
                    if(EvaluateSegment(i, t, ref pos))
                    {
                        segLength += Vector3.Distance(lastPos, pos);
                    }

                    lastPos = pos;
                    t += m_lengthCalcStepT;
                }

                if(EvaluateSegment(i, 1.0f, ref pos))
                {
                    segLength += Vector3.Distance(lastPos, pos);
                }

                lastPos = pos;
                SetPointLength(i+1, segLength);
                m_length += segLength;
            }

            if(m_isLooped)
            {
                // Calculate the length for the last seg and store it in the 1st control point
                pos = Vector3.zero;
                lastPos = m_ctrlPoints[m_ctrlPoints.Count-2].transform.position;

                float segLength = 0.0f;
                float t = m_lengthCalcStepT;
                while(t < 1.0)
                {
                    if(EvaluateSegment(m_ctrlPoints.Count-2, t, ref pos))
                    {
                        segLength += Vector3.Distance(lastPos, pos);
                    }

                    lastPos = pos;
                    t += m_lengthCalcStepT;
                }

                if(EvaluateSegment(m_ctrlPoints.Count-2, 1.0f, ref pos))
                {
                    segLength += Vector3.Distance(lastPos, pos);
                }

                lastPos = pos;
                SetPointLength(1, segLength);
                m_length += segLength;
            }
        }

        //--------------------------------------------------------------
        void SetPointLength(int i, float length)
        {
            if(i < m_ctrlPoints.Count)
                m_ctrlPoints[i].Length = length;
        }

        //--------------------------------------------------------------
        public void SetPoint(int i, float x, float y, float z)
        {
            SetPoint(i, new Vector3(x, y, z));
        }

        //--------------------------------------------------------------
        public void SetPoint(int i, Vector3 p)
        {
            SetPoint(i, p, GetControlPoint(i).transform.rotation);
        }

        //--------------------------------------------------------------
        public void SetPoint(int i, Vector3 p, Quaternion r)
        {
            SKPointNode pointScript = GetControlPoint(i);
            pointScript.transform.position = p;
            pointScript.transform.rotation = r;

#if UNITY_EDITOR
            SplineEdited();
#endif
        }
        #endregion

        //--------------------------------------------------------------
        public void EvaluateNodes(SKSplineAnimator splineAnim, float prevTVal, float nextTVal)
        {
            for(int i=0; i<m_triggerNodes.Count; i++)
                m_triggerNodes[i].Evaluate(splineAnim, prevTVal, nextTVal);

            for(int i=0; i<m_branchNodes.Count; i++)
                m_branchNodes[i].Evaluate(splineAnim, prevTVal, nextTVal);
        }

        //--------------------------------------------------------------
        public bool FindSegmentForT(float t, ref int ptIdx, ref float segmentT)
        {
            // Find which segmet t lies in, then calculate the local tval for that segment
            float accumDist = 0.0f;
            float distToTravel = t * m_length;
            for(int i=1; i<m_ctrlPoints.Count-2; i++)
            {
                float segLength = GetPointLength(i+1);
                float accumDistPlusSegLength = accumDist+segLength; // Store in a float to avoid precision error...
                if(accumDistPlusSegLength >= distToTravel)
                {
                    float distToTravelThisSegment = distToTravel - accumDist;
                    segmentT = distToTravelThisSegment / segLength;
                    ptIdx = i;

                    return true;
                }

                accumDist += segLength;
            }

            // Check the last section
            if(m_isLooped)
            {
                float segLength = GetPointLength(1);
                float accumDistPlusSegLength = accumDist+segLength; // Store in a float to avoid precision error...
                if(accumDistPlusSegLength >= distToTravel)
                {
                    float distToTravelThisSegment = distToTravel - accumDist;
                    segmentT = distToTravelThisSegment / segLength;
                    ptIdx = m_ctrlPoints.Count-2;

                    return true;
                }
            }

            return false;
        }

        //--------------------------------------------------------------
        public bool GetTangentAtT(float t, ref Vector3 tangent, float lookAheadDist=1.0f)
        {
            if(m_length <= 0.0f)
                return false;

            t = Mathf.Clamp(t, 0.0f, 1.0f);

            Vector3 ptA = Vector3.zero;
            Vector3 ptB = Vector3.zero;
            if(Evaluate(t, ref ptA))
            {
                float lookAheadT = t + (lookAheadDist / m_length);
                if(lookAheadT > 1.0f && m_isLooped)
                    lookAheadT -= 1.0f;

                //if(Mathf.Abs(lookAheadT - t) < 0.0000001f)
                //    return false;

                float bTVal = Mathf.Clamp01(lookAheadT);
                if(Evaluate(bTVal, ref ptB))
                {
                    Vector3 newTangent = ptB - ptA;
                    if(!float.IsInfinity(newTangent.magnitude) && !float.IsNaN(newTangent.magnitude))
                    {
                        newTangent.Normalize();
                        if(newTangent.magnitude > 0.0f)
                        {
                            tangent = newTangent;
                            return true;
                        }
                    }
                }
            }

            //// Couldn't calculate the tangent, so use the tangent of the starting point of the segment
            //int ptIdx = -1;
            //float segmentT = -1.0f;
            //if(FindSegmentForT(t, ref ptIdx, ref segmentT))
            //{
            //    SKPointNode pointScript = GetControlPoint(ptIdx);
            //    if(pointScript != null)
            //    {
            //        tangent = pointScript.transform.forward;
            //        return true;
            //    }
            //}

            return false;
        }

        //--------------------------------------------------------------
        public bool GetSplineRotation(float t, ref Quaternion rot, float lookAheadDist=1.0f)
        {
            Vector3 tangent = Vector3.zero;
            if(GetTangentAtT(t, ref tangent, lookAheadDist))
            {
                rot = Quaternion.LookRotation(tangent, m_splineUp);
                return true;
            }

            return false;
        }

        //--------------------------------------------------------------
        public bool GetRotation(float t, ref Quaternion rot, SKBlendChainNode ignoreNode=null, float lookAheadDist=1.0f, float bankLookAheadScalar=0.0f, float bankAmplify=1.0f, float maxBank=-1.0f)
        {
            if(m_usePointKeyframeRotation)
            {
                int ptIdx = -1;
                float segmentT = -1.0f;
                if(FindSegmentForT(t, ref ptIdx, ref segmentT))
                {
                    SKPointNode ptA = m_ctrlPoints[ptIdx];
                    SKPointNode ptB = m_ctrlPoints[ptIdx+1];
                    rot = Quaternion.Lerp(ptA.transform.rotation, ptB.transform.rotation, segmentT);
                    return true;
                }

                return false;
            }

            // Look for a rotation node that influences t
            for(int i=0; i<m_rotationChainNodes.Count; i++)
            {
                // Use the furthest node ahead that has influence (nodes are ordered in t)
                int nodeIdx = lookAheadDist >= 0.0f ? (m_rotationChainNodes.Count-1)-i : i;

                SKRotationNode rotationNode = GetRotationNode(nodeIdx) as SKRotationNode;
                if(rotationNode != ignoreNode && rotationNode.isActiveAndEnabled && rotationNode.gameObject.activeInHierarchy && t >= rotationNode.BlendInT && t <= rotationNode.BlendOutT)
                {
                    if(rotationNode.EvaluateRotation(t, ref rot))
                    {
                        // Apply banking
                        if(!rotationNode.DisableBanking && bankLookAheadScalar != 0.0f)
                        {
                            float roll = GetBank(t, lookAheadDist, bankLookAheadScalar, bankAmplify, maxBank);
                            if(roll != 0.0f)
                                rot.eulerAngles = new Vector3(rot.eulerAngles.x, rot.eulerAngles.y, roll);
                        }

                        return true;
                    }
                }
            }

            // No node rotation, use spline rotation
            if(GetSplineRotation(t, ref rot, lookAheadDist))
            {
                if(bankLookAheadScalar != 0.0f)
                {
                    float roll = GetBank(t, lookAheadDist, bankLookAheadScalar, bankAmplify, maxBank);
                    if(roll != 0.0f)
                        rot.eulerAngles = new Vector3(rot.eulerAngles.x, rot.eulerAngles.y, roll);
                }

                return true;
            }

            return false;
        }

        //--------------------------------------------------------------
        public float GetBank(float t, float lookAheadDist, float bankLookAheadScalar, float amplify=1.0f, float maxBank=-1.0f)
        {
            Vector3 tangent = Vector3.forward;
            if(!GetTangentAtT(t, ref tangent, lookAheadDist))
                return 0.0f;

            Vector3 bankTangent = Vector3.forward;
            if(!GetTangentAtT(t, ref bankTangent, lookAheadDist*bankLookAheadScalar))
                return 0.0f;

            float dotp = Vector3.Dot(tangent, bankTangent);
            float bank = Mathf.Acos(Mathf.Abs(dotp))*Mathf.Rad2Deg;
            if(!float.IsInfinity(bank) && !float.IsNaN(bank))
            {
                // Determine which side of the tangent the bank tangent is on
                Quaternion tangentRot = Quaternion.LookRotation(tangent);
                Vector3 tangentRight = tangentRot * Vector3.right;
                float dotSide = Vector3.Dot(bankTangent, tangentRight);
                if(dotSide > 0.0f)
                    bank = -bank;
            }
            else
                bank = 0.0f;

            float amplifiedBank = bank*amplify;
            if(maxBank != -1.0f && Math.Abs(amplifiedBank) > maxBank)
                amplifiedBank = amplifiedBank < 0.0f ? -maxBank : maxBank;

            return amplifiedBank;
        }

        //--------------------------------------------------------------
        public bool GetScale(float t, ref Vector3 scale, SKBlendChainNode ignoreNode=null)
        {
            // Look for a scale node that influences t
            for(int i=0; i<m_scaleChainNodes.Count; i++)
            {
                SKScaleNode scaleNode = GetScaleNode(i) as SKScaleNode;
                if(scaleNode != ignoreNode && scaleNode.isActiveAndEnabled && scaleNode.gameObject.activeInHierarchy && t >= scaleNode.BlendInT && t <= scaleNode.BlendOutT)
                {
                    if(scaleNode.EvaluateScale(t, ref scale))
                        return true;
                }
            }

            // No node scale
            scale = Vector3.one;
            return true;
        }

        //--------------------------------------------------------------
        public bool Evaluate(float t, ref Vector3 pos)
        {
            int ptIdx = -1;
            float segmentT = -1.0f;
            if(FindSegmentForT(t, ref ptIdx, ref segmentT))
            {
                if(EvaluateSegment(ptIdx, segmentT, ref pos))
                    return true;
            }

            return false;
        }

        //--------------------------------------------------------------
        public bool Evaluate(float t, ref Vector3 pos, ref Quaternion rot, float lookAheadDist=1.0f, float bankLookAheadScalar=0.0f, float maxBank=-1.0f)
        {
            Vector3 scale = Vector3.zero;
            return Evaluate(t, ref pos, ref rot, ref scale, lookAheadDist, bankLookAheadScalar);
        }

        //--------------------------------------------------------------
        public bool Evaluate(float t, ref Vector3 pos, ref Vector3 scale, float lookAheadDist=1.0f, float bankLookAheadScalar=0.0f, float maxBank=-1.0f)
        {
            Quaternion rot = Quaternion.identity;
            return Evaluate(t, ref pos, ref rot, ref scale, lookAheadDist, bankLookAheadScalar);
        }

        //--------------------------------------------------------------
        public bool Evaluate(float t, ref Vector3 pos, ref Quaternion rot, ref Vector3 scale, float lookAheadDist=1.0f, float bankLookAheadScalar=0.0f, float bankAmplify=1.0f, float maxBank=-1.0f)
        {
            int ptIdx = -1;
            float segmentT = -1.0f;
            if(FindSegmentForT(t, ref ptIdx, ref segmentT))
            {
                if(EvaluateSegment(ptIdx, segmentT, ref pos))
                {
                    // Determine the rotation and scale
                    GetRotation(t, ref rot, null, lookAheadDist, bankLookAheadScalar, bankAmplify, maxBank);
                    GetScale(t, ref scale);
                    return true;
                }
            }

            return false;
        }

        //--------------------------------------------------------------
        public bool Evaluate(SKSplineAnimator splineAnim, float t)
        {
            return Evaluate(splineAnim, t, UnityEngine.Time.deltaTime, 1.0f);
        }

        //--------------------------------------------------------------
        public bool Evaluate(SKSplineAnimator splineAnim, float t, float deltaTime, float lookAheadDist)
        {
            t = Mathf.Clamp01(t);

            int ptIdx = -1;
            float segmentT = -1.0f;
            if(FindSegmentForT(t, ref ptIdx, ref segmentT))
            {
                Vector3 pos = splineAnim.PositionUpdateType == SKSplineAnimator.TransformUpdateType.Global ? splineAnim.transform.position : splineAnim.transform.localPosition;
                if(EvaluateSegment(ptIdx, segmentT, ref pos))
                {
                    Quaternion rot = splineAnim.transform.localRotation;

                    // Determine the rotation
                    float bankLookAheadScalar = splineAnim.ApplyBanking ? splineAnim.BankLookAheadScalar : 0.0f;
                    GetRotation(t, ref rot, null, lookAheadDist, bankLookAheadScalar, splineAnim.BankAmplifier, splineAnim.MaxBank);

                    if(splineAnim.PositionUpdateType == SKSplineAnimator.TransformUpdateType.Global)
                        splineAnim.transform.position = pos;
                    else
                        splineAnim.transform.localPosition = pos;

                    if(splineAnim.UseSplineRotation && (splineAnim.ApplyPitch || splineAnim.ApplyHeading || splineAnim.ApplyRoll))
                    {
                        if(splineAnim.SmoothRotation)
                        {
                            float pitch = splineAnim.transform.localRotation.eulerAngles.x*Mathf.Deg2Rad;
                            float heading = splineAnim.transform.localRotation.eulerAngles.y*Mathf.Deg2Rad;
                            float roll = splineAnim.transform.localRotation.eulerAngles.z*Mathf.Deg2Rad;

                            if(splineAnim.ApplyPitch)
                                pitch = SKMath.SmoothEasyInAngle(pitch, rot.eulerAngles.x*Mathf.Deg2Rad, splineAnim.RotationSmoother, deltaTime*0.0003f);

                            if(splineAnim.ApplyHeading)
                                heading = SKMath.SmoothEasyInAngle(heading, rot.eulerAngles.y*Mathf.Deg2Rad, splineAnim.RotationSmoother, deltaTime*0.0003f);

                            if(splineAnim.ApplyRoll)
                                roll = SKMath.SmoothEasyInAngle(roll, rot.eulerAngles.z*Mathf.Deg2Rad, splineAnim.RotationSmoother, deltaTime*0.0003f);

                            if(splineAnim.RotationUpdateType == SKSplineAnimator.TransformUpdateType.Global)
                                splineAnim.transform.rotation = Quaternion.Euler(new Vector3(pitch*Mathf.Rad2Deg, heading*Mathf.Rad2Deg, roll*Mathf.Rad2Deg));
                            else
                                splineAnim.transform.localRotation = Quaternion.Euler(new Vector3(pitch*Mathf.Rad2Deg, heading*Mathf.Rad2Deg, roll*Mathf.Rad2Deg));
                        }
                        else
                        {
                            if(splineAnim.RotationUpdateType == SKSplineAnimator.TransformUpdateType.Global)
                                splineAnim.transform.rotation = Quaternion.Euler(new Vector3(splineAnim.ApplyPitch ? rot.eulerAngles.x : splineAnim.transform.localRotation.eulerAngles.x, splineAnim.ApplyHeading ? rot.eulerAngles.y : splineAnim.transform.localRotation.eulerAngles.y, splineAnim.ApplyRoll ? rot.eulerAngles.z : splineAnim.transform.localRotation.eulerAngles.z));
                            else
                                splineAnim.transform.localRotation = Quaternion.Euler(new Vector3(splineAnim.ApplyPitch ? rot.eulerAngles.x : splineAnim.transform.localRotation.eulerAngles.x, splineAnim.ApplyHeading ? rot.eulerAngles.y : splineAnim.transform.localRotation.eulerAngles.y, splineAnim.ApplyRoll ? rot.eulerAngles.z : splineAnim.transform.localRotation.eulerAngles.z));
                        }
                    }

                    bool applyScale = true;
//#if UNITY_EDITOR
//                    if(!Application.isPlaying)
//                        applyScale = false;
//#endif
                    if(applyScale)
                    {
                        Vector3 scale = Vector3.one;
                        if(GetScale(t, ref scale))
                            splineAnim.transform.localScale = Vector3.Scale(scale, splineAnim.BaseLocalScale);
                    }

                    return true;
                }
            }

            return false;
        }

        //--------------------------------------------------------------
        public bool EvaluateSegment(int ptIdx, float t, ref Vector3 pos)
        {
            if(ptIdx > 0 && m_ctrlPoints.Count > 3)// && ptIdx + 2 < m_ctrlPoints.Count)
            {
                int i0, i1, i2, i3;
                if(m_isLooped && ptIdx == 1)
                {
                    i0 = m_ctrlPoints.Count-2;
                    i1 = 1;
                    i2 = 2;
                    i3 = 3;
                }
                else if(m_isLooped && ptIdx == m_ctrlPoints.Count-3)
                {
                    i0 = m_ctrlPoints.Count-4;
                    i1 = m_ctrlPoints.Count-3;
                    i2 = m_ctrlPoints.Count-2;
                    i3 = 1;
                }
                else if(m_isLooped && ptIdx == m_ctrlPoints.Count-2)
                {
                    i0 = m_ctrlPoints.Count-3;
                    i1 = m_ctrlPoints.Count-2;
                    i2 = 1;
                    i3 = 2;
                }
                else
                {
                    i0 = ptIdx - 1;
                    i1 = ptIdx;
                    i2 = ptIdx + 1;
                    i3 = ptIdx + 2;
                }

                SKPointNode[] pts =
                {
                    m_ctrlPoints[i0],
                    m_ctrlPoints[i1],
                    m_ctrlPoints[i2],
                    m_ctrlPoints[i3]
                };

                float[] time = { 0.0f, 1.0f, 2.0f, 3.0f };

                float tstart = 1.0f;
                float tend = 2.0f;
                if(m_parameterization != SplineParameterization.Uniform)
                {
                    float total = 0.0f;
                    for(int i=1; i<4; i++)
                    {
                        float dx = pts[i].transform.position.x - pts[i - 1].transform.position.x;
                        float dy = pts[i].transform.position.y - pts[i - 1].transform.position.y;
                        float dz = pts[i].transform.position.z - pts[i - 1].transform.position.z;
                        if(m_parameterization == SplineParameterization.Centripetal)
                        {
                            total += Mathf.Pow((float)(dx * dx + dy * dy + dz * dz), 0.25f);
                        }
                        else
                        {
                            total += Mathf.Pow((float)(dx * dx + dy * dy + dz * dz), 0.5f);
                        }

                        time[i] = total;
                    }
                    tstart = time[1];
                    tend = time[2];
                }

                pos.x = (float)Interpolate(pts[0].transform.position.x, pts[1].transform.position.x, pts[2].transform.position.x, pts[3].transform.position.x, time, tstart + (tend - tstart)*t);
                pos.y = (float)Interpolate(pts[0].transform.position.y, pts[1].transform.position.y, pts[2].transform.position.y, pts[3].transform.position.y, time, tstart + (tend - tstart)*t);
                pos.z = (float)Interpolate(pts[0].transform.position.z, pts[1].transform.position.z, pts[2].transform.position.z, pts[3].transform.position.z, time, tstart + (tend - tstart)*t);

                return true;
            }

            return false;
        }

        //--------------------------------------------------------------
        float Interpolate(float v0, float v1, float v2, float v3, float[] time, float t)
        {
            float L01 = v0 * (time[1] - t) / (time[1] - time[0]) + v1 * (t - time[0]) / (time[1] - time[0]);
            float L12 = v1 * (time[2] - t) / (time[2] - time[1]) + v2 * (t - time[1]) / (time[2] - time[1]);
            float L23 = v2 * (time[3] - t) / (time[3] - time[2]) + v3 * (t - time[2]) / (time[3] - time[2]);
            float L012 = L01 * (time[2] - t) / (time[2] - time[0]) + L12 * (t - time[0]) / (time[2] - time[0]);
            float L123 = L12 * (time[3] - t) / (time[3] - time[1]) + L23 * (t - time[1]) / (time[3] - time[1]);
            float C12 = L012 * (time[2] - t) / (time[2] - time[1]) + L123 * (t - time[1]) / (time[2] - time[1]);
            return C12;
        }
    }
}
