//
// SKTriggerNodeEditor.cs
//
// Created by Ryan Graham on 09/02/15.
// Copyright (c) 2015 Ryan Graham. All rights reserved.
//

using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;

using SplineKitPro;

[CustomEditor(typeof(SKTriggerNode))]
public class SKTriggerNodeEditor : Editor
{
    SKTriggerNode m_triggerNode;
    SerializedProperty m_commandList;

    static string[] s_instantiateOptions = { "Parent", "Locator" };

    //--------------------------------------------------------------
    void OnEnable()
    {
        Tools.hidden = true;
        m_triggerNode = (SKTriggerNode)target;
        m_commandList = serializedObject.FindProperty("m_commands");
    }

    //--------------------------------------------------------------
    void OnDisable()
    {
        Tools.hidden = false;
    }

    //--------------------------------------------------------------
    public override void OnInspectorGUI()
    {
        Undo.RecordObject(m_triggerNode, "Edit Trigger Node");

        serializedObject.Update();

        m_triggerNode.Direction = (NodeDirection)EditorGUILayout.EnumPopup("Direction", m_triggerNode.Direction);
        m_triggerNode.AllowCollisionTrigger = EditorGUILayout.Toggle("Allow Collision Trigger", m_triggerNode.AllowCollisionTrigger);

        SKGUI.LineSeperator();
        float tval = EditorGUILayout.Slider("T value", m_triggerNode.tVal, 0.0f, 1.0f);
        if(m_triggerNode.tVal != tval)
            m_triggerNode.SetNodeTValue(tval); // Make sure the distance and position get updated
        SKGUI.LineSeperator();

        DisplayInspectorCommands();
        //EditorGUILayout.PropertyField(m_commandList, true);
        //serializedObject.ApplyModifiedProperties();

         if(GUI.changed)
        {
            if(m_triggerNode.Spline != null)
            {
                m_triggerNode.Spline.ReorderTriggerNodes();
                m_triggerNode.Spline.SplineEdited();
            }

            SKEditorUtil.MarkObjectAndScenesDirty(target);

            // If the editor is paused, force the scene to be repainted
            if(EditorApplication.isPaused)
                SceneView.RepaintAll();
        }
    }

