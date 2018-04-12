//
// SKRenderer.cs
//
// Created by Ryan Graham on 01/28/16.
// Copyright (c) 2016 Ryan Graham, all rights reserved.
//

#if UNITY_EDITOR

using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;

#pragma warning disable 0168 // variable declared but not used.

namespace SplineKitPro
{
    public class SKRenderer
    {
        public const float kPointDrawScalar = 0.2f;
        public const float kNodeDrawScalar = 0.3f;
        public const float kBlendNodeDrawScalar = 0.31f;
        public const float kParamPointDrawScalar = 0.15f;

        public static Color kLimeGreen = new Color(0.196f, 0.804f, 0.196f);
        public static Color kPink = new Color(1.0f, 0.75f, 0.8f);
        public static Color kHotPink = new Color(1.0f, 0.41f, 0.71f);
        public static Color kDeepPink = new Color(1.0f, 0.08f, 0.71f);

        public const float kColorSelectMul = 2.0f;
        public static Color kNeedsSelectionColor = kHotPink;
        public static Color kNodePlacementLocatorColor = Color.red;
        public static Color kControlPointCapAutoColor = kLimeGreen;
        public static Color kControlPointCapManualColor = Color.red;
        public static Color kControlPointColor = Color.white;
        public static Color kControlPointSculptColor = kDeepPink;
        public static Color kTriggerNodeColor = Color.yellow;
        public static Color kRotationNodeColor = new Color(0.0f, 0.75f, 1.0f);
        public static Color kScaleNodeColor = Color.green;
        public static Color kBranchNodeColor = new Color(0.96f, 0.64f, 0.38f);
        public static Color kAnchorNodeColor = new Color(0.79f, 0.88f, 1.0f);

        public static Vector3 kRotationNodeDrawOffset = new Vector3(0.5f, 0.0f, 0.0f);
        public static Vector3 kScaleNodeDrawOffset = new Vector3(-0.5f, 0.0f, 0.0f);

        #region GIZMOS
        ////
        //// Summary:
        ////     The gizmo can be picked in the editor.
        //Pickable = 1,
        ////
        //// Summary:
        ////     Draw the gizmo if it is not selected and also no parent/ancestor is selected.
        //NotInSelectionHierarchy = 2,
        ////
        //// Summary:
        ////     Draw the gizmo if it is selected.
        //Selected = 4,
        ////
        //// Summary:
        ////     Draw the gizmo if it is active (shown in the inspector).
        //Active = 8,
        ////
        //// Summary:
        ////     Draw the gizmo if it is selected or it is a child/descendent of the selected.
        //InSelectionHierarchy = 16,
        ////
        //// Summary:
        ////     Draw the gizmo if it is not selected.
        //NonSelected = 3

        //--------------------------------------------------------------
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0_0 || UNITY_5_0_1
        [DrawGizmo(GizmoType.SelectedOrChild | GizmoType.Active | GizmoType.Pickable)] // Spline or one of its children are selected (broken 5.3.5f1, not called if children selected)
#else
        [DrawGizmo(GizmoType.InSelectionHierarchy | GizmoType.Active | GizmoType.Pickable)] // Spline or one of its children are selected (broken 5.3.5f1, not called if children selected)
#endif
        static void RenderSelectedSplineGizmo(SKSpline spline, GizmoType gizmoType)
        {
            UpdateCurve(spline, true);
            UpdateNodePlacementLocator(spline, true);
        }

        //--------------------------------------------------------------
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0_0 || UNITY_5_0_1
        [DrawGizmo(GizmoType.NotSelected | GizmoType.Pickable)]   // Spline is not selected, nor is any parent selected
#else
        [DrawGizmo(GizmoType.NotInSelectionHierarchy | GizmoType.Pickable)]   // Spline is not selected, nor is any parent selected
#endif
        static void RenderUnselectedSplineGizmo(SKSpline spline, GizmoType gizmoType)
        {
            if(Selection.activeGameObject == spline.gameObject)
            {
                RenderSelectedSplineGizmo(spline, gizmoType); // Workaround, Selected and InSelectionHierarchy don't seem to work for selected objects
            }
            else if(spline.AlwaysRender || ChildSelectedInHierarchy(spline) != null) // Workaround for broken child check above
            {
                UpdateCurve(spline, false);
                UpdateNodePlacementLocator(spline, false);
            }
        }

