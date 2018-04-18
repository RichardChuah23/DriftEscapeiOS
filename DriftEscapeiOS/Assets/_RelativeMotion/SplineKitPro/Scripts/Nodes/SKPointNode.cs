///
/// SKPointNode.cs
///
/// Created by Ryan Graham on 09/02/15.
/// Copyright (c) 2015 Ryan Graham. All rights reserved.
///

using UnityEngine;
using System.Collections.Generic;

namespace SplineKitPro
{
    [ExecuteInEditMode]
    public class SKPointNode : SKNode
    {
        [SerializeField] float m_length; // Distance from the last control point
        public float Length
        {
            get { return m_length; }
            set { m_length = value; }
        }

        public override float Distance  // Just another name for length
        {
            get { return m_length; }
            set { m_length = value; }
        }

        [SerializeField] GameObject m_weld; // The gameobject this point is welded to
        public GameObject Weld
        {
            get { return m_weld; }
            set { m_weld = value; }
        }

        [SerializeField] Vector3 m_rotationOffset = Vector3.zero;
        public Vector3 RotationOffset
        {
            get { return m_rotationOffset; }
            set { m_rotationOffset = value; }
        }

        [SerializeField] bool m_rotationOffsetAbsolute = false;
        public bool RotationOffsetAbsolute
        {
            get { return m_rotationOffsetAbsolute; }
            set { m_rotationOffsetAbsolute = value; }
        }

        public override float tVal
        {
            get 
            {
                if(Spline != null && Spline.Length > 0.0f)
                {
                    int ptIdx = Spline.IndexOf(this);
                    if(ptIdx == 0 || ptIdx == Spline.Count()-1)
                        return 0.0f;

                    if(ptIdx == 1)
                        return Spline.IsLooped ? 1.0f : 0.0f;
                
                    float accumLength = 0.0f;
                    //if(Spline.IsLooped)
                    {
                        for(int i=2; i<=ptIdx; i++) // Point 1 has the length from the last point if looped, otherwise it's 0, so don't add it!
                        {
                            SKPointNode splinePt = Spline.GetControlPoint(i);
                            accumLength += splinePt.Length;
                        }
                    }
                    return accumLength / Spline.Length;
                }
                else
                    return 0.0f;
            }

            set { }
        }

#if UNITY_EDITOR
        Vector3 m_prevPosition;
        Quaternion m_prevRotation;

        //--------------------------------------------------------------
        public override void OnSplineEdited(SKSpline editedSpline)
        {
            if(Spline == editedSpline)
            {
                InitSignals();

                if(m_weld != null)
                {
                    transform.position = m_weld.transform.position;
                    transform.rotation = m_weld.transform.rotation;
                    transform.localScale = m_weld.transform.localScale;
                }

                if(Spline.UsePointKeyframeRotation)
                {
                    if(!m_rotationOffsetAbsolute)
                    {
                        Quaternion rot = Quaternion.identity;
                        if(Spline.GetSplineRotation(tVal, ref rot))
                        {
                            Vector3 euler = rot.eulerAngles;
                            euler += m_rotationOffset;
                            transform.rotation = Quaternion.Euler(euler);
                        }
                    }
                    else
                        transform.rotation = Quaternion.Euler(m_rotationOffset);
                }
            }
        }

        //--------------------------------------------------------------
        public override void OnScriptsReloaded()
        {
            m_prevPosition = transform.position;
            m_prevRotation = transform.rotation;
            
            InitSignals();
        }

        //--------------------------------------------------------------
        public void SplinePointMoved(SKPointNode splinePt)
        {
            if(m_weld == splinePt)
            {
                transform.position = m_weld.transform.position;
                transform.rotation = m_weld.transform.rotation;
                transform.localScale = m_weld.transform.localScale;
            }
        }

        //--------------------------------------------------------------
        public void SetLength(float length)
        {
            m_length = length;
        }

        //--------------------------------------------------------------
        void Update()
        {
			if(!Application.isPlaying)
			{
				if(m_weld != null)
				{
					transform.position = m_weld.transform.position;
					transform.rotation = m_weld.transform.rotation;
					transform.localScale = m_weld.transform.localScale;
				}
				else if(transform.position != m_prevPosition || transform.rotation != m_prevRotation)
				{
					if(Spline.LockTransXYZ[0])
						transform.position.Set(m_prevPosition.x, transform.position.y, transform.position.z);
					if(Spline.LockTransXYZ[1])
						transform.position = new Vector3(transform.position.x, m_prevPosition.y, transform.position.z);
					if(Spline.LockTransXYZ[2])
						transform.position.Set(transform.position.x, transform.position.y, m_prevPosition.z);

					Spline.SplineEdited();

					m_prevPosition = transform.position;
					m_prevRotation = transform.rotation;
				}
			}
        }
#endif

        //--------------------------------------------------------------
        void Start()
        {
            InitSignals();

#if UNITY_EDITOR
            m_prevPosition = transform.position;
            m_prevRotation = transform.rotation;
#endif
        }

        //--------------------------------------------------------------
        void InitSignals()
        {
            if(gameObject.activeInHierarchy && isActiveAndEnabled)
            {
#if UNITY_EDITOR
                if(!SKSplineSignalManager.Instance.IsCallbackRegistered<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited))
                    SKSplineSignalManager.Instance.SubscribeToSignal<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited);
#endif
            }
        }

        //--------------------------------------------------------------
        void OnDestroy()
        {
#if UNITY_EDITOR
            if(Spline != null)
                Spline.RemovePoint(this, false);
            
            SKSplineSignalManager.Instance.UnsubscribeToSignal<SKSpline>(SKSplineSignalManager.kSplineEdited, OnSplineEdited);
#endif
        }
    }
}
