//
// SKNodeRoot.cs
//
// Created by Ryan Graham on 06/22/16.
// Copyright (c) 2016 Ryan Graham, all rights reserved.
//

using UnityEngine;

namespace SplineKitPro
{
    public class SKNodeRoot : MonoBehaviour
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

        //--------------------------------------------------------------
        protected virtual void OnDestroy()
        {
            // We need to clean up our children so that they get properly removed from the cached nodes.
            //  Note: This may only be a problem on recompile with an existing spline...
            SKNode[] nodes = GetComponentsInChildren<SKNode>();
            for(int i=nodes.Length-1; i>=0; i--)
                GameObject.Destroy(nodes[i].gameObject);

#if UNITY_EDITOR
            if(Spline != null)
                Spline.Recache();
#endif
        }
    }
}