        //--------------------------------------------------------------
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0_0 || UNITY_5_0_1
        [DrawGizmo(GizmoType.SelectedOrChild | GizmoType.Active | GizmoType.Pickable)]
#else
        [DrawGizmo(GizmoType.InSelectionHierarchy | GizmoType.Active | GizmoType.Pickable)]
#endif
        static void RenderSelectedControlPointGizmo(SKPointNode node, GizmoType gizmoType)
        {
            if(node.name == SKSpline.kStartPointName || node.name == SKSpline.kEndPointName)
                DrawControlPointCap(node, true);
            else
                DrawControlPoint(node, true);
        }

        //--------------------------------------------------------------
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0_0 || UNITY_5_0_1
        [DrawGizmo(GizmoType.NotSelected  | GizmoType.Pickable)]
#else
        [DrawGizmo(GizmoType.NotInSelectionHierarchy  | GizmoType.Pickable)]
#endif
        static void RenderUnselectedControlPointGizmo(SKPointNode node, GizmoType gizmoType)
        {
            if(Selection.activeGameObject == node.gameObject)
            {
                RenderSelectedControlPointGizmo(node, gizmoType); // Workaround, Selected and InSelectionHierarchy don't seem to work for selected objects
            }
            else if(node.Spline.AlwaysRender || ChildSelectedInHierarchy(node.Spline) != null)
            {
                if(node.name == SKSpline.kStartPointName || node.name == SKSpline.kEndPointName)
                    DrawControlPointCap(node, false);
                else
                    DrawControlPoint(node, false);
            }
        }

        //--------------------------------------------------------------
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0_0 || UNITY_5_0_1
        [DrawGizmo(GizmoType.SelectedOrChild | GizmoType.Active | GizmoType.Pickable)]
#else
        [DrawGizmo(GizmoType.InSelectionHierarchy | GizmoType.Active | GizmoType.Pickable)]
#endif
        static void RenderSelectedTriggerNodeGizmo(SKTriggerNode node, GizmoType gizmoType)
        {
            DrawGenericNode(node, true, kTriggerNodeColor);
        }

        //--------------------------------------------------------------
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0_0 || UNITY_5_0_1
        [DrawGizmo(GizmoType.NotSelected | GizmoType.Active | GizmoType.Pickable)]
#else
        [DrawGizmo(GizmoType.NotInSelectionHierarchy | GizmoType.Active | GizmoType.Pickable)]
#endif
        static void RenderUnselectedTriggerNodeGizmo(SKTriggerNode node, GizmoType gizmoType)
        {
            if(Selection.activeGameObject == node.gameObject)
                RenderSelectedTriggerNodeGizmo(node, gizmoType); // Workaround, Selected and InSelectionHierarchy don't seem to work for selected objects
            else if(node.Spline.AlwaysRender || ChildSelectedInHierarchy(node.Spline) != null)
                DrawGenericNode(node, false, kTriggerNodeColor);
        }

        //--------------------------------------------------------------
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0_0 || UNITY_5_0_1
        [DrawGizmo(GizmoType.SelectedOrChild | GizmoType.Active | GizmoType.Pickable)]
#else
        [DrawGizmo(GizmoType.InSelectionHierarchy | GizmoType.Active | GizmoType.Pickable)]
#endif
        static void RenderSelectedBranchNodeGizmo(SKBranchNode node, GizmoType gizmoType)
        {
            DrawGenericNode(node, true, kBranchNodeColor);
        }

        //--------------------------------------------------------------
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0_0 || UNITY_5_0_1
        [DrawGizmo(GizmoType.NotSelected | GizmoType.Active | GizmoType.Pickable)]
#else
        [DrawGizmo(GizmoType.NotInSelectionHierarchy | GizmoType.Active | GizmoType.Pickable)]
#endif
        static void RenderUnselectedBranchNodeGizmo(SKBranchNode node, GizmoType gizmoType)
        {
            if(Selection.activeGameObject == node.gameObject)
                RenderSelectedBranchNodeGizmo(node, gizmoType); // Workaround, Selected and InSelectionHierarchy don't seem to work for selected objects
            else if(node.Spline.AlwaysRender || ChildSelectedInHierarchy(node.Spline) != null)
                DrawGenericNode(node, false, kBranchNodeColor);
        }

        //--------------------------------------------------------------
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0_0 || UNITY_5_0_1
        [DrawGizmo(GizmoType.SelectedOrChild | GizmoType.Active | GizmoType.Pickable)]
#else
        [DrawGizmo(GizmoType.InSelectionHierarchy | GizmoType.Active | GizmoType.Pickable)]
#endif
        static void RenderSelectedAnchorNodeGizmo(SKAnchorNode node, GizmoType gizmoType)
        {
            DrawGenericNode(node, true, kAnchorNodeColor);
        }