    //--------------------------------------------------------------
    void DisplayInspectorCommands()
    {
        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("Commands");
        if(GUILayout.Button("+", GUILayout.Width(SKGUI.kToggleWidth)))
        {
            m_commandList.arraySize++;
            serializedObject.ApplyModifiedProperties();
            SKCmd addedCmd = m_triggerNode.Commands[m_commandList.arraySize-1];
            addedCmd.Clear();
            EditorGUILayout.EndHorizontal();
            return;
        }
        EditorGUILayout.EndHorizontal();

        for(int i=0; i<m_triggerNode.Commands.Count; i++)
        {
            SKCmd cmd = m_triggerNode.Commands[i];
            SerializedProperty serializedCmd = m_commandList.GetArrayElementAtIndex(i);

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField("", GUILayout.Width(25.0f));
            cmd.Foldout = EditorGUILayout.Foldout(cmd.Foldout, "Cmd [" + i.ToString() + "]");
            if(!cmd.Foldout)
                EditorGUILayout.LabelField(((SKCmdId)cmd.ID).ToString() + " (\"" + cmd.strValue + "\", " + cmd.AuxStrValue + ", " + cmd.fValue + ", " + cmd.Delay + ")");
            if(GUILayout.Button("-", GUILayout.Width(SKGUI.kToggleWidth)))
            {
                m_commandList.DeleteArrayElementAtIndex(i);
                EditorGUILayout.EndHorizontal();
                serializedObject.ApplyModifiedProperties();
                return;
            }
            EditorGUILayout.EndHorizontal();

            if(cmd.Foldout)
            {
                string indent = "         ";
                cmd.ID = (int)((SKCmdId)EditorGUILayout.EnumPopup(new GUIContent(indent + "ID", "SKCmd.ID"), (SKCmdId)cmd.ID));

                if(cmd.ID == (int)SKCmdId.SetActive)
                {
                    cmd.fValue = EditorGUILayout.Toggle(new GUIContent(indent + "Active", "SKCmd.fValue"), cmd.fValue != 0.0f) ? 1.0f : 0.0f;
                }
                else if(cmd.ID == (int)SKCmdId.SetRun)
                {
                    cmd.fValue = EditorGUILayout.Toggle(new GUIContent(indent + "Run", "SKCmd.fValue"), cmd.fValue != 0.0f) ? 1.0f : 0.0f;
                }
                else if(cmd.ID == (int)SKCmdId.SetSpeed)
                {
                    cmd.iAuxValue1 = EditorGUILayout.Toggle(new GUIContent(indent + "   Inherit Speed", "SKCmd.iAuxValue1"), cmd.iAuxValue1 != 0) ? 1 : 0;
                    if(cmd.iAuxValue1 == 0)
                        cmd.fValue = EditorGUILayout.FloatField(new GUIContent(indent + "   Speed", "SKCmd.fValue"), cmd.fValue);

                    cmd.fAuxValue1 = EditorGUILayout.FloatField(new GUIContent(indent + "   Acceleration", "SKCmd.fAuxValue1"), cmd.fAuxValue1);
                    if(cmd.fAuxValue1 > 0.0f)
                        cmd.fAuxValue2 = EditorGUILayout.FloatField(new GUIContent(indent + "   Max Speed", "SKCmd.fAuxValue2"), cmd.fAuxValue2);
                    else if(cmd.fAuxValue1 < 0.0f)
                        cmd.fAuxValue2 = EditorGUILayout.FloatField(new GUIContent(indent + "   Min Speed", "SKCmd.fAuxValue2"), cmd.fAuxValue2);
                }
                else if(cmd.ID == (int)SKCmdId.SetAnimTrigger)
                {
                    cmd.strValue = EditorGUILayout.TextField(new GUIContent(indent + "Trigger", "SKCmd.strValue"), cmd.strValue);
                }
                else if(cmd.ID == (int)SKCmdId.ResetAnimTrigger)
                {
                    cmd.strValue = EditorGUILayout.TextField(new GUIContent(indent + "Trigger", "SKCmd.strValue"), cmd.strValue);
                }
                else if(cmd.ID == (int)SKCmdId.ExecuteFunction)
                {
                    cmd.strValue = EditorGUILayout.TextField(new GUIContent(indent + "Function", "SKCmd.strValue"), cmd.strValue);
                    cmd.AuxStrValue = EditorGUILayout.TextField(new GUIContent(indent + "String", "SKCmd.AuxStrValue"), cmd.AuxStrValue);
                    cmd.fValue = EditorGUILayout.FloatField(new GUIContent(indent + "Float", "SKCmd.fValue"), cmd.fValue);
                    cmd.GameObj = (GameObject)EditorGUILayout.ObjectField(new GUIContent(indent + "Game Object", "SKCmd.GameObj"), cmd.GameObj, typeof(GameObject), true);
                    cmd.Locator = (Transform)EditorGUILayout.ObjectField(new GUIContent(indent + "Locator", "SKCmd.Locator"), cmd.Locator, typeof(Transform), true);
                    cmd.Vec3 = EditorGUILayout.Vector3Field(new GUIContent(indent + "Vector3", "SKCmd.Vec3"), cmd.Vec3);
                    cmd.AudioSrc = (AudioSource)EditorGUILayout.ObjectField(new GUIContent(indent + "Audio Source", "SKCmd.AudioSrc"), cmd.AudioSrc, typeof(AudioSource), true);
                }
                else if(cmd.ID == (int)SKCmdId.PlaySound)
                {
                    cmd.strValue = EditorGUILayout.TextField(new GUIContent(indent + "Clip", "SKCmd.strValue"), cmd.strValue);
                }
                else if(cmd.ID == (int)SKCmdId.PlayAudioSource)
                {
                    cmd.AudioSrc = (AudioSource)EditorGUILayout.ObjectField(new GUIContent(indent + "Audio Source", "SKCmd.AudioSrc"), cmd.AudioSrc, typeof(AudioSource), true);
                }
                else if(cmd.ID == (int)SKCmdId.InstantiatePrefab)
                {
                    cmd.GameObj = (GameObject)EditorGUILayout.ObjectField(new GUIContent(indent + "Prefab", "SKCmd.GameObj"), cmd.GameObj, typeof(GameObject), true);
                    EditorGUILayout.BeginHorizontal();
                    for(int j=0; j<5; j++)
                        EditorGUILayout.Space();
                    cmd.iValue = EditorGUILayout.Popup(cmd.iValue, s_instantiateOptions);
                    cmd.Locator = (Transform)EditorGUILayout.ObjectField(cmd.Locator, typeof(Transform), true);
                    EditorGUILayout.EndHorizontal();
                    cmd.fValue = EditorGUILayout.FloatField(new GUIContent(indent + "Destroy After (0 == Don't destroy)", "SKCmd.fValue"), cmd.fValue);
                }
                else if(cmd.ID == (int)SKCmdId.ApplyMotionCurve)
                {
                    cmd.Curve = (SKAnimationCurveContainer)EditorGUILayout.ObjectField(new GUIContent(indent + "Curve Container", "SKCmd.Curve"), cmd.Curve, typeof(SKAnimationCurveContainer), true);
                    cmd.iValue = EditorGUILayout.Toggle(new GUIContent(indent + "Sync To Current Animation", "SKCmd.iValue"), cmd.iValue != 0) ? 1 : 0;
                }
                else if(cmd.ID == (int)SKCmdId.SetAnimStateTime)
                {
                    cmd.strValue = EditorGUILayout.TextField(new GUIContent(indent + "State Name", "SKCmd.strValue"), cmd.strValue);
                    cmd.fValue = EditorGUILayout.FloatField(new GUIContent(indent + "Normalized Time (0-1)", "SKCmd.fValue"), cmd.fValue);
                }

                cmd.Delay = EditorGUILayout.FloatField(new GUIContent(indent + "Delay", "SKCmd.Delay"), cmd.Delay);

                DisplayInspectorCommandReceivers(cmd, serializedCmd, indent);
                DisplayInspectorCommandOmitted(cmd, serializedCmd, indent);

                GUILayout.BeginHorizontal();
                GUILayout.Label("");
                GUILayout.EndHorizontal();
            }
        }

        serializedObject.ApplyModifiedProperties();
    }

