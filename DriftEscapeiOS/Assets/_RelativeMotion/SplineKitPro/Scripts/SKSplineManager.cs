///
/// SKSplineEditor.cs
/// 
/// Created by Ryan Graham on 07/17/16.
/// Copyright (c) 2016 Ryan Graham. All rights reserved.
///

#if UNITY_EDITOR

using UnityEditor;
using UnityEngine;
using System;
using System.Collections.Generic;
    
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0 || UNITY_5_1 || UNITY_5_2
#else
using UnityEditor.SceneManagement;
#endif

namespace SplineKitPro
{
    [InitializeOnLoad]
    public class SKSplineManager
    {
        static List<SKSpline> m_splineList = new List<SKSpline>();
        static string s_sceneName = "";

        //--------------------------------------------------------------
        static SKSplineManager()
        {
            RegisterEditorUpdateDelegate(OnEditorUpdate);
            RegisterSceneViewDelegate(OnSceneViewUpdate);
            RegisterUndoPerformedDelegate(OnUndoRedoPerformed);
        }

        //--------------------------------------------------------------
        static void OnEditorUpdate()
        {
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0 || UNITY_5_1 || UNITY_5_2 || UNITY_5_3_0 || UNITY_5_3_1 || UNITY_5_3_2 || UNITY_5_3_3 || UNITY_5_3_4
        if(s_sceneName != EditorApplication.currentScene)
#else
            if(s_sceneName != EditorSceneManager.GetActiveScene().name)
#endif
            {
                RegisterSceneSplines();
            }
        }

        //--------------------------------------------------------------
        public static void RegisterSpline(SKSpline spline)
        {
            if(!m_splineList.Contains(spline))
                m_splineList.Add(spline);
        }

        //--------------------------------------------------------------
        public static void UnregisterSpline(SKSpline spline)
        {
            if(m_splineList.Contains(spline))
                m_splineList.Remove(spline);
        }

        //--------------------------------------------------------------
        public static void RegisterSceneSplines()
        {
            m_splineList.Clear();

            SKSpline[] splines = Editor.FindObjectsOfType<SKSpline>();
            for(int i=0; i<splines.Length; i++)
                RegisterSpline(splines[i]);
        }

        //--------------------------------------------------------------
        public static void OnSceneViewUpdate(SceneView sceneView)
        {
            for(int i=0; i<m_splineList.Count; i++)
                UpdateSceneViewSpline(m_splineList[i]);
        }

        //--------------------------------------------------------------
        public static void UpdateSceneViewSpline(SKSpline spline)
        {
            if(spline != null)
            {
                GameObject selectedChild = SKRenderer.ChildSelectedInHierarchy(spline);
                if(!spline.SplineSelected && (selectedChild != null || spline.AlwaysRender))
                {
                    if(SKRenderer.RenderSplineHandles(spline, selectedChild))
                    {
                        spline.SplineEdited();

                        EditorUtility.SetDirty(spline);

                        if(!Application.isPlaying)
                        {
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0 || UNITY_5_1 || UNITY_5_2
                            //EditorApplication.MarkSceneDirty();
#else
                            EditorSceneManager.MarkSceneDirty(EditorSceneManager.GetActiveScene());
#endif
                        }
                    }
                }
            }
        }

        //--------------------------------------------------------------
        public static void OnUndoRedoPerformed()
        {
            for(int i=0; i<m_splineList.Count; i++)
            {
                // Branches will get recached by their parent spline, so don't recache if this is a branch
                if(m_splineList[i].GetComponentInParent<SKBranchNode>() == null)
                    m_splineList[i].Recache();
            }
        }

        //--------------------------------------------------------------
        public static bool IsSceneViewDelegateRegistered(SceneView.OnSceneFunc sceneViewDelegate)
        {
            if(SceneView.onSceneGUIDelegate != null)
            {
                Delegate[] delegateArray = SceneView.onSceneGUIDelegate.GetInvocationList();
                for(int i=0; i<delegateArray.Length; i++)
                {
                    if(delegateArray[i] == sceneViewDelegate)
                        return true;
                }
            }

            return false;
        }

        //--------------------------------------------------------------
        public static void RegisterSceneViewDelegate(SceneView.OnSceneFunc sceneViewDelegate)
        {
            if(!IsSceneViewDelegateRegistered(sceneViewDelegate))
                SceneView.onSceneGUIDelegate += sceneViewDelegate;
        }

        //--------------------------------------------------------------
        public static void UnregisterSceneViewDelegate(SceneView.OnSceneFunc sceneViewDelegate)
        {
            if(IsSceneViewDelegateRegistered(sceneViewDelegate))
                SceneView.onSceneGUIDelegate -= sceneViewDelegate;
        }

        //--------------------------------------------------------------
        public static bool IsUndoPerformedDelegateRegistered(Undo.UndoRedoCallback undoPerformedDelegate)
        {
            if(Undo.undoRedoPerformed != null)
            {
                Delegate[] delegateArray = Undo.undoRedoPerformed.GetInvocationList();
                for(int i=0; i<delegateArray.Length; i++)
                {
                    if(delegateArray[i] == undoPerformedDelegate)
                        return true;
                }
            }

            return false;
        }

        //--------------------------------------------------------------
        public static void RegisterUndoPerformedDelegate(Undo.UndoRedoCallback undoPerformedDelegate)
        {
            if(!IsUndoPerformedDelegateRegistered(undoPerformedDelegate))
                Undo.undoRedoPerformed += undoPerformedDelegate;
        }

        //--------------------------------------------------------------
        public static void UnregisterUndoPerformedDelegate(Undo.UndoRedoCallback undoPerformedDelegate)
        {
            if(IsUndoPerformedDelegateRegistered(undoPerformedDelegate))
                Undo.undoRedoPerformed -= undoPerformedDelegate;
        }

        //--------------------------------------------------------------
        public static bool IsEditorUpdateDelegateRegistered(EditorApplication.CallbackFunction callbackDelegate)
        {
            if(EditorApplication.update != null)
            {
                Delegate[] delegateArray = EditorApplication.update.GetInvocationList();
                for(int i=0; i<delegateArray.Length; i++)
                {
                    if(delegateArray[i] == callbackDelegate)
                        return true;
                }
            }

            return false;
        }

        //--------------------------------------------------------------
        public static void RegisterEditorUpdateDelegate(EditorApplication.CallbackFunction callbackDelegate)
        {
            if(!IsEditorUpdateDelegateRegistered(callbackDelegate))
                EditorApplication.update += callbackDelegate;
        }

        //--------------------------------------------------------------
        public static void UnregisterEditorUpdateDelegate(EditorApplication.CallbackFunction callbackDelegate)
        {
            if(IsEditorUpdateDelegateRegistered(callbackDelegate))
                EditorApplication.update -= callbackDelegate;
        }
    }
}
#endif
