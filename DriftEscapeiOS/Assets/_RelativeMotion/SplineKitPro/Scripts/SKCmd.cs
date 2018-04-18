//
// SKCmd.cs
//
// Created by Ryan Graham on 09/02/15.
// Copyright (c) 2015 Ryan Graham. All rights reserved.
//

using UnityEngine;
using System.Collections.Generic;

namespace SplineKitPro
{
    public enum SKCmdId : int
    {
        SetActive,      // Sets the game object active
        SetRun,         // Enables the evaluator
        SetSpeed,
        SetAnimTrigger,
        ResetAnimTrigger,
        PlaySound,
        PlayAudioSource,
        InstantiatePrefab,
        ExecuteFunction,
        SetAnimStateTime,
        ApplyMotionCurve,
    }

    public enum SKBranchCmdId : int
    {
        kDoNotBranch=0,
        kSpecifyBranch,
        kRandom,
        kRandomNoRepeat,
        kExecuteFunction,
    }

    public enum SKCmdReceiverIdType : int
    {
        kGameObject=0,
        kName,
        kTag,
    }

    [System.Serializable]
    public class SKCmdReceiver
    {
        [SerializeField] SKCmdReceiverIdType m_idType = SKCmdReceiverIdType.kGameObject;
        public SKCmdReceiverIdType IdType
        {
            get { return m_idType; }
            set { m_idType = value; }
        }

        [SerializeField] string m_nameOrTag = "";
        public string NameOrTag
        {
            get { return m_nameOrTag; }
            set { m_nameOrTag = value; }
        }

        [SerializeField] GameObject m_gameObj = null;
        public GameObject GameObj
        {
            get { return m_gameObj; }
            set { m_gameObj = value; }
        }
    }

    public class SKDelayedCmd 
    {
        public SKSplineAnimator evaluator;
        public SKCmd cmd; 
        public float delay; 
    }

    [System.Serializable]
    public class SKCmd
    {
        public SKCmd()
        {
        }

        public SKCmd(int id, float fValue=0.0f, string strValue="", GameObject go=null, float delay=0.0f)
        {
            m_id = id;
            m_fValue = fValue;
            m_strValue = strValue;
            m_gameObject = go;
            m_delay = delay;
        }

        public void Clear()
        {
            m_id = 0;
            m_fValue = 0.0f;
            m_strValue = "";
            m_gameObject = null;
            m_gameObject1 = null;
            m_gameObject2 = null;
            m_auxStrValue = "";
            m_audioSource = null;
            m_locator = null;
            m_vec3 = Vector3.zero;
            m_fAuxValue1 = 0.0f;
            m_fAuxValue2 = 0.0f;
            m_iValue = 0;
            m_iAuxValue1 = 0;
            m_iAuxValue2 = 0;
            m_delay = 0.0f;
            m_sendToSelf = true;
            m_receivers = new List<SKCmdReceiver>();
            m_omittedEvals = new List<SKCmdReceiver>();
        }

        [SerializeField] int m_id;
        public int ID
        {
            get { return m_id; }
            set { m_id = value; }
        }

        [SerializeField] float m_fValue;
        public float fValue
        {
            get { return m_fValue; }
            set { m_fValue = value; }
        }

        [SerializeField] string m_strValue;
        public string strValue
        {
            get { return m_strValue; }
            set { m_strValue = value; }
        }

        [SerializeField] GameObject m_gameObject;
        public GameObject GameObj
        {
            get { return m_gameObject; }
            set { m_gameObject = value; }
        }
		
		[SerializeField] GameObject m_gameObject1;
        public GameObject GameObj1
        {
            get { return m_gameObject1; }
            set { m_gameObject1 = value; }
        }

        [SerializeField] GameObject m_gameObject2;
        public GameObject GameObj2
        {
            get { return m_gameObject2; }
            set { m_gameObject2 = value; }
        }

        [SerializeField] Transform m_locator;
        public Transform Locator
        {
            get { return m_locator; }
            set { m_locator = value; }
        }

        [SerializeField] Vector3 m_vec3;
        public Vector3 Vec3
        {
            get { return m_vec3; }
            set { m_vec3 = value; }
        }

        [SerializeField] float m_delay = 0.0f;
        public float Delay
        {
            get { return m_delay; }
            set { m_delay = value; }
        }

        [SerializeField] string m_auxStrValue;
        public string AuxStrValue
        {
            get { return m_auxStrValue; }
            set { m_auxStrValue = value; }
        }

        [SerializeField] AudioSource m_audioSource;
        public AudioSource AudioSrc
        {
            get { return m_audioSource; }
            set { m_audioSource = value; }
        }

        [SerializeField] float m_fAuxValue1;
        public float fAuxValue1
        {
            get { return m_fAuxValue1; }
            set { m_fAuxValue1 = value; }
        }

        [SerializeField] float m_fAuxValue2;
        public float fAuxValue2
        {
            get { return m_fAuxValue2; }
            set { m_fAuxValue2 = value; }
        }

        [SerializeField] int m_iValue;
        public int iValue
        {
            get { return m_iValue; }
            set { m_iValue = value; }
        }

        [SerializeField] int m_iAuxValue1;
        public int iAuxValue1
        {
            get { return m_iAuxValue1; }
            set { m_iAuxValue1 = value; }
        }

        [SerializeField] int m_iAuxValue2;
        public int iAuxValue2
        {
            get { return m_iAuxValue2; }
            set { m_iAuxValue2 = value; }
        }

        [SerializeField] SKAnimationCurveContainer m_curve;
        public SKAnimationCurveContainer Curve
        {
            get { return m_curve; }
            set { m_curve = value; }
        }

        [SerializeField] bool m_sendToSelf = true;
        public bool SendToSelf
        {
            get { return m_sendToSelf; }
            set { m_sendToSelf = value; }
        }

        [SerializeField] List<SKCmdReceiver> m_receivers = new List<SKCmdReceiver>();
        public List<SKCmdReceiver> Receivers
        {
            get { return m_receivers; }
            set { m_receivers = value; }
        }

        [SerializeField] List<SKCmdReceiver> m_omittedEvals = new List<SKCmdReceiver>();
        public List<SKCmdReceiver> OmittedEvals
        {
            get { return m_omittedEvals; }
            set { m_omittedEvals = value; }
        }

        // Internal use
        float m_tVal = -1.0f;
        public float tVal
        {
            get { return m_tVal; }
            set { m_tVal = value; }
        }

        string m_returnString;
        public string ReturnString
        {
            get { return m_returnString; }
            set { m_returnString = value; }
        }

#if UNITY_EDITOR 
        [SerializeField] bool m_foldout = true;
        public bool Foldout
        {
            get { return m_foldout; }
            set { m_foldout = value; }
        }

        [SerializeField] bool m_receiversFoldout = false;
        public bool ReceiversFoldout
        {
            get { return m_receiversFoldout; }
            set { m_receiversFoldout = value; }
        }

        [SerializeField] bool m_omittedEvalsFoldout = false;
        public bool OmittedEvalsFoldout
        {
            get { return m_omittedEvalsFoldout; }
            set { m_omittedEvalsFoldout = value; }
        }
#endif
    }
}