    //--------------------------------------------------------------
    void DisplayInspectorCommandReceivers(SKCmd cmd, SerializedProperty serializedCmd, string indent)
    {
        SerializedProperty receiverList = serializedCmd.FindPropertyRelative("m_receivers");

        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("", GUILayout.Width(43.0f));
        cmd.ReceiversFoldout = EditorGUILayout.Foldout(cmd.ReceiversFoldout, "Receivers");
        if(GUILayout.Button("+", GUILayout.Width(SKGUI.kToggleWidth)))
        {
            receiverList.arraySize++;
            serializedObject.ApplyModifiedProperties();
            SKCmdReceiver receiver = cmd.Receivers[receiverList.arraySize-1];
            receiver.IdType = SKCmdReceiverIdType.kGameObject;
            EditorGUILayout.EndHorizontal();
            return;
        }   
        EditorGUILayout.EndHorizontal();
        if(cmd.ReceiversFoldout)
        {
            string subIndent = indent + "      ";
            EditorGUILayout.BeginHorizontal();
            cmd.SendToSelf = EditorGUILayout.Toggle(subIndent + "Self (Triggerer)", cmd.SendToSelf);
            EditorGUILayout.EndHorizontal();

            for(int i=0; i<cmd.Receivers.Count; i++)
            {
                SKCmdReceiver receiver = cmd.Receivers[i];

                EditorGUILayout.BeginHorizontal();
                receiver.IdType = (SKCmdReceiverIdType)EditorGUILayout.EnumPopup(subIndent + "Find By", receiver.IdType);
                if(receiver.IdType == SKCmdReceiverIdType.kName || receiver.IdType == SKCmdReceiverIdType.kTag)
                {
                    receiver.NameOrTag = EditorGUILayout.TextField(receiver.NameOrTag);//, GUILayout.Width(155.0f));
                }
                else if(receiver.IdType == SKCmdReceiverIdType.kGameObject)
                {
                    receiver.GameObj = (GameObject)EditorGUILayout.ObjectField(receiver.GameObj, typeof(GameObject), true);//, GUILayout.Width(155.0f));
                }
                //EditorGUILayout.LabelField("", GUILayout.Width(50.0f));
                if(GUILayout.Button("-", GUILayout.Width(SKGUI.kToggleWidth)))
                {
                    receiverList.DeleteArrayElementAtIndex(i);
                    i = 0;
                    EditorGUILayout.EndHorizontal();
                    continue;
                }
                EditorGUILayout.EndHorizontal();
            }

            serializedObject.ApplyModifiedProperties();
        }
    }

