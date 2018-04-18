///
/// SKLobGenerator.cs
///
/// Created by Ryan Graham on 06/20/16.
/// Copyright (c) 2016 Ryan Graham, all rights reserved.
///

using UnityEngine;
using System.Collections.Generic;

namespace SplineKitPro
{
    public class SKLobGenerator : MonoBehaviour
    {
        static GameObject s_splineRoot;

        [SerializeField] float m_initialVelocity;
        public float InitialVelocity
        {
            get { return m_initialVelocity; }
            set { m_initialVelocity = value; }
        }
        [SerializeField] float m_gravity = 0.0f;
        public float Gravity
        {
            get { return m_gravity; }
            set { m_gravity = value; }
        }
        [SerializeField] float m_delay = 0.0f;
        public float Delay
        {
            get { return m_delay; }
            set { m_delay = value; }
        }
        [SerializeField] bool m_destroyPathsOnComplete;
        public bool DestroyPathsOnComplete
        {
            get { return m_destroyPathsOnComplete; }
            set { m_destroyPathsOnComplete = value; }
        }
        [SerializeField] bool m_destroyAnimatorOnComplete;
        public bool DestroyAnimatorOnComplete
        {
            get { return m_destroyAnimatorOnComplete; }
            set { m_destroyAnimatorOnComplete = value; }
        }
        [SerializeField] List<SKLobPath> m_lobPaths = new List<SKLobPath>();
        public List<SKLobPath> LobPaths
        {
            get { return m_lobPaths; }
            set { m_lobPaths = value; }
        }

#if UNITY_EDITOR
        [SerializeField] bool m_foldout = true;
        public bool Foldout
        {
            get { return m_foldout; }
            set { m_foldout = value; }
        }
#endif

        Vector3 m_splineVelocity = Vector3.zero;
        public Vector3 SplineVelocity
        {
            get { return m_splineVelocity; }
            set { m_splineVelocity = value; }
        }

        class SKLobAnimator
        {
            public SKSplineAnimator SplineAnim;
            public int CurrLobPath = 0;
            public float DelayTimer = 0.0f;
            public bool Active = false;
        }
        List<SKLobAnimator> m_lobAnimators = new List<SKLobAnimator>();

        class SKGeneratedPath
        {
            SKSpline m_spline;
            public SKSpline Spline
            {
                get { return m_spline; }
                set { m_spline = value; }
            }
            SKLobPath m_lobPath;
            public SKLobPath LobPath
            {
                get { return m_lobPath; }
                set { m_lobPath = value; }
            }
            int m_endIndex;
            public int EndIndex
            {
                get { return m_endIndex; }
                set { m_endIndex = value; }
            }
            float m_midPointHeight;
            public float MidPointHeight
            {
                get { return m_midPointHeight; }
                set { m_midPointHeight = value; }
            }
            bool m_keepUpdatedX;
            public bool KeepUpdatedX
            {
                get { return m_keepUpdatedX; }
                set { m_keepUpdatedX = value; }
            }
            bool m_keepUpdatedY;
            public bool KeepUpdatedY
            {
                get { return m_keepUpdatedY; }
                set { m_keepUpdatedY = value; }
            }
            bool m_keepUpdatedZ;
            public bool KeepUpdatedZ
            {
                get { return m_keepUpdatedZ; }
                set { m_keepUpdatedZ = value; }
            }
        }
        List<SKGeneratedPath> m_generatedPaths = new List<SKGeneratedPath>();


        //--------------------------------------------------------------
        void Awake()
        {
            SKSplineSignalManager.Instance.SubscribeToSignal<SKSplineAnimator>(SKSplineSignalManager.kSplineAnimComplete, OnSplineAnimComplete);

            if(s_splineRoot == null)
            {
                s_splineRoot = new GameObject("SplineKitLobPaths");
                s_splineRoot.transform.position = Vector3.zero;
                s_splineRoot.transform.rotation = Quaternion.identity;
            }
        }

        //--------------------------------------------------------------
        public void Start()
        {
            //GenerateLob();

            SKSplineAnimator splineAnim = GetComponent<SKSplineAnimator>();
            if(splineAnim != null)
            {
                GenerateLob();
                EnableRender(false);
                Lob(splineAnim);
            }
        }

        //--------------------------------------------------------------
        void OnDestroy()
        {
            // Make sure all generated splines get cleaned up
            for(int i=m_generatedPaths.Count-1; i>=0; i--)
            {
                if(m_generatedPaths[i] != null && m_generatedPaths[i].Spline != null)
                {
                    GameObject.Destroy(m_generatedPaths[i].Spline.gameObject);
                    break;
                }
            }

            SKSplineSignalManager.Instance.UnsubscribeToSignal<SKSplineAnimator>(SKSplineSignalManager.kSplineAnimComplete, OnSplineAnimComplete);
        }

        //--------------------------------------------------------------
        void FixedUpdate()
        {
            UpdateLob();
            UpdateLobAnimators();
        }

