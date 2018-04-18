//
// SKPlane.cs
//
// Created by Ryan Graham on 11/30/15.
// Copyright (c) 2015 Ryan Graham. All rights reserved.
//

using UnityEngine;
using System.Collections.Generic;

namespace SplineKitPro
{
    public class SKPlane : MonoBehaviour
    {
        [SerializeField] bool m_editorShowSplinePlane = false;
        public bool ShowSplinePlane
        {
            get { return m_editorShowSplinePlane; }
            set { m_editorShowSplinePlane = value; }
        }

        [SerializeField] Color m_editorPlaneRenderColor = new Color(0.2f, 0.27f, 0.612f, 1.0f);
        public Color PlaneRenderColor
        {
            get { return m_editorPlaneRenderColor; }
            set { m_editorPlaneRenderColor = value; }
        }

        //--------------------------------------------------------------
        void Start()
        {
            gameObject.SetActive(false);
        }

        //--------------------------------------------------------------
        public void SetShowSplinePlane(bool showSplinePlane)
        {
            ShowSplinePlane = showSplinePlane;

            MeshRenderer renderer = GetComponent<MeshRenderer>();
            if(renderer)
            {
                if(ShowSplinePlane)
                {
                    Material[] matArray = new Material[1];
                    matArray[0] = new Material(Shader.Find("Unlit/Color"));
                    matArray[0].SetColor("_Color", m_editorPlaneRenderColor);
                    renderer.sharedMaterials = matArray;
                }
                else
                {
                    renderer.sharedMaterials = new Material[0];
                }
            }
        }
    }
}
