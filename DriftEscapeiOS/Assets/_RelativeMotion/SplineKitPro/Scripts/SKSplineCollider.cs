///
/// SKSplineCollider.cs
///
/// Created by Ryan Graham on 06/27/16.
/// Copyright (c) 2016 Ryan Graham, all rights reserved.
///

#if false   // Not currently used

using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace SplineKitPro
{
    [ExecuteInEditMode]
    public class SKSplineCollider : MonoBehaviour
    {
#if UNITY_EDITOR
        //[SerializeField] bool m_renderCollision = false;
        [SerializeField] int m_numColliders = 100;
        
        class ColliderEntry
        {
            public float tVal;
            public BoxCollider collider;
        }
        List<ColliderEntry> m_colliders = new List<ColliderEntry>();

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

        [SerializeField] Color m_gizmoColor = Color.green;
        public Color GizmoDefaultColor
        {
            get { return m_gizmoColor; }
            set { m_gizmoColor = value; }
        }

        [SerializeField] Color m_gizmoColorSelectedMul = new Color(2.0f, 2.0f, 2.0f, 1.0f);
        public Color GizmoColorSelectedMul
        {
            get { return m_gizmoColorSelectedMul; }
            set { m_gizmoColorSelectedMul = value; }
        }

        //--------------------------------------------------------------
        void OnEnable()
        {
            InitSignals();
        }

        //--------------------------------------------------------------
        void OnDisable()
        {
            SKSplineSignalManager.Instance.UnsubscribeToSignal<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited);

            for(int i=0; i<m_colliders.Count; i++)
                GameObject.DestroyImmediate(m_colliders[i].collider.gameObject);
            m_colliders.Clear();
        }

        //--------------------------------------------------------------
        void InitSignals()
        {
            if(m_colliders.Count == 0)
                InitColliders();

            if(gameObject.activeInHierarchy && isActiveAndEnabled)
            {
                if(!SKSplineSignalManager.Instance.IsCallbackRegistered<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited))
                    SKSplineSignalManager.Instance.SubscribeToSignal<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited);
            }
        }

        ////--------------------------------------------------------------
        //[UnityEditor.Callbacks.DidReloadScripts]
        //public static void OnScriptsReloaded()
        //{
        //    InitSignals();
        //}

        //--------------------------------------------------------------
        void OnDrawGizmos()
        {
            InitSignals();
        }

        //--------------------------------------------------------------
        public void InitColliders()
        {
            for(int i=0; i<m_colliders.Count; i++)
                GameObject.DestroyImmediate(m_colliders[i].collider.gameObject);
            m_colliders.Clear();

            float t = 0.0f;
            float delta = Spline.Length / m_numColliders;
            float step = delta / Spline.Length;
            while(t < 1.0f)
            {
                AddCollider(t, delta);
                t += step;
            }

            AddCollider(1.0f, delta);
        }

        //--------------------------------------------------------------
        void AddCollider(float t, float size)
        {
            SKColliderRoot colliderRoot = Spline.GetComponentInChildren<SKColliderRoot>();
            if(colliderRoot == null)
            {
                GameObject colliderRootObj = new GameObject("Collider Root");
                Undo.RegisterCreatedObjectUndo(colliderRootObj, "Create " + colliderRootObj.name);
                colliderRootObj.transform.position = Vector3.zero;
                colliderRootObj.transform.rotation = Quaternion.identity;
                colliderRoot = colliderRootObj.AddComponent<SKColliderRoot>();
                colliderRootObj.transform.SetParent(Spline.transform);
            }

            GameObject colliderObj = new GameObject("Collider_" + m_colliders.Count.ToString("D3"));
            Undo.RegisterCreatedObjectUndo(colliderObj, "Create " + colliderObj.name);
            colliderObj.transform.position = Vector3.zero;
            colliderObj.transform.rotation = Quaternion.identity;
            colliderObj.transform.SetParent(colliderRoot.transform);

            Vector3 pos = Vector3.zero;
            if(Spline.Evaluate(t, ref pos))
            {
                Quaternion rot = Quaternion.identity;
                Spline.GetSplineRotation(t, ref rot);

                ColliderEntry entry = new ColliderEntry();
                entry.collider = colliderObj.gameObject.AddComponent<BoxCollider>();
                entry.collider.material = new PhysicMaterial();
                entry.collider.sharedMaterial = new PhysicMaterial();
                entry.collider.transform.position = pos;
                entry.collider.transform.rotation = rot;
                entry.collider.size = new Vector3(size, size, size);
                entry.tVal = t;
                m_colliders.Add(entry);
            }
        }

        //--------------------------------------------------------------
        void OnSplineEdited(SKSpline editedSpline)
        {
            for(int i=0; i<m_colliders.Count; i++)
            {
                Vector3 pos = Vector3.zero;
                if(Spline.Evaluate(m_colliders[i].tVal, ref pos))
                {
                    Quaternion rot = Quaternion.identity;
                    Spline.GetSplineRotation(m_colliders[i].tVal, ref rot);
                    m_colliders[i].collider.transform.position = pos;
                    m_colliders[i].collider.transform.rotation = rot;
                }
            }
        }
#endif
    }
}
#endif