    //--------------------------------------------------------------
    void DisplayInspectorCommandOmitted(SKCmd cmd, SerializedProperty serializedCmd, string indent)
    {
        SerializedProperty omittedList = serializedCmd.FindPropertyRelative("m_omittedEvals");

        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("", GUILayout.Width(43.0f));
        cmd.OmittedEvalsFoldout = EditorGUILayout.Foldout(cmd.OmittedEvalsFoldout, "Omitters (Don't trigger)");
        if(GUILayout.Button("+", GUILayout.Width(SKGUI.kToggleWidth)))
        {
            omittedList.arraySize++;
            serializedObject.ApplyModifiedProperties();
            SKCmdReceiver omitted = cmd.OmittedEvals[omittedList.arraySize-1];
            omitted.IdType = SKCmdReceiverIdType.kGameObject;
            EditorGUILayout.EndHorizontal();
            return;
        }
        EditorGUILayout.EndHorizontal();
        if(cmd.OmittedEvalsFoldout)
        {
            string subIndent = indent + "      ";
            for(int i=0; i<cmd.OmittedEvals.Count; i++)
            {
                SKCmdReceiver omitted = cmd.OmittedEvals[i];

                EditorGUILayout.BeginHorizontal();
                omitted.IdType = (SKCmdReceiverIdType)EditorGUILayout.EnumPopup(subIndent + "Find By", omitted.IdType);
                if(omitted.IdType == SKCmdReceiverIdType.kName || omitted.IdType == SKCmdReceiverIdType.kTag)
                {
                    omitted.NameOrTag = EditorGUILayout.TextField(omitted.NameOrTag);//, GUILayout.Width(155.0f));
                }
                else if(omitted.IdType == SKCmdReceiverIdType.kGameObject)
                {
                    omitted.GameObj = (GameObject)EditorGUILayout.ObjectField(omitted.GameObj, typeof(GameObject), true);//, GUILayout.Width(155.0f));
                }
                //EditorGUILayout.LabelField("", GUILayout.Width(50.0f));
                if(GUILayout.Button("-", GUILayout.Width(SKGUI.kToggleWidth)))
                {
                    omittedList.DeleteArrayElementAtIndex(i);
                    i = 0;
                    EditorGUILayout.EndHorizontal();
                    continue;
                }
                EditorGUILayout.EndHorizontal();
            }

            serializedObject.ApplyModifiedProperties();
        }
    }

    //--------------------------------------------------------------
    public void OnSceneGUI()
    {
        // Hide transform tool
        Tools.hidden = true;
    }
}
