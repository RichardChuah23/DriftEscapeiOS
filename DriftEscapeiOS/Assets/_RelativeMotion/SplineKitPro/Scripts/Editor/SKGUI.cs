//
// SKGUI.cs
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

namespace SplineKitPro
{
    public class SKGUI
    {
        public const float kStandardWidth = 159.0f;
        public const float kLabelWidth = 100.0f;
        public const float kFieldWidth = 75.0f;
        public const float kToggleWidth = 20.0f;
        public const float kColorWidth = 50.0f;
        public const float kButtonWidth = 200.0f;
        public const float kSmallButtonWidth = 160.0f;
        public const float kTabPixelWidth = 10.0f;//25.0f;

        public const float kIndent1 = 2.75f;
        public const float kIndent2 = 3.75f;
        public const float kIndent3 = 4.75f;
        public const float kIndent4 = 5.75f;

        //--------------------------------------------------------------
        public static void Tab(float numTabs=1.0f)
        {
            GUILayout.Space(kTabPixelWidth*numTabs);
        }

        //--------------------------------------------------------------
        public static void BlankLine()
        {
            GUILayout.BeginHorizontal();
            GUILayout.Label("");
            GUILayout.EndHorizontal();
        }

        //--------------------------------------------------------------
        public static void LineSeperator()
        {
            GUILayout.Box("", new GUILayoutOption[] { GUILayout.ExpandWidth(true), GUILayout.Height(1) });
        }

        //--------------------------------------------------------------
        public static void BeginTabbedHorizontal(float numTabs=1.0f)
        {
            GUILayout.BeginHorizontal();
            SKGUI.Tab(numTabs);
        }

        //--------------------------------------------------------------
        public static void EndTabbedHorizontal()
        {
            GUILayout.EndHorizontal();
        }

        //--------------------------------------------------------------
        public static void BeginTabbedLineHorizontal(float numTabs=1.0f)
        {
            SKGUI.TabbedLineSeperator(numTabs);
            GUILayout.BeginHorizontal();
            SKGUI.Tab(numTabs);
        }

        //--------------------------------------------------------------
        public static void EndTabbedLineHorizontal(float numTabs=1.0f)
        {
            GUILayout.EndHorizontal();
            SKGUI.TabbedLineSeperator(numTabs);
        }

        //--------------------------------------------------------------
        public static void BeginLineHorizontal()
        {
            SKGUI.LineSeperator();
            GUILayout.BeginHorizontal();
        }

        //--------------------------------------------------------------
        public static void EndLineHorizontal()
        {
            GUILayout.EndHorizontal();
            SKGUI.LineSeperator();
        }

        //--------------------------------------------------------------
        public static void TabbedLineSeperator(float numTabs=1.0f)
        {
            GUILayout.BeginHorizontal();
            Tab(numTabs);
            LineSeperator();
            GUILayout.EndHorizontal();
        }
    }
}