        //--------------------------------------------------------------
        void UpdateLob()
        {
            for(int i=0; i<m_generatedPaths.Count; i++)
            {
                SKGeneratedPath generatedPath = m_generatedPaths[i];
                if(generatedPath.Spline == null)
                    continue;

                if(m_splineVelocity.magnitude > 0.0f)
                    generatedPath.Spline.transform.position += m_splineVelocity * UnityEngine.Time.deltaTime;

                if(generatedPath.KeepUpdatedX || generatedPath.KeepUpdatedY || generatedPath.KeepUpdatedZ)
                {
                    if(generatedPath.LobPath.StartLocator == null || generatedPath.LobPath.EndLocators[generatedPath.EndIndex] == null)
                        return;

                    Vector3 startPoint = generatedPath.LobPath.StartLocator.transform.position;
                    Vector3 endPoint = generatedPath.LobPath.EndLocators[generatedPath.EndIndex].transform.position;

                    // Calculate the mid point
                    Vector3 disp = endPoint - startPoint;
                    Vector3 normDisp = Vector3.Normalize(disp);
                    float dist = disp.magnitude * generatedPath.LobPath.NormalizedMidPointDistance;
                    Vector3 upOffset = generatedPath.LobPath.Up * generatedPath.MidPointHeight;
                    Vector3 midPoint = startPoint + (normDisp * dist) + upOffset;

                    Vector3 currStartPt = generatedPath.Spline.GetControlPoint(1).transform.position;
                    Vector3 currMidPt = generatedPath.Spline.GetControlPoint(2).transform.position;
                    Vector3 currEndPt = generatedPath.Spline.GetControlPoint(3).transform.position;
                    startPoint.Set(generatedPath.KeepUpdatedX ? startPoint.x : currStartPt.x, generatedPath.KeepUpdatedY ? startPoint.y : currStartPt.y, generatedPath.KeepUpdatedZ ? startPoint.z : currStartPt.z);
                    midPoint.Set(generatedPath.KeepUpdatedX ? midPoint.x : currMidPt.x, generatedPath.KeepUpdatedY ? midPoint.y : currMidPt.y, generatedPath.KeepUpdatedZ ? midPoint.z : currMidPt.z);
                    endPoint.Set(generatedPath.KeepUpdatedX ? endPoint.x : currEndPt.x, generatedPath.KeepUpdatedY ? endPoint.y : currEndPt.y, generatedPath.KeepUpdatedZ ? endPoint.z : currEndPt.z);
                    generatedPath.Spline.SetPoint(1, startPoint);
                    generatedPath.Spline.SetPoint(2, midPoint);
                    generatedPath.Spline.SetPoint(3, endPoint);
                }
            }
        }

        //--------------------------------------------------------------
        public void UpdateLobAnimators()
        {
            for(int i=m_lobAnimators.Count-1; i>=0; i--)
            {
                SKLobAnimator lobAnimator = m_lobAnimators[i];
                if(lobAnimator.DelayTimer > 0.0f)
                {
                    lobAnimator.DelayTimer -= Time.deltaTime;
                    if(lobAnimator.DelayTimer <= 0.0f)
                        ActivateLobAnim(lobAnimator);

                    return;
                }

                if(lobAnimator.Active && lobAnimator.CurrLobPath < m_lobPaths.Count)
                {
                    SKLobPath lobPath = m_lobPaths[lobAnimator.CurrLobPath];
                    if(lobPath != null)
                    {
                        if(lobAnimator.SplineAnim != null && lobAnimator.SplineAnim.Spline != null)
                        {
                            Vector3 tangent = Vector3.zero;
                            float lookAheadDist = lobAnimator.SplineAnim.CalculateLookAheadDist();
                            lobAnimator.SplineAnim.Spline.GetTangentAtT(lobAnimator.SplineAnim.tVal, ref tangent, lookAheadDist);
                            if(Vector3.Dot(lobPath.Up, tangent) > 0.0f)
                            {
                                lobAnimator.SplineAnim.Acceleration = -m_gravity;
                                lobAnimator.SplineAnim.MaxVelocity = 0.0f;
                            }
                            else
                            {
                                lobAnimator.SplineAnim.Acceleration = m_gravity;
                                lobAnimator.SplineAnim.MaxVelocity = m_initialVelocity * m_lobPaths.Count;
                            }
                        }
                    }
                }
            }
        }

        //--------------------------------------------------------------
        public void Lob(SKSplineAnimator splineAnim, float overrideDelay=-1.0f)
        {
            float delay = m_delay;
            if(overrideDelay != -1.0f)
                delay = overrideDelay;

            SKLobAnimator lobAnimator = new SKLobAnimator();
            m_lobAnimators.Add(lobAnimator);
            lobAnimator.SplineAnim = splineAnim;
            if(delay > 0.0f)
                lobAnimator.DelayTimer = delay;
            else
                ActivateLobAnim(lobAnimator);
        }

