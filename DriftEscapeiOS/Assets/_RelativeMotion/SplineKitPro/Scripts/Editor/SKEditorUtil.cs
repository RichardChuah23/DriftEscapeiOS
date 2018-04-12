//
// SKEditorUtil.cs
//
// Created by Ryan Graham on 11/24/15.
// Copyright (c) 2015 Ryan Graham. All rights reserved.
//

using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;

#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0 || UNITY_5_1 || UNITY_5_2
#else
using UnityEditor.SceneManagement;
#endif

namespace SplineKitPro
{
    public class SKEditorUtil
    {
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
        public static bool IsPlaymodeStateDelegateRegistered(EditorApplication.CallbackFunction callbackDelegate)
        {
            if(EditorApplication.playmodeStateChanged != null)
            {
                Delegate[] delegateArray = EditorApplication.playmodeStateChanged.GetInvocationList();
                for(int i=0; i<delegateArray.Length; i++)
                {
                    if(delegateArray[i] == callbackDelegate)
                        return true;
                }
            }

            return false;
        }

        //--------------------------------------------------------------
        public static void RegisterPlaymodeStateDelegate(EditorApplication.CallbackFunction callbackDelegate)
        {
            if(!IsPlaymodeStateDelegateRegistered(callbackDelegate))
                EditorApplication.playmodeStateChanged += callbackDelegate;
        }

        //--------------------------------------------------------------
        public static void UnregisterPlaymodeStateDelegate(EditorApplication.CallbackFunction callbackDelegate)
        {
            if(IsPlaymodeStateDelegateRegistered(callbackDelegate))
                EditorApplication.playmodeStateChanged -= callbackDelegate;
        }

        //--------------------------------------------------------------
        public static void MarkObjectAndScenesDirty(UnityEngine.Object obj)
        {
            EditorUtility.SetDirty(obj);

            if(!Application.isPlaying)
            {
#if UNITY_3_4 || UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9 || UNITY_5_0 || UNITY_5_1 || UNITY_5_2
                //EditorApplication.MarkSceneDirty();
#else
                EditorSceneManager.MarkSceneDirty(EditorSceneManager.GetActiveScene());
#endif
            }
        }

        //--------------------------------------------------------------
        public static void ApplyToPrefab(GameObject go)
        {
            if(go != null)
            {
                GameObject instanceRoot = PrefabUtility.FindRootGameObjectWithSameParentPrefab(go);
                UnityEngine.Object targetPrefab = PrefabUtility.GetPrefabParent(instanceRoot);

                PrefabUtility.ReplacePrefab(instanceRoot, targetPrefab, ReplacePrefabOptions.ConnectToPrefab);
            }
        }

        //--------------------------------------------------------------
        public static void ApplyToPrefab(GameObject go, GameObject prefab)
        {
            if(go != null && prefab != null)
                PrefabUtility.ReplacePrefab(go, prefab, ReplacePrefabOptions.Default);
        }
    }
}
