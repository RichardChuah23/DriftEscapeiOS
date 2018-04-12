using UnityEngine;
using System.Collections.Generic;

namespace SplineKitPro
{
    [RequireComponent(typeof(UnityEngine.LineRenderer))]
    public class SKInGameRenderer : MonoBehaviour
    {
        SKSpline m_spline;
        LineRenderer m_lineRenderer;
        public LineRenderer InGameLineRenderer
        {
            get { return m_lineRenderer; }
            set { m_lineRenderer = value; }
        }

        string m_shaderName = "Particles/Additive";
        public string ShaderName
        {
            get { return m_shaderName; }
            set 
            { 
                m_shaderName = value;
                if(m_lineRenderer != null)
                    m_lineRenderer.material = new Material(Shader.Find(m_shaderName));
            }
        }

        Color m_startColor = Color.green;
        public Color StartColor
        {
            get { return m_startColor; }
            set { m_startColor = value; }
        }

        Color m_endColor = Color.red;
        public Color EndColor
        {
            get { return m_endColor; }
            set { m_endColor = value; }
        }

        float m_startWidth = 0.05f;
        public float StartWidth
        {
            get { return m_startWidth; }
            set { m_startWidth = value; }
        }

        float m_endWidth = 0.1f;
        public float EndWidth
        {
            get { return m_endWidth; }
            set { m_endWidth = value; }
        }

        float m_startT = 0.0f;
        public float StartT
        {
            get { return m_startT; }
            set { m_startT = value; }
        }

        float m_endT = 1.0f;
        public float EndT
        {
            get { return m_endT; }
            set { m_endT = value; }
        }

        float m_step = 0.01f;
        public float Step
        {
            get { return m_step; }
            set { m_step = value; }
        }

        //--------------------------------------------------------------
        void Start()
        {
            m_spline = GetComponent<SKSpline>();
            m_lineRenderer = GetComponent<LineRenderer>();
            m_lineRenderer.material = new Material(Shader.Find(m_shaderName));
            m_lineRenderer.SetColors(m_startColor, m_endColor);
            m_lineRenderer.SetWidth(m_startWidth, m_endWidth);
        }

        //--------------------------------------------------------------
        void Update()
        {
            if(m_lineRenderer.enabled)
            {
                int interPointCount = (int)((m_endT - m_startT) / m_step);
                m_lineRenderer.SetVertexCount(interPointCount);

                float t = m_startT;
                for(int i=0; i<interPointCount; i++)
                {
                    Vector3 interPoint = Vector3.zero;
                    if(m_spline.Evaluate(t, ref interPoint))
                        m_lineRenderer.SetPosition(i, interPoint);
                    
                    t += m_step;
                }
            }
        }
    }
}
