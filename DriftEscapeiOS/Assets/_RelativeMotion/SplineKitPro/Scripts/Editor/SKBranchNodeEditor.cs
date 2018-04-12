//
// SKBranchNodeEditor.cs
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

[CustomEditor(typeof(SKBranchNode))]
public class SKBranchNodeEditor : Editor
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
        SKBranchNode branchNode = target as SKBranchNode;
        Undo.RecordObject(branchNode, "Edit Branch Node");

        branchNode.Direction = (NodeDirection)EditorGUILayout.EnumPopup("Direction", branchNode.Direction);

        SKGUI.LineSeperator();
        float tval = EditorGUILayout.Slider("T value", branchNode.tVal, 0.0f, 1.0f);
        if(branchNode.tVal != tval)
            branchNode.SetNodeTValue(tval);
        SKGUI.LineSeperator();

        string indent = "      ";
        branchNode.BranchCmd.ID = (int)((SKBranchCmdId)EditorGUILayout.EnumPopup("Branch Selection", (SKBranchCmdId)branchNode.BranchCmd.ID));
        if(branchNode.BranchCmd.ID == (int)SKBranchCmdId.kSpecifyBranch)
        {
            List<string> branchOptions = new List<string>();
            for(int i=0; i<branchNode.Branches.Count; i++)
                branchOptions.Add(branchNode.Branches[i].name);

            if(branchOptions.Count > 0)
            {
                int prevSelectedIndex = branchOptions.IndexOf(branchNode.BranchCmd.strValue);
                if(prevSelectedIndex < 0)
                    prevSelectedIndex = 0;

                int selectedIndex = EditorGUILayout.Popup(indent + "Branch", prevSelectedIndex, branchOptions.ToArray());
                branchNode.BranchCmd.strValue = branchOptions[selectedIndex];
            }
        }
        else if(branchNode.BranchCmd.ID == (int)SKBranchCmdId.kExecuteFunction)
        {
            branchNode.BranchCmd.strValue = EditorGUILayout.TextField(indent + "Function", branchNode.BranchCmd.strValue);
            branchNode.BranchCmd.fValue = EditorGUILayout.FloatField(indent + "Float", branchNode.BranchCmd.fValue);
            branchNode.BranchCmd.AuxStrValue = EditorGUILayout.TextField(indent + "String", branchNode.BranchCmd.AuxStrValue);
            branchNode.BranchCmd.GameObj = (GameObject)EditorGUILayout.ObjectField(indent + "Game Object", branchNode.BranchCmd.GameObj, typeof(GameObject), true);
			branchNode.BranchCmd.GameObj1 = (GameObject)EditorGUILayout.ObjectField(indent + "Game Object 1", branchNode.BranchCmd.GameObj1, typeof(GameObject), true);
            branchNode.BranchCmd.GameObj2 = (GameObject)EditorGUILayout.ObjectField(indent + "Game Object 2", branchNode.BranchCmd.GameObj2, typeof(GameObject), true);
            branchNode.BranchCmd.Locator = (Transform)EditorGUILayout.ObjectField(indent + "Locator", branchNode.BranchCmd.Locator, typeof(Transform), true);
            branchNode.BranchCmd.AudioSrc = (AudioSource)EditorGUILayout.ObjectField(indent + "Audio Source", branchNode.BranchCmd.AudioSrc, typeof(AudioSource), true);
        }

        SKGUI.LineSeperator();
        if(GUILayout.Button("Create Branch"))
        {
            branchNode.CreateBranch();
        }

        if(GUI.changed)
        {
            if(branchNode.Spline != null)
            {
                branchNode.Spline.ReorderBranchNodes();
                branchNode.Spline.SplineEdited();
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
