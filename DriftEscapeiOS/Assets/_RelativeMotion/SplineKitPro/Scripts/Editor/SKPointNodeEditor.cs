//
// SKPointNodeEditor.cs
//
// Created by Ryan Graham on 12/11/15.
// Copyright (c) 2015 Ryan Graham. All rights reserved.
//

using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;

using SplineKitPro;

[CustomEditor(typeof(SKPointNode))]
public class SKPointNodeEditor : Editor
{
    //--------------------------------------------------------------
    void OnDisable()
    {
        Tools.hidden = false;
    }

    //--------------------------------------------------------------
    public override void OnInspectorGUI()
    {
        SKPointNode splinePt = target as SKPointNode;
        EditorGUILayout.LabelField("tVal: " + splinePt.tVal);
        EditorGUILayout.LabelField("Length: " + splinePt.Length);

        if(splinePt.RotationOffsetAbsolute)
            splinePt.RotationOffset = EditorGUILayout.Vector3Field("Rotation (Absolute)", splinePt.RotationOffset);
        else
            splinePt.RotationOffset = EditorGUILayout.Vector3Field("Rotation Offset", splinePt.RotationOffset);

        splinePt.RotationOffsetAbsolute = EditorGUILayout.Toggle("Rotation Absolute", splinePt.RotationOffsetAbsolute);

        if(splinePt.Spline.Count() > 3)
        {
            SKPointNode lastPt = splinePt.Spline.GetControlPoint(splinePt.Spline.Count()-2);
            if(lastPt != null && splinePt == lastPt)
            {
                GameObject weld = EditorGUILayout.ObjectField("Weld Node", splinePt.Weld, typeof(GameObject), true) as GameObject;
                if(weld != splinePt.Weld)
                {
                    Undo.RecordObject(splinePt, "Set Weld");
                    splinePt.Weld = weld;
                    splinePt.Spline.SplineEdited();
                }
            }
        }

        if(GUI.changed)
        {
            splinePt.Spline.SplineEdited();

            // If the editor is paused, force the scene to be repainted
            if(EditorApplication.isPaused)
                SceneView.RepaintAll();
        }
    }

    //--------------------------------------------------------------
    void OnSceneGUI()
    {
        SKPointNode splinePt = target as SKPointNode;
        if(splinePt.Spline.EditMode == SKSpline.SplineEditMode.Sculpt)
            Tools.hidden = true;
        else if(splinePt.name == SKSpline.kStartPointName || splinePt.name == SKSpline.kEndPointName)
            Tools.hidden = splinePt.Spline.AutoManageEndPoints;
    }
}
