///
/// <summary>
/// SKMenu
/// </summary> 
/// 
/// Created by Ryan Graham on 10/12/15.
/// Copyright (c) 2015 Ryan Graham. All rights reserved.
///

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using UnityEditor;
using UnityEngine;
using System.Linq;
using Debug=UnityEngine.Debug;

namespace SplineKitPro
{
    public class SKMenu : EditorWindow
    {
        [MenuItem("GameObject/SplineKitPro/Create New Spline #&s", false, 10)]
        public static void CreateSplineGameObject_GOMenu(MenuCommand menuCommand)
        {
            CreateSplineGameObject(menuCommand);
        }

        [MenuItem("GameObject/SplineKitPro/Insert Point Before", false, 10)]
        public static void InsertSplinePointBefore_GOMenu(MenuCommand menuCommand)
        {
            InsertSplinePointBefore(menuCommand);
        }

        [MenuItem("GameObject/SplineKitPro/Insert Point After #&i", false, 10)]
        public static void InsertSplinePointAfter_GOMenu(MenuCommand menuCommand)
        {
            InsertSplinePointAfter(menuCommand);
        }

        //[MenuItem("SplineKitPro/Create New Spline #&s", false, 10)]
        //public static void CreateSplineGameObject_SKMenu(MenuCommand menuCommand)
        //{
        //    CreateSplineGameObject(menuCommand);
        //}

        //[MenuItem("SplineKitPro/Insert Point Before", false, 10)]
        //public static void InsertSplinePointBefore_SKMenu(MenuCommand menuCommand)
        //{
        //    InsertSplinePointBefore(menuCommand);
        //}

        //[MenuItem("SplineKitPro/Insert Point After #&i", false, 10)]
        //public static void InsertSplinePointAfter_SKMenu(MenuCommand menuCommand)
        //{
        //    InsertSplinePointAfter(menuCommand);
        //}

        public static void CreateSplineGameObject(MenuCommand menuCommand)
        {
            GameObject splineObj = SKSpline.CreateSpline("New Spline");

            // Ensure it gets reparented if this was a context click (otherwise does nothing)
            GameObjectUtility.SetParentAndAlign(splineObj, menuCommand.context as GameObject);
        }

        public static void InsertSplinePointBefore(MenuCommand menuCommand)
        {
            GameObject selectedObj = Selection.activeGameObject;
            if(selectedObj != null)
            {
                SKPointNode splinePoint = selectedObj.GetComponent<SKPointNode>();
                if(splinePoint != null)
                {
                    SKSpline spline = splinePoint.GetComponentInParent<SKSpline>();

                    //string newSplinePtName = GetUniqueSplinePointName(spline, splinePoint);
                    string newSplinePtName = splinePoint.name + "_";
                    int baseNum = 0;
                    string ptNum = splinePoint.name.Substring(splinePoint.name.Length-3, 3);
                    if(int.TryParse(ptNum, out baseNum))
                        newSplinePtName = splinePoint.name.Substring(splinePoint.name.Length-3) + (baseNum+1).ToString("D3");
                    SKPointNode newSplinePt = spline.InsertPointBefore(splinePoint, newSplinePtName);
                    if(newSplinePt != null)
                    {
                        // Ensure it gets reparented if this was a context click (otherwise does nothing)
                        //GameObjectUtility.SetParentAndAlign(newSplinePt, spline.gameObject);

                        // Register the creation in the undo system
                        Undo.RegisterCreatedObjectUndo(newSplinePt.gameObject, "Insert Before " + newSplinePt.name);
                        Selection.activeObject = newSplinePt;
                    }
                }
            }
        }

        public static void InsertSplinePointAfter(MenuCommand menuCommand)
        {
            GameObject selectedObj = Selection.activeGameObject;
            if(selectedObj != null)
            {
                SKPointNode splinePoint = selectedObj.GetComponent<SKPointNode>();
                if(splinePoint != null)
                {
                    SKSpline spline = splinePoint.GetComponentInParent<SKSpline>();

                    //string newSplinePtName = GetUniqueSplinePointName(spline, splinePoint);
                    string newSplinePtName = splinePoint.name + "_";
                    int baseNum = 0;
                    string ptNum = splinePoint.name.Substring(splinePoint.name.Length-3, 3);
                    if(int.TryParse(ptNum, out baseNum))
                        newSplinePtName = splinePoint.name.Substring(splinePoint.name.Length-3) + (baseNum+1).ToString("D3");
                    
                    SKPointNode newSplinePt = spline.InsertPointAfter(splinePoint, newSplinePtName);
                    if(newSplinePt != null)
                    {
                        // Ensure it gets reparented if this was a context click (otherwise does nothing)
                        //GameObjectUtility.SetParentAndAlign(newSplinePt, spline.gameObject);

                        // Register the creation in the undo system
                        Undo.RegisterCreatedObjectUndo(newSplinePt.gameObject, "Insert After " + newSplinePt.name);
                        Selection.activeObject = newSplinePt;
                    }
                }
            }
        }

        static string GetUniqueSplinePointName(SKSpline spline, SKPointNode basePt)
        {
            string newPtName = basePt.name + "_";

#if UNITY_3_5 || UNITY_4_0 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_4  || UNITY_4_5 || UNITY_4_6        
        //for(int i=0; i<spline.Count(); i++)
        //{
        //    SKPointNode splinePt = spline.GetControlPoint(i);
        //}
#else
            //newPtName.name = GameObjectUtility.GetUniqueNameForSibling(spline.transform, basePt.name);
#endif

            return newPtName;
        }

        [MenuItem("GameObject/SplineKitPro/Upgrade Splines")]
        public static void UpgradeSplines()
        {
            UnityEngine.Object[] resources = UnityEngine.Resources.LoadAll("");
            for(int i=0; i<resources.Length; i++)
            {
                GameObject go = resources[i] as GameObject;
                if(go != null)
                {
                    if(go.GetComponent<SKSpline>() != null)
                    {
                        GameObject instance = GameObject.Instantiate(go) as GameObject;
                        SKSpline[] splines = instance.GetComponentsInChildren<SKSpline>();
                        for(int j=0; j<splines.Length; j++)
                        {
                            if(!splines[j].IsCurrentVersion())
                            {
                                splines[j].SetVersionToCurrent();
                                UnityEngine.Debug.Log("Upgraded Spline: " + splines[j].name);
                            }
                        }

                        //SKEditorUtil.ApplyToPrefab(instance);
                        //EditorUtility.SetDirty(instance);
                        //GameObject.DestroyImmediate(instance);
                    }
                }
            }

            AssetDatabase.SaveAssets();
        }
    }
}
