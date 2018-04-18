//
// SKBlendNodeEditor.cs
//
// Created by Ryan Graham on 01/29/16.
// Copyright (c) 2016 Ryan Graham, all rights reserved.
//

using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;

using SplineKitPro;

[System.Obsolete("Depreciated, Use SKBlendChainNode instead")]
[CustomEditor(typeof(SKBlendNode))]
public class SKBlendNodeEditor : Editor
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
        SKBlendNode blendNode = target as SKBlendNode;
        Undo.RecordObject(blendNode, blendNode.UsesRotation ? "Edit Rotation Blend Node" : "Edit Scale Blend Node");

        blendNode.Direction = (NodeDirection)EditorGUILayout.EnumPopup("Direction", blendNode.Direction);
        
        if(blendNode.UsesRotation)
        {
            blendNode.DisableBanking = EditorGUILayout.Toggle("Disable Banking", blendNode.DisableBanking);

            Vector3 startEuler = blendNode.StartRotation.eulerAngles;
            Vector3 newEuler = EditorGUILayout.Vector3Field("Start Rotation", startEuler);
            if(newEuler != startEuler)
                blendNode.StartRotation = Quaternion.Euler(newEuler);

            Vector3 endEuler = blendNode.EndRotation.eulerAngles;
            newEuler = EditorGUILayout.Vector3Field("End Rotation", endEuler);
            if(newEuler != endEuler)
                blendNode.EndRotation = Quaternion.Euler(newEuler);
        }

        if(blendNode.UsesScale)
        {
            blendNode.StartScale = EditorGUILayout.Vector3Field("Start Scale", blendNode.StartScale);
            blendNode.EndScale = EditorGUILayout.Vector3Field("End Scale", blendNode.EndScale);
        }

        blendNode.BlendInT = EditorGUILayout.Slider("Blend In T", blendNode.BlendInT, 0.0f, 1.0f);
        if(blendNode.BlendInT > blendNode.tVal)
            blendNode.BlendInT = blendNode.tVal;

        float prevStartT = blendNode.tVal;
        blendNode.tVal = EditorGUILayout.Slider("Start T", blendNode.tVal, 0.0f, 1.0f);

        float prevEndT = blendNode.EndT;
        blendNode.EndT = EditorGUILayout.Slider("End T", blendNode.EndT, 0.0f, 1.0f);
        if(blendNode.EndT < blendNode.tVal)
            blendNode.EndT = blendNode.tVal;

        blendNode.BlendOutT = EditorGUILayout.Slider("Blend Out T", blendNode.BlendOutT, 0.0f, 1.0f);
        if(blendNode.BlendOutT < blendNode.EndT)
            blendNode.BlendOutT = blendNode.EndT;

        if(GUI.changed)
        {
            blendNode.Spline.SplineEdited();

            if(prevStartT != blendNode.tVal)
            {
                if(blendNode.UsesRotation)
                    blendNode.Spline.ReorderRotationNodes();

                if(blendNode.UsesScale)
                    blendNode.Spline.ReorderScaleNodes();

                float delta = blendNode.tVal - prevStartT;
                blendNode.BlendInT += delta;
                //blendNode.SetEndTValue(blendNode.EndT + delta);
            }
            else if(prevEndT != blendNode.EndT)
            {
                float delta = blendNode.EndT - prevEndT;
                blendNode.BlendOutT += delta;
            }

            SKEditorUtil.MarkObjectAndScenesDirty(target);

            // If the editor is paused, force the scene to be repainted
            if(EditorApplication.isPaused)
                SceneView.RepaintAll();
        }
    }
}
