//
// SKAnimationCurveExtractor.cs
//
// Created by Ryan Graham on 03/14/16.
// Copyright (c) 2016 Ryan Graham, all rights reserved.
//

using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;

namespace SplineKitPro
{
    public class SKAnimationCurveExtractor : EditorWindow
    {
        AnimationClip s_animClip;
        string m_propertyPath;
        string m_propertyName;
        string m_clipName;
        float m_playbackSpeed = 1.0f;

        [MenuItem("Window/Animation Curve Extractor")]
        public static void ShowAnimationCurveExtractorWindow()
        {
            GetWindow(typeof(SKAnimationCurveExtractor));
        }

        //--------------------------------------------------------------
        public static void BlankLine()
        {
            GUILayout.BeginHorizontal();
            GUILayout.Label("");
            GUILayout.EndHorizontal();
        }

        //--------------------------------------------------------------
        void OnGUI()
        {
            s_animClip = (AnimationClip)EditorGUILayout.ObjectField(s_animClip, typeof(AnimationClip), true);
            m_clipName = s_animClip == null ? "" : s_animClip.name;
            m_propertyPath = EditorGUILayout.TextField("Property Path", m_propertyPath);
            m_propertyName = EditorGUILayout.TextField("Property Name", m_propertyName);
            //m_clipName = EditorGUILayout.TextField("State Name", m_clipName);
            m_playbackSpeed = EditorGUILayout.FloatField("Playback Speed", m_playbackSpeed);

            if(GUILayout.Button("List Properties"))
            {
                if(s_animClip != null)
                {
                    EditorCurveBinding[] bindings = AnimationUtility.GetCurveBindings(s_animClip);
                    for(int i=0; i<bindings.Length; i++)
                        UnityEngine.Debug.Log("PATH[" + i + "] " + bindings[i].path + " : PROPERTY[" + i + "] " + bindings[i].propertyName);
                }
            }

            if(GUILayout.Button("Extract"))
            {
                Extract();
            }
        }

        //--------------------------------------------------------------
        void Extract()
        {
            GameObject curveObj = null;
            EditorCurveBinding[] bindings = AnimationUtility.GetCurveBindings(s_animClip);
            for(int i=0; i<bindings.Length; i++)
            {
                if(m_propertyPath == bindings[i].path)
                {
                    if(m_propertyName == bindings[i].propertyName || "m_Local" + m_propertyName == bindings[i].propertyName)
                    {
                        Debug.Log("---- bindings[" + i + "] property name: " + bindings[i].propertyName);
                        curveObj = new GameObject("SKExtractedCurve");
                        SKAnimationCurveContainer curveContainer = curveObj.AddComponent<SKAnimationCurveContainer>();
                        curveContainer.AnimCurve = AnimationUtility.GetEditorCurve(s_animClip, bindings[i]);
                        curveContainer.ClipName = m_clipName;
                        curveContainer.Speed = m_playbackSpeed;
                        break;
                    }
                }
            }

            if(curveObj == null)
                Debug.LogError("Failed to find binding for curve!!");
        }
    }
}