        //--------------------------------------------------------------
        void ActivateLobAnim(SKLobAnimator lobAnimator)
        {
            m_splineVelocity = Vector3.zero;
            
            lobAnimator.SplineAnim.SplineGameObject = m_generatedPaths[lobAnimator.CurrLobPath].Spline.gameObject;
            lobAnimator.SplineAnim.tVal = 0.0f;
            lobAnimator.SplineAnim.Acceleration = 0.0f;
            if(lobAnimator.CurrLobPath == 0)
                lobAnimator.SplineAnim.Velocity = m_initialVelocity;
            lobAnimator.SplineAnim.Run = true;
            lobAnimator.Active = true;
        }

        //--------------------------------------------------------------
        public void EnableRender(bool enable)
        {
            for(int i=0; i<m_generatedPaths.Count; i++)
            {
                SKInGameRenderer renderer = m_generatedPaths[i].Spline.gameObject.GetComponent<SKInGameRenderer>();
                LineRenderer lineRenderer = renderer.GetComponent<LineRenderer>();
                if(lineRenderer != null)
                {
                    lineRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
                    lineRenderer.enabled = enable;
                }
            }
        }

        //--------------------------------------------------------------
        void OnSplineAnimComplete(SKSplineAnimator splineAnim)
        {
            for(int i=m_lobAnimators.Count-1; i>=0; i--)
            {
                SKLobAnimator lobAnimator = m_lobAnimators[i];
                if(lobAnimator.SplineAnim == splineAnim)
                {
                    SKLobPath lobPath = m_lobPaths[lobAnimator.CurrLobPath];
                    if(lobPath.HitPfxPrefab != null)
                    {
                        GameObject hitPfx = GameObject.Instantiate(lobPath.HitPfxPrefab) as GameObject;
                        if(hitPfx != null)
                        {
                            hitPfx.transform.position = lobAnimator.SplineAnim.transform.position;
                            if(lobPath.HitPFXDestroyDelay > 0.0f)
                                GameObject.Destroy(hitPfx, lobPath.HitPFXDestroyDelay);
                        }
                    }

                    if(lobAnimator.CurrLobPath < m_lobPaths.Count-1)
                    {
                        lobAnimator.CurrLobPath++;
                        ActivateLobAnim(lobAnimator);
                    }
                    else
                    {
                        if(m_destroyPathsOnComplete)
                        {
                            for(int j=m_generatedPaths.Count-1; j>=0; j--)
                            {
                                if(m_generatedPaths[j].Spline != null)
                                    GameObject.Destroy(m_generatedPaths[j].Spline.gameObject);
                            }

                            m_generatedPaths.Clear();
                        }

                        if(m_destroyAnimatorOnComplete)
                            GameObject.Destroy(gameObject);

                        m_lobAnimators.Clear();

                        SendMessage("LobComplete", SendMessageOptions.DontRequireReceiver);
                    }
                }
            }
        }

        //--------------------------------------------------------------
        public void GenerateLob(bool keepUpdatedX=false, bool keepUpdatedY=false, bool keepUpdatedZ=false)
        {
            for(int i=0; i<m_lobPaths.Count; i++)
            {
                SKGeneratedPath generatedPath = new SKGeneratedPath();
                generatedPath.KeepUpdatedX = keepUpdatedX;
                generatedPath.KeepUpdatedY = keepUpdatedY;
                generatedPath.KeepUpdatedZ = keepUpdatedZ;
                generatedPath.LobPath = m_lobPaths[i];

                GameObject dynSplineObj = new GameObject("SKLobPath" + i.ToString("D3"));
                dynSplineObj.transform.SetParent(s_splineRoot.transform);
                generatedPath.Spline = dynSplineObj.AddComponent<SKSpline>();
                dynSplineObj.AddComponent<SKInGameRenderer>();

                generatedPath.Spline.SetVersionToCurrent();

                Vector3 startPoint = generatedPath.LobPath.StartLocator.transform.position;
                generatedPath.EndIndex = UnityEngine.Random.Range(0, generatedPath.LobPath.EndLocators.Count-1);
                Vector3 endPoint = generatedPath.LobPath.EndLocators[generatedPath.EndIndex].transform.position;

                // Calculate the mid point
                Vector3 disp = endPoint - startPoint;
                Vector3 normDisp = Vector3.Normalize(disp);
                float dist = disp.magnitude * generatedPath.LobPath.NormalizedMidPointDistance;
                generatedPath.MidPointHeight = Random.Range(generatedPath.LobPath.MinMidPointHeight, generatedPath.LobPath.MaxMidPointHeight);
                Vector3 upOffset = generatedPath.LobPath.Up * generatedPath.MidPointHeight;
                Vector3 midPoint = startPoint + (normDisp * dist) + upOffset;

                generatedPath.Spline.AddPoint(startPoint);
                generatedPath.Spline.AddPoint(midPoint);
                generatedPath.Spline.AddPoint(endPoint);

                m_generatedPaths.Add(generatedPath);
            }
        }
    }
}