        //--------------------------------------------------------------
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0_0 || UNITY_5_0_1
        [DrawGizmo(GizmoType.NotSelected | GizmoType.Active | GizmoType.Pickable)]
#else
        [DrawGizmo(GizmoType.NotInSelectionHierarchy | GizmoType.Active | GizmoType.Pickable)]
#endif
        static void RenderUnselectedAnchorNodeGizmo(SKAnchorNode node, GizmoType gizmoType)
        {
            if(Selection.activeGameObject == node.gameObject)
                RenderSelectedAnchorNodeGizmo(node, gizmoType); // Workaround, Selected and InSelectionHierarchy don't seem to work for selected objects
            else if(node.Spline.AlwaysRender || ChildSelectedInHierarchy(node.Spline) != null)
                DrawGenericNode(node, false, kAnchorNodeColor);
        }
        #endregion

        #region HANDLES
        //--------------------------------------------------------------
        public static bool RenderSplineHandles(SKSpline spline, GameObject selectedObj)  // Spline or one of its children are selected
        {
            bool changed = false;

            // Control points
            if(spline.EditMode == SKSpline.SplineEditMode.Sculpt)
            {
                for(int i=0; i<spline.Count(); i++)
                {
                    SKPointNode node = spline.GetControlPoint(i);
                    if(node.gameObject.activeInHierarchy)
                    {
                        bool selected = spline.gameObject == selectedObj || node.gameObject == selectedObj || node.transform.parent.gameObject == selectedObj;
                        if(node.name == SKSpline.kStartPointName || node.name == SKSpline.kEndPointName)
                        {
                            if(DrawControlPointCap(node, selected, true))
                                changed = true;
                        }
                        else
                        {
                            if(DrawControlPoint(node, selected, true))
                                changed = true;
                        }
                    }
                }
            }

            // Rotation Nodes
            for(int i=0; i<spline.RotationNodeCount(); i++)
            {
                SKBlendChainNode node = spline.GetRotationNode(i);
                if(node.gameObject.activeInHierarchy)
                {
                    bool selected = spline.gameObject == selectedObj || node.gameObject == selectedObj || node.transform.parent.gameObject == selectedObj;
                    if(DrawBlendNode(node, selected, true))
                        changed = true;
                }
            }

            // Scale Nodes
            for(int i=0; i<spline.ScaleNodeCount(); i++)
            {
                SKBlendChainNode node = spline.GetScaleNode(i);
                if(node.gameObject.activeInHierarchy)
                {
                    bool selected = spline.gameObject == selectedObj || node.gameObject == selectedObj || node.transform.parent.gameObject == selectedObj;
                    if(DrawBlendNode(node, selected, true))
                        changed = true;
                }
            }

            return changed;
        }
        #endregion

        //--------------------------------------------------------------
        public static GameObject ChildSelectedInHierarchy(SKSpline spline)
        {
            Transform[] children = spline.gameObject.GetComponentsInChildren<Transform>();
            for(int i=0; i<children.Length; i++)
            {
                if(Selection.activeGameObject == children[i].gameObject)
                    return children[i].gameObject;
            }

            return null;
        }

        //--------------------------------------------------------------
        static void UpdateCurve(SKSpline spline, bool selected)
        {
            SKRenderer.DrawCurve(spline, spline.SplineRenderColor);
            //if(spline.VisualizeParameterization)
            //    SKRenderer.DrawSplineParametrization(spline, spline.ParamRenderColor);

            spline.RecalcEndPoints();
        }

        //--------------------------------------------------------------
        static void UpdateNodePlacementLocator(SKSpline spline, bool selected)
        {
            if(spline.Count() > 3)
            {
                Vector3 pos = Vector3.zero;
                if(spline.Evaluate(spline.EventTVal, ref pos))
                {
                    Color prevColor = Gizmos.color;
                    Gizmos.color = selected ? kNodePlacementLocatorColor * kColorSelectMul : Color.red;
                    float handleSize = HandleUtility.GetHandleSize(pos) * spline.PointHandleSizeScale * SKRenderer.kNodeDrawScalar;
                    Gizmos.DrawWireCube(pos, new Vector3(handleSize, handleSize, handleSize));
                    Gizmos.color = prevColor;
                }
            }
        }

