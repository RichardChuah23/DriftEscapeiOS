//
// SKScaleNodeEditor.cs
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

[CustomEditor(typeof(SKScaleNode))]
//[CanEditMultipleObjects]
public class SKScaleNodeEditor : Editor
{
    static Texture2D s_redTex;
    static GUIStyle s_delButtonStyle;

    SerializedProperty m_tValProp;
    SerializedProperty m_directionProp;
    SerializedProperty m_blendInTProp;
    SerializedProperty m_blendOutTProp;
    SerializedProperty m_scalesProp;

    //--------------------------------------------------------------
    void OnEnable()
    {
        Tools.hidden = true;

        m_tValProp = serializedObject.FindProperty("m_tVal");
        m_directionProp = serializedObject.FindProperty("m_direction");
        m_blendInTProp = serializedObject.FindProperty("m_blendInT");
        m_blendOutTProp = serializedObject.FindProperty("m_blendOutT");
        m_scalesProp = serializedObject.FindProperty("m_scales");

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

        Undo.RecordObject(target, "Edit Scale Blend Node");

        EditorGUILayout.PropertyField(m_directionProp);

        SerializedProperty skFirstScaleProp = m_scalesProp.GetArrayElementAtIndex(0);
        float prevFirstTVal = skFirstScaleProp.FindPropertyRelative("tVal").floatValue;

        SerializedProperty skLastScaleProp = m_scalesProp.GetArrayElementAtIndex(m_scalesProp.arraySize-1);
        float prevLastTVal = skLastScaleProp.FindPropertyRelative("tVal").floatValue;

        EditorGUILayout.Slider(m_blendInTProp, 0.0f, 1.0f);
        EditorGUILayout.Slider(m_blendOutTProp, 0.0f, 1.0f);

        EditorGUI.indentLevel++;
        for(int i=0; i<m_scalesProp.arraySize; i++)
        {
            EditorGUILayout.BeginVertical("Box");
            EditorGUILayout.GetControlRect(true, 16f, EditorStyles.foldout);
            Rect foldRect = GUILayoutUtility.GetLastRect();

            SerializedProperty skScaleProp = m_scalesProp.GetArrayElementAtIndex(i);
            SerializedProperty skScaleProp_foldout = skScaleProp.FindPropertyRelative("FoldoutOpen");

            skScaleProp_foldout.boolValue = EditorGUI.Foldout(foldRect, skScaleProp_foldout.boolValue, "Scale " + i, true);
            if(skScaleProp_foldout.boolValue)
            {
                EditorGUI.indentLevel++;

                SerializedProperty skScaleProp_scale = skScaleProp.FindPropertyRelative("LocalScale");
                Vector3 localScale = skScaleProp_scale.vector3Value;
                Vector3 newLocalScale = EditorGUILayout.Vector3Field("Local Scale", localScale);
                if(localScale.magnitude != newLocalScale.magnitude)
                    skScaleProp_scale.vector3Value = newLocalScale;

                float minTVal = 0.0f;
                if(i > 0)
                {
                    SerializedProperty skScalePropPrev = m_scalesProp.GetArrayElementAtIndex(i-1);
                    minTVal = skScalePropPrev.FindPropertyRelative("tVal").floatValue;
                }

                float maxTVal = 1.0f;
                if(i < m_scalesProp.arraySize-1)
                {
                    SerializedProperty skScalePropNext = m_scalesProp.GetArrayElementAtIndex(i+1);
                    maxTVal = skScalePropNext.FindPropertyRelative("tVal").floatValue;
                }

                SerializedProperty skScaleProp_tVal = skScaleProp.FindPropertyRelative("tVal");
                EditorGUILayout.Slider(skScaleProp_tVal, 0.0f, 1.0f);
                if(skScaleProp_tVal.floatValue < minTVal)
                    skScaleProp_tVal.floatValue = minTVal;
                if(skScaleProp_tVal.floatValue > maxTVal)
                    skScaleProp_tVal.floatValue = maxTVal;

                if(i > 0)   // Must have at least 1 scale
                {
                    if(GUILayout.Button("DEL", s_delButtonStyle))
                        m_scalesProp.DeleteArrayElementAtIndex(i);
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

        if(GUILayout.Button("Add Scale"))
        {
            Vector3 lastScale = skLastScaleProp.FindPropertyRelative("LocalScale").vector3Value;

            m_scalesProp.arraySize++;
            SerializedProperty skNewScaleProp = m_scalesProp.GetArrayElementAtIndex(m_scalesProp.arraySize-1);
            SerializedProperty skNewScaleProp_tVal = skNewScaleProp.FindPropertyRelative("tVal");
            SerializedProperty skNewScaleProp_scale = skLastScaleProp.FindPropertyRelative("LocalScale");

            skNewScaleProp_tVal.floatValue = prevLastTVal;
            skNewScaleProp_scale.vector3Value = lastScale;
        }

        serializedObject.ApplyModifiedProperties();

        if(GUI.changed)
        {
            SKScaleNode scaleNode = target as SKScaleNode;

            // Uncomment this to move the blend nodes with the first/last scale nodes
            if(prevFirstTVal != scaleNode.tVal)
            {
                //scaleNode.Spline.ReorderScaleNodes();

                float delta = scaleNode.tVal - prevFirstTVal;
                scaleNode.BlendInT += delta;
            }
            if(prevLastTVal != scaleNode.LastTVal)
            {
                float delta = scaleNode.LastTVal - prevLastTVal;
                scaleNode.BlendOutT += delta;
            }

            // Update the distance values
            scaleNode.BlendInD = scaleNode.BlendInT * scaleNode.Spline.Length;
            scaleNode.BlendOutD = scaleNode.BlendOutT * scaleNode.Spline.Length;
            for(int i=0; i<scaleNode.Scales.Count; i++)
                scaleNode.SetTValue(i, scaleNode.Scales[i].tVal);

            scaleNode.Spline.SplineEdited();

            SKEditorUtil.MarkObjectAndScenesDirty(target);

            // If the editor is paused, force the scene to be repainted
            if(EditorApplication.isPaused)
                SceneView.RepaintAll();
        }
    }
}
