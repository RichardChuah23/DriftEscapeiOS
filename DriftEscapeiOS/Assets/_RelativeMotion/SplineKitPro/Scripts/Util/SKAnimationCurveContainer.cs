//
// SKAnimationCurveContainer.cs
//
// Created by Ryan Graham on 03/14/16.
// Copyright (c) 2016 Ryan Graham, all rights reserved.
//

using UnityEngine;
using System.Collections.Generic;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace SplineKitPro
{
    public class SKAnimationCurveContainer : MonoBehaviour
    {
        [SerializeField] AnimationCurve m_animCurve;
        public AnimationCurve AnimCurve
        {
            get { return m_animCurve; }
            set 
            { 
                m_animCurve = value;
                if(m_animCurve != null && m_animCurve.length > 1)
                    m_duration = m_animCurve.keys[m_animCurve.keys.Length-1].time - m_animCurve.keys[0].time;
            }
        }

        [SerializeField] string m_clipName;
        public string ClipName
        {
            get { return m_clipName; }
            set { m_clipName = value; }
        }

        [SerializeField] float m_duration;
        public float Duration
        {
            get { return m_duration; }
            set { m_duration = value; }
        }

        [SerializeField] float m_speed = 1.0f;
        public float Speed
        {
            get { return m_speed; }
            set { m_speed = value; }
        }
    }
}