        //--------------------------------------------------------------
        static bool DrawControlPointCap(SKPointNode node, bool selected, bool drawHandles=false)
        {
            if(node.Spline.PointHandleSizeScale == 0.0f)
                return false;

            bool changed = false;
            if(!node.Spline.IsLooped)
            {
                Color capColor = node.Spline.AutoManageEndPoints ? kControlPointCapAutoColor : kControlPointCapManualColor;
                SKPointNode splinePt = (node.name == SKSpline.kStartPointName) ? node.Spline.GetControlPoint(1) : node.Spline.GetControlPoint(node.Spline.Count()-2);
                if(drawHandles)
                {
                    Color prevColor = Handles.color;
                    Handles.color = selected ? capColor * kColorSelectMul : capColor;
                    Handles.DrawLine(splinePt.transform.position, node.transform.position);
                    float pointSize = HandleUtility.GetHandleSize(node.transform.position) * node.Spline.PointHandleSizeScale * SKRenderer.kPointDrawScalar * 0.5f;
                    Handles.SphereCap(0, node.transform.position, node.transform.rotation, pointSize);

                    Vector3 pos = node.transform.position;
                    float handleSize = HandleUtility.GetHandleSize(node.transform.position) * node.Spline.PointHandleSizeScale;
                    if(Tools.current == Tool.Move)
                    {
                        try
                        {
                            pos = SKRenderer.PositionHandle(node.transform.position, Quaternion.identity, handleSize);
                            if(node.Spline.LockTransXYZ[0])
                                pos.x = node.transform.position.x;
                            if(node.Spline.LockTransXYZ[1])
                                pos.y = node.transform.position.y;
                            if(node.Spline.LockTransXYZ[2])
                                pos.z = node.transform.position.z;
                        }
                        catch(Exception e) { /* Unity bug, ignore error */ }
                    }
                    //else
                    //{
                    //    try
                    //    {
                    //        pos = Handles.FreeMoveHandle(node.transform.position, Quaternion.identity, handleSize/6.0f, Vector3.zero, Handles.RectangleCap);
                    //    }
                    //    catch(Exception e) { /* Unity bug, ignore error */ }
                    //}

                    Handles.color = prevColor;

                    // Check if the position was changed
                    if(pos != node.transform.position)
                    {
                        Undo.RecordObject(node, "Transform End Control Point");
                        node.transform.position = pos;
                        changed = true;
                    }
                }
                else
                {
                    Color prevColor = Gizmos.color;
                    Gizmos.color = selected ? capColor * kColorSelectMul : capColor;
                    Gizmos.DrawLine(splinePt.transform.position, node.transform.position);
                    float pointSize = HandleUtility.GetHandleSize(node.transform.position) * node.Spline.PointHandleSizeScale * SKRenderer.kPointDrawScalar * 0.5f;
                    Gizmos.DrawSphere(node.transform.position, pointSize);
                    Gizmos.color = prevColor;
                }
            }

            return changed;
        }

