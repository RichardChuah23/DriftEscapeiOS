//
// SKSplineAnimatorEditor.cs
//
// Created by Ryan Graham on 09/02/15.
// Copyright (c) 2015 Ryan Graham all rights reserved.
//

using UnityEditor;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;

using SplineKitPro;

[CustomEditor(typeof(SKSplineAnimator))]
public class SKSplineAnimatorEditor : Editor
{
    SKSplineAnimator m_targetEval;
    EditorWindow m_splineInspector = null;

    //------------------------------------------------------
    void OnEnable()
    {
        m_targetEval = (SKSplineAnimator)target;

        if(!Application.isPlaying && m_targetEval.Spline != null)
            m_targetEval.Evaluate();
    }

    //------------------------------------------------------
    public void ShowSplineInspector()
    {
        if(m_splineInspector == null)
            m_splineInspector = SKTargetInspector.CreateInspector();

        SKTargetInspector.ShowInspector(m_splineInspector, m_targetEval.Spline.gameObject);
    }

    //------------------------------------------------------
    public override void OnInspectorGUI()
    {
        Undo.RecordObject(m_targetEval, "Edit Spline Animator");

        EditorGUI.indentLevel++;

        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f, EditorStyles.foldout);
        Rect rect = GUILayoutUtility.GetLastRect();

