//
// SKSplineSignalManager.cs
//
// Created by Ryan Graham on 04/28/16.
// Copyright (c) 2016 Ryan Graham, all rights reserved.
//

using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

namespace SplineKitPro
{
    public class SKSplineSignalManager : SKSignalManager_Internal
    {
        public const string kSplineEdited = "kSplineEdited";
        public const string kSplineAnimComplete = "kSplineAnimComplete";

        private static SKSignalManager_Internal s_instance;
        public static SKSignalManager_Internal Instance
        {
            get 
            {
                if(s_instance == null)
                    s_instance = new SKSplineSignalManager();

                return s_instance;
            }
        }

        //--------------------------------------------------------------
        public SKSplineSignalManager()
        {
            AddSignal<SKSpline>(kSplineEdited, new SKSignal_Internal<SKSpline>());
            AddSignal<SKSplineAnimator>(kSplineAnimComplete, new SKSignal_Internal<SKSplineAnimator>());
        }
    }
}