        //--------------------------------------------------------------
        static bool DrawControlPoint(SKPointNode node, bool selected, bool drawHandles=false)
        {
            if(node.Spline.PointHandleSizeScale == 0.0f)
                return false;

            bool changed = false;
            if(node.Weld == null)
            {
                if(!drawHandles)
                {
                    if(node.Spline.EditMode == SKSpline.SplineEditMode.Standard)
                    {
                        Color prevColor = Gizmos.color;
                        Gizmos.color = selected ? kControlPointColor*kColorSelectMul : kControlPointColor;
                        float handleSize = HandleUtility.GetHandleSize(node.transform.position) * node.Spline.PointHandleSizeScale * SKRenderer.kPointDrawScalar;
                        Gizmos.DrawSphere(node.transform.position, handleSize);
                        Gizmos.color = prevColor;
                    }
                    else if(node.Spline.EditMode == SKSpline.SplineEditMode.Sculpt)
                    {
                        Color prevColor = Gizmos.color;
                        Gizmos.color = selected ? kControlPointSculptColor*kColorSelectMul : kControlPointSculptColor;
                        float handleSize = HandleUtility.GetHandleSize(node.transform.position) * node.Spline.PointHandleSizeScale * SKRenderer.kPointDrawScalar;
                        Gizmos.DrawCube(node.transform.position, new Vector3(handleSize, handleSize, handleSize));
                        Gizmos.color = prevColor;
                    }
                }
                else
                {
                    Vector3 pos = node.transform.position;
                    //Quaternion rot = node.transform.rotation;

                    float handleSize = HandleUtility.GetHandleSize(pos) * node.Spline.PointHandleSizeScale;
                    if(Tools.current == Tool.Move)
                    {
                        try
                        {
                            pos = SKRenderer.PositionHandle(node.transform.position, Quaternion.identity, handleSize);
                            if(node.Spline.LockTransXYZ[0])
                                pos.x = node.transform.position.x;
                            if(node.Spline.LockTransXYZ[1])
                                pos.y = node.transform.position.y;
                            if(node.Spline.LockTransXYZ[2])
                                pos.z = node.transform.position.z;
                        }
                        catch(Exception e) { /* Unity bug, ignore error */ }
                    }
                    //else if(Tools.current == Tool.Rotate)
                    //{
                    //    DrawAxis(node.transform.position, node.transform.rotation, handleSize*0.75f);

                    //    try
                    //    {
                    //        // Euler (roll, pitch heading)
                    //        rot = SKRenderer.RotationHandle(node.transform.position, node.transform.rotation, handleSize);
                    //        if(node.Spline.LockRotRPH[0])
                    //            rot.eulerAngles = new Vector3(node.transform.rotation.eulerAngles.x, rot.eulerAngles.y, rot.eulerAngles.z);
                    //        if(node.Spline.LockRotRPH[1])
                    //            rot.eulerAngles = new Vector3(rot.eulerAngles.x, node.transform.rotation.eulerAngles.y, rot.eulerAngles.z);
                    //        if(node.Spline.LockRotRPH[2])
                    //            rot.eulerAngles = new Vector3(rot.eulerAngles.x, rot.eulerAngles.y, node.transform.rotation.eulerAngles.z);
                    //    }
                    //    catch(Exception e) { /* Unity bug, ignore error */ }
                    //}
                    //else
                    //{
                    //    Color prevColor = Handles.color;
                    //    Handles.color = Color.red;
                    //    try
                    //    {
                    //        pos = Handles.FreeMoveHandle(node.transform.position, Quaternion.identity, handleSize/2.0f, Vector3.zero, Handles.RectangleCap);
                    //    }
                    //    catch(Exception e) { /* Unity bug, ignore error */ }

                    //    Handles.color = prevColor;
                    //}

                    if(pos != node.transform.position)// || rot != node.transform.rotation)
                    {
                        changed = true;
                        Undo.RecordObject(node, "Transform Point");
                        node.transform.position = pos;
                        //node.transform.rotation = rot;
                    }
                }
            }

            return changed;
        }

        //--------------------------------------------------------------
        static void DrawGenericNode(SKNode node, bool selected, Color color)
        {
            Color prevColor = Gizmos.color;
            Gizmos.color = selected ? color*kColorSelectMul : color;
            float handleSize = HandleUtility.GetHandleSize(node.transform.position) * node.Spline.PointHandleSizeScale * kNodeDrawScalar;
            Gizmos.DrawCube(node.transform.position, new Vector3(handleSize, handleSize, handleSize));
            Gizmos.color = prevColor;
        }

