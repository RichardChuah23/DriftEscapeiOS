using UnityEngine;
using System.Collections.Generic;

namespace SplineKitPro
{
    [System.Serializable]
    public class SKLobPath
    {
        [SerializeField] GameObject m_startLocator;
        public GameObject StartLocator
        {
            get { return m_startLocator; }
            set { m_startLocator = value; }
        }

        [SerializeField] List<GameObject> m_endLocators = new List<GameObject>();
        public List<GameObject> EndLocators
        {
            get { return m_endLocators; }
            set { m_endLocators = value; }
        }

        [SerializeField] [Range(0.0f, 1.0f)] float m_normalizedMidPointDistance = 0.5f;
        public float NormalizedMidPointDistance
        {
            get { return m_normalizedMidPointDistance; }
            set { m_normalizedMidPointDistance = value; }
        }

        [SerializeField] float m_minMidPointHeight;
        public float MinMidPointHeight
        {
            get { return m_minMidPointHeight; }
            set { m_minMidPointHeight = value; }
        }

        [SerializeField] float m_maxMidPointHeight;
        public float MaxMidPointHeight
        {
            get { return m_maxMidPointHeight; }
            set { m_maxMidPointHeight = value; }
        }

        [SerializeField] Vector3 m_up = Vector3.up;
        public Vector3 Up
        {
            get { return m_up; }
            set { m_up = value; }
        }

        [SerializeField] GameObject m_hitPfxPrefab;
        public GameObject HitPfxPrefab
        {
            get { return m_hitPfxPrefab; }
            set { m_hitPfxPrefab = value; }
        }

        [SerializeField] float m_hitPFXDestroyDelay = 5.0f;
        public float HitPFXDestroyDelay
        {
            get { return m_hitPFXDestroyDelay; }
            set { m_hitPFXDestroyDelay = value; }
        }

#if UNITY_EDITOR 
        [SerializeField] bool m_foldout = true;
        public bool Foldout
        {
            get { return m_foldout; }
            set { m_foldout = value; }
        }
#endif

        //--------------------------------------------------------------
        public void Clear()
        {
            m_startLocator = null;
            m_endLocators = null;
            m_normalizedMidPointDistance = 0.5f;
            m_minMidPointHeight = 0.0f;
            m_maxMidPointHeight = 0.0f;
            m_up = Vector3.up;
            m_hitPfxPrefab = null;
            m_hitPFXDestroyDelay = 5.0f;
        }
    }
}