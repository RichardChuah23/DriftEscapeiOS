//
// SKNode.cs
//
// Created by Ryan Graham on 06/23/16.
// Copyright (c) 2016 Ryan Graham, all rights reserved.
//

using UnityEngine;

namespace SplineKitPro
{
    public abstract class SKNode : MonoBehaviour
    {
        protected SKSpline m_spline;
        public SKSpline Spline
        {
            get
            {
                if(m_spline == null)
                    m_spline = GetComponentInParent<SKSpline>();

                return m_spline;
            }
        }

        protected SKSpline m_weldedSpline;
        public SKSpline WeldedSpline
        {
            get { return m_weldedSpline; }
        }

        public abstract float tVal { get; set; }
        public abstract float Distance { get; set; }

#if UNITY_EDITOR
        public abstract void OnScriptsReloaded();
        public abstract void OnSplineEdited(SKSpline editedSpline);
#endif
    }
}