        //--------------------------------------------------------------
        static bool DrawBlendNode(SKBlendChainNode node, bool selected, bool drawHandles=false)
        {
            const float rotHandleScalar = 2.0f;
            const float scaleHandleScalar = 3.0f;

            SKRotationNode rotationNode = node as SKRotationNode;
            SKScaleNode scaleNode = node as SKScaleNode;

            bool drawSplineOnly = (rotationNode != null && node.Spline.RotHandleSizeScale == 0.0f) || (scaleNode != null && node.Spline.ScaleHandleSizeScale == 0.0f);
            bool changed = false;

            Color prevColor = drawHandles ? Handles.color : Gizmos.color;
            Color blendColor = selected ? Color.red*1.25f : Color.red*0.75f;
            Color nodeColor = rotationNode != null ? (selected ? kRotationNodeColor*kColorSelectMul : kRotationNodeColor) : (selected ? kScaleNodeColor*kColorSelectMul : kScaleNodeColor);
            Vector3 drawPos;
            Quaternion drawRot;
            Vector3 drawScale;
            Vector3 localOffset;

            // Blend In
            if(node.BlendInT != node.tVal)
            {
                node.GetBlendInDrawTransform(out drawPos, out drawRot, out drawScale, out localOffset);
                if(!drawSplineOnly)
                {
                    if(drawHandles)
                    {
                        Handles.color = blendColor;
                        Handles.SphereCap(0, drawPos, drawRot, drawScale.x);
                    }
                    else
                    {
                        Gizmos.color = blendColor;
                        Gizmos.DrawSphere(drawPos, drawScale.x);
                    }
                }

                // Blend In -> Start segment 
                if(node.tVal > node.BlendInT)
                    SKRenderer.DrawCurve(node.Spline, blendColor, node.BlendInT, node.tVal, localOffset, drawHandles);
                else
                    SKRenderer.DrawCurve(node.Spline, blendColor, node.tVal, node.BlendInT, localOffset, drawHandles);
            }

            if(!drawSplineOnly)
            {
                // Draw the inter points
                for(int i=0; i<node.Count(); i++)
                {
                    node.GetDrawTransform(i, out drawPos, out drawRot, out drawScale, out localOffset);
                    SKRenderer.DrawWireBox(drawPos, drawRot, drawScale, nodeColor);
                    if(rotationNode != null)
                    {
                        SKRenderer.DrawAxis(drawPos, drawRot, drawScale.x*1.5f);

                        // Draw the start rotation handle
                        Quaternion prevRotation = rotationNode.Rotations[i].Rotation;
                        Quaternion rot = RotationHandle(rotationNode.Rotations[i].Position, rotationNode.Rotations[i].Rotation, node.GetHandleSize(rotationNode.Rotations[i].Position)*rotHandleScalar);
                        if(node.Spline.LockRotRPH[0])
                            rot.eulerAngles = new Vector3(rotationNode.Rotations[i].Rotation.eulerAngles.x, rot.eulerAngles.y, rot.eulerAngles.z);
                        if(node.Spline.LockRotRPH[1])
                            rot.eulerAngles = new Vector3(rot.eulerAngles.x, rotationNode.Rotations[i].Rotation.eulerAngles.y, rot.eulerAngles.z);
                        if(node.Spline.LockRotRPH[2])
                            rot.eulerAngles = new Vector3(rot.eulerAngles.x, rot.eulerAngles.y, rotationNode.Rotations[i].Rotation.eulerAngles.z);

                        // Check if the rotation was changed
                        if(rot != prevRotation)
                        {
                            Undo.RecordObject(node, "Rotate Blend Node");
                            rotationNode.Rotations[i].Rotation = rot;
                            changed = true;
                        }
                    }
                    else if(scaleNode != null)
                    {
                        // Draw the start scale handle
                        Vector3 prevScale = scaleNode.Scales[i].LocalScale;
                        Vector3 scale = ScaleHandle(scaleNode.Scales[i].LocalScale, scaleNode.Scales[i].Position, drawRot, node.GetHandleSize(scaleNode.Scales[i].Position)*scaleHandleScalar);
                        if(node.Spline.LockScaleXYZ[0])
                            scale.Set(scaleNode.Scales[i].LocalScale.x, scale.y, scale.z);
                        if(node.Spline.LockScaleXYZ[1])
                            scale.Set(scale.x, scaleNode.Scales[i].LocalScale.y, scale.z);
                        if(node.Spline.LockScaleXYZ[2])
                            scale.Set(scale.x, scale.y, scaleNode.Scales[i].LocalScale.z);

                        // Check if the scale was changed
                        if(scale != prevScale)
                        {
                            Undo.RecordObject(node, "Scale Blend Node");
                            scaleNode.Scales[i].LocalScale = scale;
                            changed = true;
                        }
                    }
                }

                node.GetDrawTransform(node.Count()-1, out drawPos, out drawRot, out drawScale, out localOffset);
                if(node.LastTVal > node.tVal)
                    SKRenderer.DrawCurve(node.Spline, nodeColor, node.tVal, node.LastTVal, localOffset, drawHandles);
                else
                    SKRenderer.DrawCurve(node.Spline, nodeColor, node.LastTVal, node.tVal, localOffset, drawHandles);
            }

            // Blend Out
            if(node.BlendOutT != node.LastTVal)
            {
                node.GetBlendOutDrawTransform(out drawPos, out drawRot, out drawScale, out localOffset);
                if(drawHandles)
                {
                    Handles.color = blendColor;
                    Handles.SphereCap(0, drawPos, drawRot, drawScale.x);
                }
                else
                {
                    Gizmos.color = blendColor;
                    Gizmos.DrawSphere(drawPos, drawScale.x);
                }

                // End -> Blend Out segment 
                if(node.BlendOutT > node.LastTVal)
                    SKRenderer.DrawCurve(node.Spline, blendColor, node.LastTVal, node.BlendOutT, localOffset, drawHandles);
                else
                    SKRenderer.DrawCurve(node.Spline, blendColor, node.BlendOutT, node.LastTVal, localOffset, drawHandles);
            }

            if(drawHandles)
                Handles.color = prevColor;
            else
                Gizmos.color = prevColor;

            return changed;
        }

