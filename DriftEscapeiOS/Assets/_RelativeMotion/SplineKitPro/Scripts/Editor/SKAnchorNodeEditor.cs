//
// SKAnchorNodeEditor.cs
//
// Created by Ryan Graham on 02/03/16.
// Copyright (c) 2016 Ryan Graham, all rights reserved.
//

using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;

using SplineKitPro;

[CustomEditor(typeof(SKAnchorNode))]
public class SKAnchorNodeEditor : Editor
{
    //--------------------------------------------------------------
    void OnEnable()
    {
        Tools.hidden = true;
    }

    //--------------------------------------------------------------
    void OnDisable()
    {
        Tools.hidden = false;
    }

    //--------------------------------------------------------------
    public override void OnInspectorGUI()
    {
        SKAnchorNode anchorNode = target as SKAnchorNode;
        float tval = EditorGUILayout.Slider("T value", anchorNode.tVal, 0.0f, 1.0f);

        if(tval != anchorNode.tVal)
        {
            Undo.RecordObject(anchorNode, "Edit Anchor Node");
            anchorNode.SetNodeTValue(tval);

            if(anchorNode.Spline != null)
            {
                anchorNode.Spline.ReorderAnchorNodes();
                anchorNode.Spline.SplineEdited();
            }

            SKEditorUtil.MarkObjectAndScenesDirty(target);

            // If the editor is paused, force the scene to be repainted
            if(EditorApplication.isPaused)
                SceneView.RepaintAll();
        }
    }

    //--------------------------------------------------------------
    public void OnSceneGUI()
    {
        // Hide transform tool
        Tools.hidden = true;
    }
}
