//
// SKRotationNodeEditor.cs
//
// Created by Ryan Graham on 01/17/2017.
// Copyright (c) 2017 Ryan Graham, all rights reserved.
//

using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;

using SplineKitPro;

[CustomEditor(typeof(SKRotationNode))]
//[CanEditMultipleObjects]
public class SKRotationNodeEditor : Editor
{
    static Texture2D s_redTex;
    static GUIStyle s_delButtonStyle;

    SerializedProperty m_tValProp;
    SerializedProperty m_directionProp;
    SerializedProperty m_disableBankingProp;
    SerializedProperty m_blendInTProp;
    SerializedProperty m_blendOutTProp;
    SerializedProperty m_rotationsProp;

    //--------------------------------------------------------------
    void OnEnable()
    {
        Tools.hidden = true;

        m_tValProp = serializedObject.FindProperty("m_tVal");
        m_directionProp = serializedObject.FindProperty("m_direction");
        m_disableBankingProp = serializedObject.FindProperty("m_disableBanking");
        m_blendInTProp = serializedObject.FindProperty("m_blendInT");
        m_blendOutTProp = serializedObject.FindProperty("m_blendOutT");
        m_rotationsProp = serializedObject.FindProperty("m_rotations");

        if(s_redTex == null)
        {
            s_redTex = new Texture2D(2, 2, TextureFormat.ARGB32, false);
            s_redTex.SetPixel(0, 0, Color.red);
            s_redTex.SetPixel(1, 0, Color.red);
            s_redTex.SetPixel(0, 1, Color.red);
            s_redTex.SetPixel(1, 1, Color.red);
            s_redTex.Apply();
        }
    }

    //--------------------------------------------------------------
    void OnDisable()
    {
        Tools.hidden = false;
    }

    //--------------------------------------------------------------
    public override void OnInspectorGUI()
    {
        if(s_delButtonStyle == null)
        {
            s_delButtonStyle = new GUIStyle(GUI.skin.button);
            s_delButtonStyle.normal.background = s_redTex;
        }
        
        serializedObject.Update();

        Undo.RecordObject(target, "Edit Rotation Blend Node");

        EditorGUILayout.PropertyField(m_directionProp);
        EditorGUILayout.PropertyField(m_disableBankingProp);

        SerializedProperty skFirstRotProp = m_rotationsProp.GetArrayElementAtIndex(0);
        float prevFirstTVal = skFirstRotProp.FindPropertyRelative("tVal").floatValue;

        SerializedProperty skLastRotProp = m_rotationsProp.GetArrayElementAtIndex(m_rotationsProp.arraySize-1);
        float prevLastTVal = skLastRotProp.FindPropertyRelative("tVal").floatValue;

        EditorGUILayout.Slider(m_blendInTProp, 0.0f, 1.0f);
        EditorGUILayout.Slider(m_blendOutTProp, 0.0f, 1.0f);

        EditorGUI.indentLevel++;
        for(int i=0; i<m_rotationsProp.arraySize; i++)
        {
            EditorGUILayout.BeginVertical("Box");
            EditorGUILayout.GetControlRect(true, 16f, EditorStyles.foldout);
            Rect foldRect = GUILayoutUtility.GetLastRect();

            SerializedProperty skRotProp = m_rotationsProp.GetArrayElementAtIndex(i);
            SerializedProperty skRotProp_foldout = skRotProp.FindPropertyRelative("FoldoutOpen");

            skRotProp_foldout.boolValue = EditorGUI.Foldout(foldRect, skRotProp_foldout.boolValue, "Rotation " + i, true);
            if(skRotProp_foldout.boolValue)
            {
                EditorGUI.indentLevel++;

                SerializedProperty skRotProp_rot = skRotProp.FindPropertyRelative("Rotation");
                Vector3 euler = skRotProp_rot.quaternionValue.eulerAngles;
                Vector3 newEuler = EditorGUILayout.Vector3Field("Rotation", euler);
                if(euler.magnitude != newEuler.magnitude)
                    skRotProp_rot.quaternionValue = Quaternion.Euler(newEuler);

                float minTVal = 0.0f;
                if(i > 0)
                {
                    SerializedProperty skRotPropPrev = m_rotationsProp.GetArrayElementAtIndex(i-1);
                    minTVal = skRotPropPrev.FindPropertyRelative("tVal").floatValue;
                }

                float maxTVal = 1.0f;
                if(i < m_rotationsProp.arraySize-1)
                {
                    SerializedProperty skRotPropNext = m_rotationsProp.GetArrayElementAtIndex(i+1);
                    maxTVal = skRotPropNext.FindPropertyRelative("tVal").floatValue;
                }

                SerializedProperty skRotProp_tVal = skRotProp.FindPropertyRelative("tVal");
                EditorGUILayout.Slider(skRotProp_tVal, 0.0f, 1.0f);
                if(skRotProp_tVal.floatValue < minTVal)
                    skRotProp_tVal.floatValue = minTVal;
                if(skRotProp_tVal.floatValue > maxTVal)
                    skRotProp_tVal.floatValue = maxTVal;

                if(i > 0)   // Must have at least 1 rotation
                {
                    if(GUILayout.Button("DEL", s_delButtonStyle))
                        m_rotationsProp.DeleteArrayElementAtIndex(i);
                }

                EditorGUI.indentLevel--;
            }
            EditorGUILayout.EndVertical();
        }
        EditorGUI.indentLevel--;

        if(m_blendInTProp.floatValue > prevFirstTVal)
            m_blendInTProp.floatValue = prevFirstTVal;

        if(m_blendOutTProp.floatValue < prevLastTVal)
            m_blendOutTProp.floatValue = prevLastTVal;

        if(GUILayout.Button("Add Rotation"))
        {
            Quaternion lastRot = skLastRotProp.FindPropertyRelative("Rotation").quaternionValue;

            m_rotationsProp.arraySize++;
            SerializedProperty skNewRotProp = m_rotationsProp.GetArrayElementAtIndex(m_rotationsProp.arraySize-1);
            SerializedProperty skNewRotProp_tVal = skNewRotProp.FindPropertyRelative("tVal");
            SerializedProperty skNewRotProp_rot = skLastRotProp.FindPropertyRelative("Rotation");

            skNewRotProp_tVal.floatValue = prevLastTVal;
            skNewRotProp_rot.quaternionValue = lastRot;
        }

        serializedObject.ApplyModifiedProperties();

        if(GUI.changed)
        {
            SKRotationNode rotNode = target as SKRotationNode;

            // Uncomment this to move the blend nodes with the first/last rotation nodes
            if(prevFirstTVal != rotNode.tVal)
            {
                //rotNode.Spline.ReorderRotationNodes();

                float delta = rotNode.tVal - prevFirstTVal;
                rotNode.BlendInT += delta;
            }
            if(prevLastTVal != rotNode.LastTVal)
            {
                float delta = rotNode.LastTVal - prevLastTVal;
                rotNode.BlendOutT += delta;
            }

            // Update the distance values
            rotNode.BlendInD = rotNode.BlendInT * rotNode.Spline.Length;
            rotNode.BlendOutD = rotNode.BlendOutT * rotNode.Spline.Length;
            for(int i=0; i<rotNode.Rotations.Count; i++)
                rotNode.SetTValue(i, rotNode.Rotations[i].tVal);

            rotNode.Spline.SplineEdited();

            SKEditorUtil.MarkObjectAndScenesDirty(target);

            // If the editor is paused, force the scene to be repainted
            if(EditorApplication.isPaused)
                SceneView.RepaintAll();
        }
    }
}