        //--------------------------------------------------------------
        public static Vector3 PositionHandle(Vector3 position, Quaternion rotation, float handleSize)
        {
            Color color = Handles.color;
            Handles.color = Handles.xAxisColor;
            position = Handles.Slider(position, rotation * Vector3.right, handleSize, new Handles.DrawCapFunction(Handles.ArrowCap), EditorPrefs.GetFloat("MoveSnapX"));
            Handles.color = Handles.yAxisColor;
            position = Handles.Slider(position, rotation * Vector3.up, handleSize, new Handles.DrawCapFunction(Handles.ArrowCap), EditorPrefs.GetFloat("MoveSnapY"));
            Handles.color = Handles.zAxisColor;
            position = Handles.Slider(position, rotation * Vector3.forward, handleSize, new Handles.DrawCapFunction(Handles.ArrowCap), EditorPrefs.GetFloat("MoveSnapZ"));
            Handles.color = Handles.centerColor;

            Vector3 snap = new Vector3(EditorPrefs.GetFloat("MoveSnapX"), EditorPrefs.GetFloat("MoveSnapY"), EditorPrefs.GetFloat("MoveSnapZ"));
            position = Handles.FreeMoveHandle(position, rotation, handleSize * 0.15f, snap, new Handles.DrawCapFunction(Handles.RectangleCap));
            Handles.color = color;

            return position;
        }

        //--------------------------------------------------------------
        public static Quaternion RotationHandle(Vector3 position, Quaternion rotation, float handleSize)
        {
            Color color = Handles.color;
            Handles.color = Handles.xAxisColor;
            rotation = Handles.Disc(rotation, position, rotation * Vector3.right, handleSize, true, EditorPrefs.GetFloat("RotationSnap"));
            Handles.color = Handles.yAxisColor;
            rotation = Handles.Disc(rotation, position, rotation * Vector3.up, handleSize, true, EditorPrefs.GetFloat("RotationSnap"));
            Handles.color = Handles.zAxisColor;
            rotation = Handles.Disc(rotation, position, rotation * Vector3.forward, handleSize, true, EditorPrefs.GetFloat("RotationSnap"));
            Handles.color = Handles.centerColor;
            rotation = Handles.Disc(rotation, position, Camera.current.transform.forward, handleSize * 1.1f, false, 0.0f);

            rotation = Handles.FreeRotateHandle(rotation, position, handleSize);
            Handles.color = color;

            return rotation;
        }

        //--------------------------------------------------------------
        public static Vector3 ScaleHandle(Vector3 localScale, Vector3 position, Quaternion rotation, float handleSize)
        {
            localScale = Handles.ScaleHandle(localScale, position, rotation, handleSize);
            return localScale;
        }

        //--------------------------------------------------------------
        public static void DrawAxis(Vector3 pos, Quaternion rot, float size=1.0f)
        {
            Color prevColor = Handles.color;
            Handles.color = Color.green;
            Handles.ArrowCap(0, pos, Quaternion.LookRotation(rot*Vector3.up), size);
            Handles.color = Color.red;
            Handles.ArrowCap(0, pos, Quaternion.LookRotation(rot*Vector3.right), size);
            Handles.color = Color.blue;
            Handles.ArrowCap(0, pos, Quaternion.LookRotation(rot*Vector3.forward), size);
            Handles.color = prevColor;
        }

        //--------------------------------------------------------------
        public static void DrawCurve(SKSpline spline, Color color, float startT=0.0f, float endT=1.0f, Vector3 localOffset=new Vector3(), bool drawHandles=false)
        {
            float t = startT;
            List<Vector3> interPoints = new List<Vector3>();
            while(t < endT)
            {
                Vector3 interPoint = Vector3.zero;
                if(spline.Evaluate(t, ref interPoint))
                {
                    Quaternion splineRot = Quaternion.identity;
                    spline.GetSplineRotation(t, ref splineRot);

                    Vector3 offset = splineRot * localOffset;
                    interPoints.Add(interPoint + offset);
                }
                t += spline.SplineRenderResolution > 0.0f ? spline.SplineRenderResolution : 0.01f; // If it's being edited, it may be zero...
            }

            Vector3 endPoint = Vector3.zero;
            if(spline.Evaluate(endT, ref endPoint))
            {
                Quaternion splineRot = Quaternion.identity;
                spline.GetSplineRotation(endT, ref splineRot);

                Vector3 offset = splineRot * localOffset;
                interPoints.Add(endPoint + offset);
            }

            if(drawHandles)
            {
                Color prevColor = Handles.color;
                Handles.color = color;
                for(int i=0; i<interPoints.Count-1; i++)
                    Handles.DrawLine(interPoints[i], interPoints[i+1]);
                Handles.color = prevColor;
            }
            else
            {
                Color prevColor = Gizmos.color;
                Gizmos.color = color;
                for(int i=0; i<interPoints.Count-1; i++)
                    Gizmos.DrawLine(interPoints[i], interPoints[i+1]);
                Gizmos.color = prevColor;
            }
        }

