///
/// SKSpline_Upgrade.cs
///
/// This partial class used to seperate the upgrade process from the actual use of the spline
///
/// Created by Ryan Graham on 02/29/16.
/// Copyright (c) 2016 Ryan Graham, all rights reserved.
///

using UnityEngine;
using System.Collections.Generic;

namespace SplineKitPro
{
    public partial class SKSpline
    {
        public const int kCurrentVersionMajor = 1;
        public const int kCurrentVersionMinor = 2;
        public const int kCurrentVersionRevision = 0;

        [SerializeField] int m_versionMajor;
        public int VersionMajor
        {
            get { return m_versionMajor; }
            set { m_versionMajor = value; }
        }

        [SerializeField] int m_versionMinor;
        public int VersionMinor
        {
            get { return m_versionMinor; }
            set { m_versionMinor = value; }
        }

        [SerializeField] int m_versionRevision;
        public int VersionRevision
        {
            get { return m_versionRevision; }
            set { m_versionRevision = value; }
        }

        //--------------------------------------------------------------
        public bool IsCurrentVersion()
        {
            return m_versionMajor == SKSpline.kCurrentVersionMajor && m_versionMinor == SKSpline.kCurrentVersionMinor && m_versionRevision == SKSpline.kCurrentVersionRevision;
        }

        //--------------------------------------------------------------
        public void SetVersion(int major, int minor, int revision)
        {
            m_versionMajor = major;
            m_versionMinor = minor;
            m_versionRevision = revision;
        }

        //--------------------------------------------------------------
        public void SetVersionToCurrent()
        {
            // Upgrade the spline and any branches it may have
            SKSpline[] allMySplines = gameObject.GetComponentsInChildren<SKSpline>();
            for(int i=0; i<allMySplines.Length; i++)
                allMySplines[i].SetVersion(kCurrentVersionMajor, kCurrentVersionMinor, kCurrentVersionRevision);
        }

#if UNITY_EDITOR
        //--------------------------------------------------------------
        public void UpgradeToVersion(int major, int minor, int revision)
        {
            if(major == 1 && minor == 2 && revision == 0)
            {
                // Upgrade the spline and any branches it may have
                SKSpline[] allMySplines = gameObject.GetComponentsInChildren<SKSpline>();
                for(int i=0; i<allMySplines.Length; i++)
                    allMySplines[i].Upgrade_1_2_0();
            }
        }

        //--------------------------------------------------------------
        void Upgrade_1_2_0()
        {
            for(int i=0; i<m_triggerNodes.Count; i++)
                m_triggerNodes[i].Distance = m_triggerNodes[i].tVal * m_triggerNodes[i].Spline.Length;

            for(int i=0; i<m_branchNodes.Count; i++)
                m_branchNodes[i].Distance = m_branchNodes[i].tVal * m_branchNodes[i].Spline.Length;

            for(int i=0; i<m_anchorNodes.Count; i++)
                m_anchorNodes[i].Distance = m_anchorNodes[i].tVal * m_anchorNodes[i].Spline.Length;

            // Need to upgrade rotation and scale blend nodes to the new chain blend nodes
            for(int i=m_rotationNodes.Count-1; i>=0; i--)
            {
                SKRotationNode rotationChainNode = AddRotationNode(m_rotationNodes[i].tVal) as SKRotationNode;
                rotationChainNode.BlendInT = m_rotationNodes[i].BlendInT;
                rotationChainNode.BlendOutT = m_rotationNodes[i].BlendOutT;
                rotationChainNode.BlendInD = m_rotationNodes[i].BlendInT * m_rotationNodes[i].Spline.Length;
                rotationChainNode.BlendOutD = m_rotationNodes[i].BlendOutT * m_rotationNodes[i].Spline.Length;
                rotationChainNode.Rotations[0].Rotation = m_rotationNodes[i].StartRotation;

                SKRotation skrot = new SKRotation();
                skrot.Rotation = m_rotationNodes[i].EndRotation;
                rotationChainNode.Rotations.Add(skrot);
                rotationChainNode.SetTValue(1, m_rotationNodes[i].EndT);

                GameObject.DestroyImmediate(m_rotationNodes[i].gameObject);
                m_rotationNodes.RemoveAt(i);
            }

            for(int i=m_scaleNodes.Count-1; i>=0; i--)
            {
                SKScaleNode scaleChainNode = AddScaleNode(m_scaleNodes[i].tVal) as SKScaleNode;
                scaleChainNode.BlendInT = m_scaleNodes[i].BlendInT;
                scaleChainNode.BlendOutT = m_scaleNodes[i].BlendOutT;
                scaleChainNode.BlendInD = m_scaleNodes[i].BlendInT * m_scaleNodes[i].Spline.Length;
                scaleChainNode.BlendOutD = m_scaleNodes[i].BlendOutT * m_scaleNodes[i].Spline.Length;
                scaleChainNode.Scales[0].LocalScale = m_scaleNodes[i].StartScale;

                SKScale skscale = new SKScale();
                skscale.LocalScale = m_scaleNodes[i].EndScale;
                scaleChainNode.Scales.Add(skscale);
                scaleChainNode.SetTValue(1, m_scaleNodes[i].EndT);
                
                GameObject.DestroyImmediate(m_scaleNodes[i].gameObject);
                m_scaleNodes.RemoveAt(i);
            }

            VersionMajor = kCurrentVersionMajor;
            VersionMinor = kCurrentVersionMinor;
            VersionRevision = kCurrentVersionRevision;
        }
#endif
    }
}
