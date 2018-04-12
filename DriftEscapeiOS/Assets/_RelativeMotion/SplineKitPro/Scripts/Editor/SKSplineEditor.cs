///
/// SKSplineEditor.cs
///
/// Created by Ryan Graham on 09/02/15.
/// Copyright (c) 2015 Ryan Graham. All rights reserved.
///

using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;

#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0 || UNITY_5_1 || UNITY_5_2 || UNITY_5_3_0 || UNITY_5_3_1 || UNITY_5_3_2 || UNITY_5_3_3 || UNITY_5_3_4
#else
using UnityEditor.SceneManagement;
#endif

using SplineKitPro;

[CustomEditor(typeof(SKSpline))]
public class SKSplineEditor : Editor
{
    static EditorWindow s_pointInspector = null;

    //--------------------------------------------------------------
    public void OnEnable()
    {
        SKSpline targetSpline = target as SKSpline;
        if(targetSpline != null)
            targetSpline.SplineSelected = true;
    }

    //--------------------------------------------------------------
    void OnDisable()
    {
        SKSpline targetSpline = target as SKSpline;
        if(targetSpline != null)
            targetSpline.SplineSelected = false;
    }

    //--------------------------------------------------------------
    public override void OnInspectorGUI()
    {
        SKSpline targetSpline = target as SKSpline;
        bool splineNeedsUpdate = false;
        bool splineNeedsRepaint = false;

        Undo.RecordObject(targetSpline, "Update Spline");

        string version = targetSpline.VersionMajor + "." + targetSpline.VersionMinor + "." + targetSpline.VersionRevision;
        if(!targetSpline.IsCurrentVersion())
        {
            //EditorGUILayout.LabelField("!! Version " + version + " is out of date, spline may not be compatible!");
            //if(GUILayout.Button("Set Version To Current"))
            //    targetSpline.SetVersionToCurrent();

            targetSpline.UpgradeToVersion(SKSpline.kCurrentVersionMajor, SKSpline.kCurrentVersionMinor, SKSpline.kCurrentVersionRevision);

            return;
        }

        EditorGUI.indentLevel++;

        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f, EditorStyles.foldout);
        Rect rect = GUILayoutUtility.GetLastRect();
        targetSpline.InfoFoldout = EditorGUI.Foldout(rect, targetSpline.InfoFoldout, "Info", true);
        if(targetSpline.InfoFoldout)
        {
            EditorGUI.indentLevel++;
            EditorGUILayout.LabelField("Version ", version);
            EditorGUILayout.LabelField("Length ", targetSpline.Length.ToString("F3"));
            EditorGUI.indentLevel--;
        }
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f, EditorStyles.foldout);
        rect = GUILayoutUtility.GetLastRect();
        targetSpline.RenderFoldout = EditorGUI.Foldout(rect, targetSpline.RenderFoldout, "Render", true);
        if(targetSpline.RenderFoldout)
        {
            EditorGUI.indentLevel++;
            targetSpline.AlwaysRender = EditorGUILayout.Toggle("Always Render", targetSpline.AlwaysRender);

            EditorGUI.BeginChangeCheck();
            targetSpline.SplineRenderColor = EditorGUILayout.ColorField("Spline Color", targetSpline.SplineRenderColor);

            targetSpline.SplineRenderResolution = EditorGUILayout.FloatField("Spline Resolution", targetSpline.SplineRenderResolution);

            //SKGUI.BeginTabbedHorizontal();
            //targetSpline.VisualizeParameterization = GUILayout.Toggle(targetSpline.VisualizeParameterization, " Visualize Parameterization");
            //targetSpline.ParamRenderColor = EditorGUILayout.ColorField(targetSpline.ParamRenderColor, GUILayout.Width(SKGUI.kColorWidth));
            //SKGUI.EndTabbedLineHorizontal();

            targetSpline.PointHandleSizeScale = EditorGUILayout.Slider("Point Handle Size", targetSpline.PointHandleSizeScale, 0.0f, 1.0f);
            targetSpline.RotHandleSizeScale = EditorGUILayout.Slider("Rotation Handle Size", targetSpline.RotHandleSizeScale, 0.0f, 1.0f);
            targetSpline.ScaleHandleSizeScale = EditorGUILayout.Slider("Scale Handle Size", targetSpline.ScaleHandleSizeScale, 0.0f, 1.0f);
            if(EditorGUI.EndChangeCheck())
                splineNeedsRepaint = true;

            EditorGUI.indentLevel--;
        }
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f, EditorStyles.foldout);
        rect = GUILayoutUtility.GetLastRect();
        targetSpline.SetupFoldout = EditorGUI.Foldout(rect, targetSpline.SetupFoldout, "Setup", true);
        if(targetSpline.SetupFoldout)
        {
            EditorGUI.indentLevel++;
            EditorGUI.BeginChangeCheck();
            targetSpline.Parameterization = (SKSpline.SplineParameterization)EditorGUILayout.EnumPopup("Parameterization", targetSpline.Parameterization);

            targetSpline.SplineUp = EditorGUILayout.Vector3Field("Spline Up", targetSpline.SplineUp);
            targetSpline.AutoManageEndPoints = EditorGUILayout.Toggle("Auto Manage End Points", targetSpline.AutoManageEndPoints);
            targetSpline.UsePointKeyframeRotation = EditorGUILayout.Toggle("Use Point Keyframe Rotation", targetSpline.UsePointKeyframeRotation);
            if(EditorGUI.EndChangeCheck())
                splineNeedsUpdate = true;

            EditorGUI.indentLevel--;
        }
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f, EditorStyles.foldout);
        rect = GUILayoutUtility.GetLastRect();
        targetSpline.EditorFoldout = EditorGUI.Foldout(rect, targetSpline.EditorFoldout, "Edit", true);
        if(targetSpline.EditorFoldout)
        {
            EditorGUI.indentLevel++;
            EditorGUI.BeginChangeCheck();
            targetSpline.EditMode = (SKSpline.SplineEditMode)EditorGUILayout.EnumPopup("Edit Mode", targetSpline.EditMode);
            if(EditorGUI.EndChangeCheck())
                splineNeedsRepaint = true;

            SKGUI.BeginTabbedHorizontal(3.0f);
            GUILayout.Label("Point Depth Priority", GUILayout.Width(120.0f));
            for(int i=0; i<3; i++)
            {
                SKSpline.PointPlacementType prevPlacement = targetSpline.PointPlacement[i];
                targetSpline.PointPlacement[i] = (SKSpline.PointPlacementType)EditorGUILayout.EnumPopup(targetSpline.PointPlacement[i], GUILayout.Width(85.0f));
                if(targetSpline.PointPlacement[i] != prevPlacement)
                    ValidatePointPlacements(i);
            }
            EditorGUILayout.EndHorizontal();

            SKGUI.LineSeperator();
            SKGUI.BeginTabbedHorizontal(3.0f);
            GUILayout.Label("Freeze Trans", GUILayout.Width(105.0f));
            GUILayout.Label("X", GUILayout.Width(12.0f));
            targetSpline.LockTransXYZ[0] = GUILayout.Toggle(targetSpline.LockTransXYZ[0], "", GUILayout.Width(SKGUI.kToggleWidth));
            GUILayout.Label("Y", GUILayout.Width(12.0f));
            targetSpline.LockTransXYZ[1] = GUILayout.Toggle(targetSpline.LockTransXYZ[1], "", GUILayout.Width(SKGUI.kToggleWidth));
            GUILayout.Label("Z", GUILayout.Width(12.0f));
            targetSpline.LockTransXYZ[2] = GUILayout.Toggle(targetSpline.LockTransXYZ[2], "", GUILayout.Width(SKGUI.kToggleWidth));
            EditorGUILayout.EndHorizontal();

            SKGUI.LineSeperator();
            SKGUI.BeginTabbedHorizontal(3.0f);
            GUILayout.Label("Freeze Rotation", GUILayout.Width(105.0f));
            GUILayout.Label("X", GUILayout.Width(12.0f));
            targetSpline.LockRotRPH[0] = GUILayout.Toggle(targetSpline.LockRotRPH[0], "", GUILayout.Width(SKGUI.kToggleWidth));
            GUILayout.Label("Y", GUILayout.Width(12.0f));
            targetSpline.LockRotRPH[1] = GUILayout.Toggle(targetSpline.LockRotRPH[1], "", GUILayout.Width(SKGUI.kToggleWidth));
            GUILayout.Label("Z", GUILayout.Width(12.0f));
            targetSpline.LockRotRPH[2] = GUILayout.Toggle(targetSpline.LockRotRPH[2], "", GUILayout.Width(SKGUI.kToggleWidth));
            EditorGUILayout.EndHorizontal();

            SKGUI.LineSeperator();
            SKGUI.BeginTabbedHorizontal(3.0f);
            GUILayout.Label("Freeze Scale", GUILayout.Width(105.0f));
            GUILayout.Label("X", GUILayout.Width(12.0f));
            targetSpline.LockScaleXYZ[0] = GUILayout.Toggle(targetSpline.LockScaleXYZ[0], "", GUILayout.Width(SKGUI.kToggleWidth));
            GUILayout.Label("Y", GUILayout.Width(12.0f));
            targetSpline.LockScaleXYZ[1] = GUILayout.Toggle(targetSpline.LockScaleXYZ[1], "", GUILayout.Width(SKGUI.kToggleWidth));
            GUILayout.Label("Z", GUILayout.Width(12.0f));
            targetSpline.LockScaleXYZ[2] = GUILayout.Toggle(targetSpline.LockScaleXYZ[2], "", GUILayout.Width(SKGUI.kToggleWidth));
            EditorGUILayout.EndHorizontal();

            SKGUI.BeginLineHorizontal();
            EditorGUILayout.LabelField("Flatten", GUILayout.Width(105.0f));
            targetSpline.FlattenPlaneRecursive = GUILayout.Toggle(targetSpline.FlattenPlaneRecursive, " Include Branches");
            EditorGUILayout.EndHorizontal();

            SKGUI.BeginTabbedHorizontal(2.0f);
            EditorGUILayout.LabelField("Plane", GUILayout.Width(105.0f));
            targetSpline.FlattenPlane = (SKSpline.Plane)EditorGUILayout.EnumPopup(targetSpline.FlattenPlane, GUILayout.Width(SKGUI.kFieldWidth));
            EditorGUILayout.EndHorizontal();

            SKGUI.BeginTabbedHorizontal(2.0f);
            EditorGUILayout.LabelField("Height", GUILayout.Width(105.0f));
            targetSpline.FlattenHeight = EditorGUILayout.FloatField(targetSpline.FlattenHeight, GUILayout.Width(SKGUI.kFieldWidth));
            EditorGUILayout.EndHorizontal();

            SKGUI.BeginTabbedHorizontal(4.0f);
            if(GUILayout.Button("Flatten", GUILayout.Width(SKGUI.kButtonWidth)))
            {
                Undo.RecordObject(targetSpline, "Flatten Spline");
                targetSpline.MakePlanar(targetSpline, targetSpline.FlattenPlane, targetSpline.FlattenHeight, targetSpline.FlattenPlaneRecursive);
            }
            EditorGUILayout.EndHorizontal();

            SKGUI.LineSeperator();
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField("Add Nodes", GUILayout.Width(105.0f));
            targetSpline.AddNodeAutoSelect = GUILayout.Toggle(targetSpline.AddNodeAutoSelect, " Automatically Select Node When Added");
            EditorGUILayout.EndHorizontal();
            
            EditorGUI.BeginChangeCheck();
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField("t", GUILayout.Width(SKGUI.kLabelWidth/8.0f));
            targetSpline.EventTVal = EditorGUILayout.Slider(targetSpline.EventTVal, 0.0f, 1.0f);
            EditorGUILayout.EndHorizontal();
            if(EditorGUI.EndChangeCheck())
                splineNeedsRepaint = true;

            EditorGUILayout.BeginHorizontal();
            if(GUILayout.Button("Add Trigger Node"))
            {
                targetSpline.AddTriggerNode(targetSpline.EventTVal);
            }
            if(GUILayout.Button("Add Rotation Node"))
            {
                targetSpline.AddRotationNode(targetSpline.EventTVal);
            }
            if(GUILayout.Button("Add Scale Node"))
            {
                targetSpline.AddScaleNode(targetSpline.EventTVal);
            }
            EditorGUILayout.EndHorizontal();
            EditorGUILayout.BeginHorizontal();
            if(GUILayout.Button("Add Branch Node"))
            {
                targetSpline.AddBranchNode(targetSpline.EventTVal);
            }
            if(GUILayout.Button("Add Anchor Node"))
            {
                targetSpline.AddAnchorNode(targetSpline.EventTVal);
            }
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndHorizontal();

        EditorGUI.indentLevel--;

        SKGUI.BlankLine();

        if(targetSpline.IsLooped)
        {
            if(GUILayout.Button("Break Loop"))
                targetSpline.MakeLoop(false);
        }
        else
        {
            if(GUILayout.Button("Make Loop"))
                targetSpline.MakeLoop(true);
        }

        GUILayout.BeginHorizontal();
        if(GUILayout.Button("Center Origin"))
        {
            targetSpline.CenterOrigin();
        }
        GUILayout.EndHorizontal();
        GUILayout.BeginHorizontal();
        if(GUILayout.Button("Reverse Spline (Leave Triggers)"))
        {
            targetSpline.ReverseSpline(true);
        }
        if(GUILayout.Button("Reverse Spline (Move Triggers)"))
        {
            targetSpline.ReverseSpline(false);
        }
        GUILayout.EndHorizontal();

        if(GUILayout.Button("Clear"))
        {
            targetSpline.Clear();
        }

        if(GUILayout.Button("Recache"))
        {
            targetSpline.Recache();
        }
        SKGUI.BlankLine();

        if(splineNeedsUpdate || targetSpline.transform.hasChanged)
        {
            targetSpline.transform.hasChanged = false;
            targetSpline.SplineEdited();
            SKEditorUtil.MarkObjectAndScenesDirty(target);

            // If the editor is paused, force the scene to be repainted
            if(EditorApplication.isPaused)
                splineNeedsRepaint = true;
        }

        if(splineNeedsRepaint)
            SceneView.RepaintAll();
    }

    //--------------------------------------------------------------
    void OnSceneGUI()
    {
        SKSpline targetSpline = target as SKSpline;

        Event current = Event.current;
        if(current != null)
        {
            int controlID = GUIUtility.GetControlID(targetSpline.GetHashCode(), FocusType.Passive);
            if(current.isMouse && current.type == EventType.MouseDown && current.clickCount == 2)
            {
                HandleDoubleClick(current);
            }
            else if(current.type == EventType.MouseDown)
            {
                HandleMouseDown(current);
            }
            else if(current.type == EventType.MouseUp)
            {
                HandleMouseUp(current);
            }
            else if(current.type == EventType.Layout)
            {
                // Don't let unity editor take mouse up event...
                if(current.shift)
                {
                    HandleUtility.AddDefaultControl(controlID);
                    //current.Use();
                }
            }
        }

        if(SKRenderer.RenderSplineHandles(targetSpline, targetSpline.gameObject))
        {
            targetSpline.SplineEdited();
            SKEditorUtil.MarkObjectAndScenesDirty(target);
        }
    }

    //--------------------------------------------------------------
    bool HandleDoubleClick(Event current)
    {
        if(Camera.current != null)
        {
            Ray worldRay = HandleUtility.GUIPointToWorldRay(current.mousePosition);
            RaycastHit[] results = Physics.RaycastAll(worldRay, Mathf.Infinity);
            GameObject closestObj = null;
            for(int i=0; i<results.Length; i++)
            {
                if(/*results[i].collider.gameObject.GetComponent<SKPointNode>() != null ||*/ results[i].collider.gameObject.GetComponent<SKTriggerNode>() != null)
                {
                    if(closestObj != null)
                    {
                        float closestDist = Vector3.Distance(worldRay.origin, closestObj.transform.position);
                        float dist = Vector3.Distance(worldRay.origin, results[i].collider.gameObject.transform.position);
                        if(dist < closestDist)
                            closestObj = results[i].collider.gameObject;
                    }
                    else
                        closestObj = results[i].collider.gameObject;
                }
            }

            if(closestObj != null)
            {
                if(s_pointInspector == null)
                    s_pointInspector = SKTargetInspector.CreateInspector();

                SKTargetInspector.ShowInspector(s_pointInspector, closestObj);
                return true;
            }
        }

        return false;
    }

    //--------------------------------------------------------------
    void HandleMouseDown(Event current)
    {
        if(!current.isMouse)
            return;
    }

    //--------------------------------------------------------------
    void HandleMouseUp(Event current)
    {
        SKSpline targetSpline = target as SKSpline;
        if(!targetSpline.SplineSelected || !current.isMouse || Camera.current == null)
            return;

        // Shift + Right mouse button add
        if(current.shift && current.button == 0)
        {
            GameObject closestObj = null;
            Vector3 closestPoint = Vector3.zero;
            bool hitMySplinePlane = false;
            Vector3 mySplinePlaneHitPoint = Vector3.zero;
            SKPlane myEditPlane = targetSpline.gameObject.GetComponentInChildren<SKPlane>();

            Ray worldRay = HandleUtility.GUIPointToWorldRay(current.mousePosition);
            RaycastHit[] results = Physics.RaycastAll(worldRay, Mathf.Infinity);
            for(int i=0; i<results.Length; i++)
            {
                // Ignore triggers
                if(results[i].collider.isTrigger)
                    continue;

                GameObject hitObj = results[i].collider.gameObject;
                SKPlane splinePlane = hitObj.GetComponent<SKPlane>();
                if(splinePlane != null)
                {
                    // If this is my spline edit plane, save off the hit point
                    if(!hitMySplinePlane && myEditPlane != null && splinePlane.GetInstanceID() == myEditPlane.GetInstanceID())
                    {
                        hitMySplinePlane = true;
                        mySplinePlaneHitPoint = results[i].point;
                    }
                }
                else
                {
                    // Otherwise, this is the closest collision point
                    if(closestObj != null)
                    {
                        float closestDist = Vector3.Distance(worldRay.origin, closestPoint);
                        float dist = Vector3.Distance(worldRay.origin, results[i].point);
                        if(dist < closestDist)
                        {
                            closestObj = hitObj;
                            closestPoint = results[i].point;
                        }
                    }
                    else
                    {
                        closestObj = hitObj;
                        closestPoint = results[i].point;
                    }
                }
            }

            bool pointAdded = false;
            for(int i=0; i<targetSpline.PointPlacement.Length; i++)
            {
                if(targetSpline.PointPlacement[i] == SKSpline.PointPlacementType.SplinePlane)
                {
                    if(hitMySplinePlane)
                    {
                        targetSpline.AddPoint(mySplinePlaneHitPoint);
                        pointAdded = true;
                        break;
                    }
                }
                else if(targetSpline.PointPlacement[i] == SKSpline.PointPlacementType.Collision)
                {
                    if(closestObj != null)
                    {
                        targetSpline.AddPoint(closestPoint);
                        pointAdded = true;
                        break;
                    }
                }
                else if(targetSpline.PointPlacement[i] == SKSpline.PointPlacementType.Pivot)
                {
                    Vector3 camToPivot = SceneView.currentDrawingSceneView.pivot - Camera.current.transform.position;
                    Vector3 pointPosition = worldRay.origin + worldRay.direction * camToPivot.magnitude;
                    targetSpline.AddPoint(pointPosition);
                    pointAdded = true;
                    break;
                }
            }

            if(!pointAdded)     // No priority was set to Pivot, so just use Pivot
            {
                Vector3 camToPivot = SceneView.currentDrawingSceneView.pivot - Camera.current.transform.position;
                Vector3 pointPosition = worldRay.origin + worldRay.direction * camToPivot.magnitude;
                targetSpline.AddPoint(pointPosition);
            }
        }
    }

    //--------------------------------------------------------------
    void ValidatePointPlacements(int changedIdx)
    {
        SKSpline targetSpline = target as SKSpline;

        int p1 = changedIdx == 0 ? 1 : 0;
        int p2 = p1 == 0 ? (changedIdx == 1 ? 2 : 1) : p1 == 1 ? (changedIdx == 0 ? 2 : 0) : (changedIdx == 0 ? 1 : 0);
        if(targetSpline.PointPlacement[p1] == targetSpline.PointPlacement[changedIdx])
        {
            if(targetSpline.PointPlacement[changedIdx] == SKSpline.PointPlacementType.Collision)
                targetSpline.PointPlacement[p1] = targetSpline.PointPlacement[p2] == SKSpline.PointPlacementType.SplinePlane ? SKSpline.PointPlacementType.Pivot : SKSpline.PointPlacementType.SplinePlane;
            else if(targetSpline.PointPlacement[changedIdx] == SKSpline.PointPlacementType.SplinePlane)
                targetSpline.PointPlacement[p1] = targetSpline.PointPlacement[p2] == SKSpline.PointPlacementType.Collision ? SKSpline.PointPlacementType.Pivot : SKSpline.PointPlacementType.Collision;
            else if(targetSpline.PointPlacement[changedIdx] == SKSpline.PointPlacementType.Pivot)
                targetSpline.PointPlacement[p1] = targetSpline.PointPlacement[p2] == SKSpline.PointPlacementType.SplinePlane ? SKSpline.PointPlacementType.Collision : SKSpline.PointPlacementType.SplinePlane;
        }

        if(targetSpline.PointPlacement[p2] == targetSpline.PointPlacement[changedIdx] || targetSpline.PointPlacement[p2] == targetSpline.PointPlacement[p1])
        {
            if(targetSpline.PointPlacement[changedIdx] == SKSpline.PointPlacementType.Collision)
                targetSpline.PointPlacement[p2] = targetSpline.PointPlacement[p1] == SKSpline.PointPlacementType.SplinePlane ? SKSpline.PointPlacementType.Pivot : SKSpline.PointPlacementType.SplinePlane;
            else if(targetSpline.PointPlacement[changedIdx] == SKSpline.PointPlacementType.SplinePlane)
                targetSpline.PointPlacement[p2] = targetSpline.PointPlacement[p1] == SKSpline.PointPlacementType.Collision ? SKSpline.PointPlacementType.Pivot : SKSpline.PointPlacementType.Collision;
            else if(targetSpline.PointPlacement[changedIdx] == SKSpline.PointPlacementType.Pivot)
                targetSpline.PointPlacement[p2] = targetSpline.PointPlacement[p1] == SKSpline.PointPlacementType.SplinePlane ? SKSpline.PointPlacementType.Collision : SKSpline.PointPlacementType.SplinePlane;
        }
    }
}