        m_targetEval.SplineFoldout = EditorGUI.Foldout(rect, m_targetEval.SplineFoldout, "Spline", true);
        if(m_targetEval.SplineFoldout)
        {
            EditorGUI.indentLevel++;

            EditorGUILayout.BeginHorizontal();
            m_targetEval.SplineGameObject = (GameObject)EditorGUILayout.ObjectField("Spline Game Object", m_targetEval.SplineGameObject, typeof(GameObject), true);
            if(m_targetEval.SplineGameObject != null)
            {
                if(GUILayout.Button("I", GUILayout.Width(SKGUI.kToggleWidth)))
                    ShowSplineInspector();
            }
            EditorGUILayout.EndHorizontal();

            if(GUILayout.Button("Orient Spline Up to My Current rotation"))
                m_targetEval.Spline.SplineUp = m_targetEval.transform.rotation * Vector3.up;

            EditorGUI.indentLevel--;
        }
        EditorGUILayout.EndVertical();


        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f, EditorStyles.foldout);
        rect = GUILayoutUtility.GetLastRect();
        m_targetEval.StartupFoldout = EditorGUI.Foldout(rect, m_targetEval.StartupFoldout, "Startup", true);
        if(m_targetEval.StartupFoldout)
        {
            EditorGUI.indentLevel++;
            if(Application.isPlaying)
                m_targetEval.Run = EditorGUILayout.Toggle("Play", m_targetEval.Run);
            else
                m_targetEval.Run = EditorGUILayout.Toggle("Auto Start", m_targetEval.Run);
            EditorGUI.indentLevel--;
        }
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f, EditorStyles.foldout);
        rect = GUILayoutUtility.GetLastRect();
        m_targetEval.SpeedFoldout = EditorGUI.Foldout(rect, m_targetEval.SpeedFoldout, "Speed", true);
        if(m_targetEval.SpeedFoldout)
        {
            EditorGUI.indentLevel++;
            m_targetEval.Velocity = EditorGUILayout.FloatField("Speed", m_targetEval.Velocity);
            m_targetEval.Acceleration = EditorGUILayout.FloatField("Acceleration", m_targetEval.Acceleration);

            if(m_targetEval.Acceleration > 0.0f)
                m_targetEval.MaxVelocity = EditorGUILayout.FloatField("Max Speed", m_targetEval.MaxVelocity);
            else if(m_targetEval.Acceleration < 0.0f)
                m_targetEval.MaxVelocity = EditorGUILayout.FloatField("Min Speed", m_targetEval.MaxVelocity);
            EditorGUI.indentLevel--;
        }
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f, EditorStyles.toggle);
        rect = GUILayoutUtility.GetLastRect();
        m_targetEval.SamplingFoldout = EditorGUI.Foldout(rect, m_targetEval.SamplingFoldout, "Adaptive Sampling", true);
        if(m_targetEval.SamplingFoldout)
        {
            EditorGUI.indentLevel++;
            m_targetEval.UseAdaptiveSampling = EditorGUILayout.Toggle("Use Adaptive Sampling", m_targetEval.UseAdaptiveSampling);
            if(m_targetEval.UseAdaptiveSampling)
            {
                EditorGUI.indentLevel++;
                m_targetEval.AdaptiveSubSampleScalar = EditorGUILayout.FloatField("Sub Sample Scalar", m_targetEval.AdaptiveSubSampleScalar);
                EditorGUI.indentLevel--;
            }
            EditorGUI.indentLevel--;
        }
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f, EditorStyles.foldout);
        rect = GUILayoutUtility.GetLastRect();
        m_targetEval.UpdateFoldout = EditorGUI.Foldout(rect, m_targetEval.UpdateFoldout, "Update", true);
        if(m_targetEval.UpdateFoldout)
        {
            EditorGUI.indentLevel++;
            m_targetEval.PositionUpdateType = (SKSplineAnimator.TransformUpdateType)EditorGUILayout.EnumPopup("Position", m_targetEval.PositionUpdateType);
            m_targetEval.RotationUpdateType = (SKSplineAnimator.TransformUpdateType)EditorGUILayout.EnumPopup("Rotation", m_targetEval.RotationUpdateType);
            m_targetEval.DeltaType = (SKSplineAnimator.TimeDeltaType)EditorGUILayout.EnumPopup("Time Step", m_targetEval.DeltaType);
            m_targetEval.UpdateMethod = (SKSplineAnimator.UpdateMethodType)EditorGUILayout.EnumPopup("Update Method", m_targetEval.UpdateMethod);
            EditorGUI.indentLevel--;
        }
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f, EditorStyles.toggle);
        rect = GUILayoutUtility.GetLastRect();
        m_targetEval.SplineRotationFoldout = EditorGUI.Foldout(rect, m_targetEval.SplineRotationFoldout, "Rotation", true);
        if(m_targetEval.SplineRotationFoldout)
        {
            EditorGUI.indentLevel++;
            m_targetEval.UseSplineRotation = EditorGUILayout.Toggle("Use Spline Rotation", m_targetEval.UseSplineRotation);
            if(m_targetEval.UseSplineRotation)
            {
                EditorGUI.indentLevel++;
                m_targetEval.ApplyPitch = EditorGUILayout.Toggle("Pitch", m_targetEval.ApplyPitch);
                m_targetEval.ApplyHeading = EditorGUILayout.Toggle("Heading", m_targetEval.ApplyHeading);
                m_targetEval.ApplyRoll = EditorGUILayout.Toggle("Roll", m_targetEval.ApplyRoll);
                if(m_targetEval.ApplyRoll)
                {
                    EditorGUI.indentLevel++;
                    m_targetEval.ApplyBanking = EditorGUILayout.Toggle("Apply Banking", m_targetEval.ApplyBanking);
                    if(m_targetEval.ApplyBanking)
                    {
                        EditorGUI.indentLevel++;
                        m_targetEval.BankLookAheadScalar = EditorGUILayout.FloatField("Bank Look Ahead Scalar", m_targetEval.BankLookAheadScalar);
                        m_targetEval.BankAmplifier = EditorGUILayout.FloatField("Bank Amplifier", m_targetEval.BankAmplifier);
                        m_targetEval.MaxBank = EditorGUILayout.FloatField("Max Bank", m_targetEval.MaxBank);
                        EditorGUI.indentLevel--;
                    }
                    EditorGUI.indentLevel--;
                }

                m_targetEval.SmoothRotation = EditorGUILayout.Toggle("Smooth Rotation", m_targetEval.SmoothRotation);
                if(m_targetEval.SmoothRotation)
                {
                    EditorGUILayout.LabelField("Smoother");
                    m_targetEval.RotationSmoother = EditorGUILayout.FloatField(m_targetEval.RotationSmoother);
                }
                EditorGUI.indentLevel--;
            }
            EditorGUI.indentLevel--;
        }
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f, EditorStyles.toggle);
        rect = GUILayoutUtility.GetLastRect();
        m_targetEval.ScaleFoldout = EditorGUI.Foldout(rect, m_targetEval.ScaleFoldout, "Scale", true);
        if(m_targetEval.ScaleFoldout)
        {
            EditorGUI.indentLevel++;
            EditorGUILayout.HelpBox("Use this if you need to override the base scale, otherwise the scale at startup will be used", MessageType.Info);
            m_targetEval.OverrideBaseScale = EditorGUILayout.Toggle("Override Scale", m_targetEval.OverrideBaseScale);
            if(m_targetEval.OverrideBaseScale)
            {
                EditorGUI.indentLevel++;
                m_targetEval.BaseLocalScale = EditorGUILayout.Vector3Field("Base Scale", m_targetEval.BaseLocalScale);
                EditorGUI.indentLevel--;
            }
            EditorGUI.indentLevel--;
        }
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f, EditorStyles.toggle);
        rect = GUILayoutUtility.GetLastRect();
        m_targetEval.LoopingFoldout = EditorGUI.Foldout(rect, m_targetEval.LoopingFoldout, "Looping", true);
        if(m_targetEval.LoopingFoldout)
        {
            EditorGUI.indentLevel++;
            m_targetEval.Loop = (SKSplineAnimator.LoopType)EditorGUILayout.EnumPopup("Looping", m_targetEval.Loop);
            if(m_targetEval.Loop == SKSplineAnimator.LoopType.None)
            {
                EditorGUI.indentLevel++;
                m_targetEval.ResetAtEnd = GUILayout.Toggle(m_targetEval.ResetAtEnd, " Reset at End");
                m_targetEval.DisableAtEnd = GUILayout.Toggle(m_targetEval.DisableAtEnd, " Disable at End");
                EditorGUI.indentLevel--;
            }
            EditorGUI.indentLevel--;
        }
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical("Box");
        EditorGUILayout.GetControlRect(true, 16.0f);
        rect = GUILayoutUtility.GetLastRect();
        if(!Application.isPlaying || !m_targetEval.Run || EditorApplication.isPaused || m_targetEval.Velocity == 0.0f)
            m_targetEval.tVal = EditorGUI.Slider(rect, "T value", m_targetEval.tVal, 0.0f, 1.0f);
        else
            EditorGUI.LabelField(rect, "T Value " +  m_targetEval.tVal);
        EditorGUILayout.EndVertical();

        EditorGUI.indentLevel--;

        if(GUI.changed)
        {
            if(m_targetEval.Spline != null && (!Application.isPlaying || !m_targetEval.Run || EditorApplication.isPaused))
                m_targetEval.Evaluate();

            SKEditorUtil.MarkObjectAndScenesDirty(target);

            // If the editor is paused, force the scene to be repainted
            if(EditorApplication.isPaused)
                SceneView.RepaintAll();
        }
    }
}
