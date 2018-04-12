///
/// SKLobGeneratorEditor.cs
///
/// Created by Ryan Graham on 06/20/16.
/// Copyright (c) 2016 Ryan Graham, all rights reserved.
///

using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;

using SplineKitPro;

#pragma warning disable 0168 // variable declared but not used.

[CustomEditor(typeof(SKLobGenerator))]
public class SKLobGeneratorEditor : Editor
{
    SerializedProperty m_lobPaths;

    //--------------------------------------------------------------
    void OnEnable()
    {
        m_lobPaths = serializedObject.FindProperty("m_lobPaths");
    }

    //--------------------------------------------------------------
    public override void OnInspectorGUI()
    {
        SKLobGenerator lobGenerator = target as SKLobGenerator;
        Undo.RecordObject(lobGenerator, "Edit Lob Generator");

        serializedObject.Update();

        float tabSize = 0.25f;
        lobGenerator.DestroyPathsOnComplete = GUILayout.Toggle(lobGenerator.DestroyPathsOnComplete, "Destroy Paths on Complete");
        lobGenerator.DestroyAnimatorOnComplete = GUILayout.Toggle(lobGenerator.DestroyAnimatorOnComplete, "Destroy Animator on Complete");
        lobGenerator.InitialVelocity = EditorGUILayout.FloatField("Initial Velocity", lobGenerator.InitialVelocity);
        lobGenerator.Gravity = EditorGUILayout.FloatField("Simulate Gravity (0 == no gravity)", lobGenerator.Gravity);
        lobGenerator.Delay = EditorGUILayout.FloatField("Delay", lobGenerator.Delay);

        lobGenerator.Foldout = EditorGUILayout.Foldout(lobGenerator.Foldout, "Lob Paths");
        if(lobGenerator.Foldout)
        {
            tabSize = 0.5f;
            for(int i=0; i<lobGenerator.LobPaths.Count; i++)
            {
                SKLobPath lobPath = lobGenerator.LobPaths[i];
                SerializedProperty serializedLobPath = m_lobPaths.GetArrayElementAtIndex(i);

                SKGUI.BeginTabbedHorizontal(tabSize);
                lobPath.Foldout = EditorGUILayout.Foldout(lobPath.Foldout, "Lob Path " + (i+1).ToString("D3"));
                if(GUILayout.Button("-", GUILayout.Width(SKGUI.kToggleWidth)))
                {
                    m_lobPaths.DeleteArrayElementAtIndex(i);
                    SKGUI.EndTabbedHorizontal();
                    serializedObject.ApplyModifiedProperties();
                    return;
                }
                SKGUI.EndTabbedHorizontal();

                if(lobPath.Foldout)
                {
                    tabSize = 1.0f;
                    SKGUI.BeginTabbedHorizontal(tabSize);
                    lobPath.StartLocator = (GameObject)EditorGUILayout.ObjectField("Start Locator", lobPath.StartLocator, typeof(GameObject), true);
                    SKGUI.EndTabbedHorizontal();
                    SKGUI.BeginTabbedHorizontal(tabSize);
                    EditorGUILayout.PropertyField(serializedLobPath.FindPropertyRelative("m_endLocators"), true);
                    SKGUI.EndTabbedHorizontal();
                    SKGUI.BeginTabbedHorizontal(tabSize);
                    lobPath.NormalizedMidPointDistance = EditorGUILayout.FloatField("Normalized Mid Point Distance", lobPath.NormalizedMidPointDistance);
                    SKGUI.EndTabbedHorizontal();
                    SKGUI.BeginTabbedHorizontal(tabSize);
                    lobPath.MinMidPointHeight = EditorGUILayout.FloatField("Min Mid Point Height", lobPath.MinMidPointHeight);
                    SKGUI.EndTabbedHorizontal();
                    SKGUI.BeginTabbedHorizontal(tabSize);
                    lobPath.MaxMidPointHeight = EditorGUILayout.FloatField("Max Mid Point Height", lobPath.MaxMidPointHeight);
                    SKGUI.EndTabbedHorizontal();
                    SKGUI.BeginTabbedHorizontal(tabSize);
                    lobPath.Up = EditorGUILayout.Vector3Field("Up", lobPath.Up);
                    SKGUI.EndTabbedHorizontal();
                    SKGUI.BeginTabbedHorizontal(tabSize);
                    lobPath.HitPfxPrefab = (GameObject)EditorGUILayout.ObjectField("Hit PFX Prefab", lobPath.HitPfxPrefab, typeof(GameObject), true);
                    SKGUI.EndTabbedHorizontal();
                    SKGUI.BeginTabbedHorizontal(tabSize);
                    lobPath.HitPFXDestroyDelay = EditorGUILayout.FloatField("Destroy Hit PFX after", lobPath.HitPFXDestroyDelay);
                    SKGUI.EndTabbedHorizontal();
                }
            }

            GUILayout.BeginHorizontal();
            if(GUILayout.Button("Add Lob Path", GUILayout.Width(SKGUI.kButtonWidth*0.5f)))
            {
                m_lobPaths.arraySize++;
                serializedObject.ApplyModifiedProperties();
                SKLobPath lobPath = lobGenerator.LobPaths[m_lobPaths.arraySize-1];
                lobPath.Clear();
            }
            else
                serializedObject.ApplyModifiedProperties();
            GUILayout.EndHorizontal();
        }
    }
}
