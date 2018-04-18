//
// SKTargetInspector.cs
//
// Created by Ryan Graham on 09/02/15.
// Copyright (c) 2015 Ryan Graham. All rights reserved.
//

using UnityEditor;
using UnityEngine;
using System.Collections;
using System.Reflection;

public class SKTargetInspector 
{
    /// <summary>
    /// Creates a new inspector window instance and locks it to inspect the specified target
    /// </summary>
    //--------------------------------------------------------------
    public static EditorWindow CreateInspector()
    {
        // Get a reference to the `InspectorWindow` type object
        System.Type inspectorType = typeof(Editor).Assembly.GetType("UnityEditor.InspectorWindow");

        // Create an InspectorWindow instance
        EditorWindow inspectorInstance = ScriptableObject.CreateInstance(inspectorType) as EditorWindow;

        return inspectorInstance;
    }

    //--------------------------------------------------------------
    public static void ShowInspector(EditorWindow inspectorInstance, GameObject target)
    {
        System.Type inspectorType = typeof(Editor).Assembly.GetType("UnityEditor.InspectorWindow");

        // We display it - currently, it will inspect whatever gameObject is currently selected
        // So we need to find a way to let it inspect/aim at our target GO that we passed
        // For that we do a simple trick:
        // 1- Cache the current selected gameObject
        // 2- Set the current selection to our target GO (so now all inspectors are targeting it)
        // 3- Lock our created inspector to that target
        // 4- Fallback to our previous selection
        inspectorInstance.Show();

        // Cache previous selected gameObject
        var prevSelection = Selection.activeGameObject;

        // Set the selection to GO we want to inspect
        Selection.activeGameObject = target;

        // Get a ref to the "locked" property, which will lock the state of the inspector to the current inspected target
        var isLocked = inspectorType.GetProperty("isLocked", BindingFlags.Instance | BindingFlags.Public);

        // Invoke `isLocked` setter method passing 'true' to lock the inspector
        isLocked.GetSetMethod().Invoke(inspectorInstance, new object[] { true });

        // Finally revert back to the previous selection so that other inspectors continue to inspect whatever they were inspecting...
        Selection.activeGameObject = prevSelection;
    }
}
