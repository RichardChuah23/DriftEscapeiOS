///
/// SKPlaneEditor.cs
///
/// Created by Ryan Graham on 12/09/15.
/// Copyright (c) 2015 Ryan Graham. All rights reserved.
///

using UnityEditor;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

using SplineKitPro;

[CustomEditor(typeof(SKPlane))]
public class SKPlaneEditor : Editor
{
    //--------------------------------------------------------------
    public override void OnInspectorGUI()
    {
        SKPlane targetPlane = target as SKPlane;

        SKGUI.BeginTabbedHorizontal();
        targetPlane.ShowSplinePlane = GUILayout.Toggle(targetPlane.ShowSplinePlane, " Show Spline Plane");
        targetPlane.PlaneRenderColor = EditorGUILayout.ColorField(targetPlane.PlaneRenderColor, GUILayout.Width(SKGUI.kColorWidth));
        SKGUI.EndTabbedHorizontal();

        if(GUI.changed)
        {
            targetPlane.SetShowSplinePlane(targetPlane.ShowSplinePlane);

            SKEditorUtil.MarkObjectAndScenesDirty(target);

            // If the editor is paused, force the scene to be repainted
            if(EditorApplication.isPaused)
                SceneView.RepaintAll();
        }
    }
}