        //--------------------------------------------------------------
        public static void DrawSplineParametrization(SKSpline spline, Color color, float startT=0.0f, float endT=1.0f, Vector3 localOffset=new Vector3())
        {
            Color prevColor = Gizmos.color;
            for(int i=0; i<spline.Count(); i++)
            {
                if(i > 0 && i+2 < spline.Count())
                {
                    Gizmos.color = color;
                    float paramT = 0.0f;
                    float pointAT = spline.GetControlPoint(i).tVal;
                    float pointBT = spline.GetControlPoint(i+1).tVal;
                    Vector3 paramPos = Vector3.zero;
                    for(int j=0; j<5; j++)
                    {
                        float t = pointAT + (pointBT - pointAT)*paramT;
                        if(t >= startT && t <= endT)
                        {
                            if(spline.EvaluateSegment(i, paramT, ref paramPos))
                            {
                                float handleSize = HandleUtility.GetHandleSize(paramPos) * spline.PointHandleSizeScale * SKRenderer.kParamPointDrawScalar;
                                Gizmos.DrawWireSphere(paramPos, handleSize);
                            }
                        }
                        paramT += 0.25f;
                    }
                }
            }
            Gizmos.color = prevColor;
        }

        //--------------------------------------------------------------
        public static void DrawCube(Vector3 position, float size, Color color, bool drawHandles=false)
        {
            Color prevColor = drawHandles ? Handles.color : Gizmos.color;
            if(drawHandles)
            {
                Handles.color = color;
                Handles.CubeCap(0, position, Quaternion.identity, size);
                Handles.color = prevColor;
            }
            else
            {
                Gizmos.color = color;
                Gizmos.DrawCube(position, new Vector3(size, size, size));
                Gizmos.color = prevColor;
            }
        }

        //--------------------------------------------------------------
        public static void DrawWireBox(Vector3 pos, Quaternion rot, Vector3 scale, Color color=new Color())
        {
            Vector3 halfExtents = scale*0.5f;

            //------- Upper ----

            // Upper-Right-Front
            Vector3 urf = rot * new Vector3(halfExtents.x, halfExtents.y, halfExtents.z) + pos;

            // Upper-Left-Front
            Vector3 ulf = rot * new Vector3(-halfExtents.x, halfExtents.y, halfExtents.z) + pos;

            // Upper-Right-Back
            Vector3 urb = rot * new Vector3(halfExtents.x, -halfExtents.y, halfExtents.z) + pos;

            // Upper-Left-Back
            Vector3 ulb = rot * new Vector3(-halfExtents.x, -halfExtents.y, halfExtents.z) + pos;

            //---- Lower ---

            // Lower-Right-Front
            Vector3 lrf = rot * new Vector3(halfExtents.x, halfExtents.y, -halfExtents.z) + pos;

            // Lower-Left-Front
            Vector3 llf = rot* new Vector3(-halfExtents.x, halfExtents.y, -halfExtents.z) + pos;

            // Lower-Right-Back
            Vector3 lrb = rot * new Vector3(halfExtents.x, -halfExtents.y, -halfExtents.z) + pos;

            // Lower-Left-Back
            Vector3 llb = rot * new Vector3(-halfExtents.x, -halfExtents.y, -halfExtents.z) + pos;

            //------ draw -----
            Color prevColor = Handles.color;
            Handles.color = color;

            Handles.DrawLine(urf, ulf);
            Handles.DrawLine(ulf, ulb);
            Handles.DrawLine(ulb, urb);
            Handles.DrawLine(urb, urf);

            Handles.DrawLine(urf, lrf);
            Handles.DrawLine(ulf, llf);
            Handles.DrawLine(urb, lrb);
            Handles.DrawLine(ulb, llb);

            Handles.DrawLine(lrf, llf);
            Handles.DrawLine(llf, llb);
            Handles.DrawLine(llb, lrb);
            Handles.DrawLine(lrb, lrf);

            Handles.color = prevColor;
        }
    }
}
#endif
