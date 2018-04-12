///
/// SKSpline_Edit.cs
///
/// This partial SKSpline class handles all parts only used by the editor. 
///
/// Created by Ryan Graham on 07/12/16.
/// Copyright (c) 2016 Ryan Graham, all rights reserved.
///

#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections.Generic;
using System.Linq;
using System;

namespace SplineKitPro
{
    public partial class SKSpline : MonoBehaviour
    {
        public const int kEditPlaneSibling = 0;
        public const int kBranchRootSibling = 1;
        public const int kTriggerRootSibling = 2;
        public const int kRotationRootSibling = 3;
        public const int kScaleRootSibling = 4;
        public const int kAnchorRootSibling = 5;
        public const int kControlPointsSibling = 6;

        #region EDITOR FIELDS
        [SerializeField] bool m_editorInfoFoldout = false;
        public bool InfoFoldout
        {
            get { return m_editorInfoFoldout; }
            set { m_editorInfoFoldout = value; }
        }

        [SerializeField] bool m_editorRenderFoldout = false;
        public bool RenderFoldout
        {
            get { return m_editorRenderFoldout; }
            set { m_editorRenderFoldout = value; }
        }

        [SerializeField] bool m_editorEditorFoldout = false;
        public bool EditorFoldout
        {
            get { return m_editorEditorFoldout; }
            set { m_editorEditorFoldout = value; }
        }

        [SerializeField] bool m_editorSetupFoldout = false;
        public bool SetupFoldout
        {
            get { return m_editorSetupFoldout; }
            set { m_editorSetupFoldout = value; }
        }

        public enum SplineEditMode { Standard, Sculpt };
        [SerializeField] SplineEditMode m_editorEditMode = SplineEditMode.Standard;
        public SplineEditMode EditMode
        {
            get { return m_editorEditMode; }
            set { m_editorEditMode = value; }
        }

        [SerializeField] bool m_editorAlwaysRender = true;
        public bool AlwaysRender
        {
            get { return m_editorAlwaysRender; }
            set { m_editorAlwaysRender = value; }
        }

        [SerializeField] Color m_editorSplineRenderColor = Color.white;
        public Color SplineRenderColor
        {
            get { return m_editorSplineRenderColor; }
            set { m_editorSplineRenderColor = value; }
        }

        [SerializeField] float m_editorSplineRenderResolution = 0.01f;
        public float SplineRenderResolution
        {
            get { return m_editorSplineRenderResolution; }
            set { m_editorSplineRenderResolution = value; }
        }

        //[SerializeField] bool m_editorVisualizeParameterization = false;
        //public bool VisualizeParameterization
        //{
        //    get { return m_editorVisualizeParameterization; }
        //    set { m_editorVisualizeParameterization = value; }
        //}

        //[SerializeField] Color m_editorParamRenderColor = Color.green;
        //public Color ParamRenderColor
        //{
        //    get { return m_editorParamRenderColor; }
        //    set { m_editorParamRenderColor = value; }
        //}

        [SerializeField] SKSpline.Plane m_editorFlattenPlane = SKSpline.Plane.X;
        public SKSpline.Plane FlattenPlane
        {
            get { return m_editorFlattenPlane; }
            set { m_editorFlattenPlane = value; }
        }

        [SerializeField] bool m_editorFlattenPlaneRecursive = false;
        public bool FlattenPlaneRecursive
        {
            get { return m_editorFlattenPlaneRecursive; }
            set { m_editorFlattenPlaneRecursive = value; }
        }

        [SerializeField] float m_editorFlattenHeight = 0.0f;
        public float FlattenHeight
        {
            get { return m_editorFlattenHeight; }
            set { m_editorFlattenHeight = value; }
        }

        [SerializeField] float m_editorPointHandleSizeScale = 0.5f;
        public float PointHandleSizeScale
        {
            get { return m_editorPointHandleSizeScale; }
            set { m_editorPointHandleSizeScale = value; }
        }

        [SerializeField] float m_editorRotHandleSizeScale = 0.5f;
        public float RotHandleSizeScale
        {
            get { return m_editorRotHandleSizeScale; }
            set { m_editorRotHandleSizeScale = value; }
        }

        [SerializeField] float m_editorScaleHandleSizeScale = 0.5f;
        public float ScaleHandleSizeScale
        {
            get { return m_editorScaleHandleSizeScale; }
            set { m_editorScaleHandleSizeScale = value; }
        }

        [SerializeField] float m_editorEventTVal = 0.0f;
        public float EventTVal
        {
            get { return m_editorEventTVal; }
            set { m_editorEventTVal = value; }
        }

        [SerializeField] bool m_editorAddNodeAutoSelect = true;
        public bool AddNodeAutoSelect
        {
            get { return m_editorAddNodeAutoSelect; }
            set { m_editorAddNodeAutoSelect = value; }
        }

        [SerializeField] bool[] m_editorLockTransXYZ = { false, false, false };
        public bool[] LockTransXYZ
        {
            get { return m_editorLockTransXYZ; }
            set { m_editorLockTransXYZ = value; }
        }

        [SerializeField] bool[] m_editorLockRotRPH = { false, false, false };
        public bool[] LockRotRPH
        {
            get { return m_editorLockRotRPH; }
            set { m_editorLockRotRPH = value; }
        }

        [SerializeField] bool[] m_editorLockScaleXYZ = { false, false, false };
        public bool[] LockScaleXYZ
        {
            get { return m_editorLockScaleXYZ; }
            set { m_editorLockScaleXYZ = value; }
        }

        public enum PointPlacementType : int { Collision=0, SplinePlane, Pivot };
        [SerializeField] PointPlacementType[] m_editorPointPlacement = { PointPlacementType.Collision, PointPlacementType.SplinePlane, PointPlacementType.Pivot };
        public PointPlacementType[] PointPlacement
        {
            get { return m_editorPointPlacement; }
            set { m_editorPointPlacement = value; }
        }

        // -----
        // -----  Non serialized fields
        // -----
        bool m_editorSplineSelected = false;
        public bool SplineSelected
        {
            get { return m_editorSplineSelected; }
            set { m_editorSplineSelected = value; }
        }
        #endregion

        //--------------------------------------------------------------
        public static GameObject CreateSpline(string name)
        {
            GameObject splineObj = new GameObject();
            splineObj.transform.position = Vector3.zero;
            splineObj.transform.rotation = Quaternion.identity;
            splineObj.name = name;
            SKSpline spline = splineObj.AddComponent<SKSpline>();
            spline.SetVersionToCurrent();
            SKSplineManager.RegisterSpline(spline);

            GameObject plane = GameObject.CreatePrimitive(PrimitiveType.Cube);
            plane.name = "Spline Editor Plane";
            Undo.RegisterCreatedObjectUndo(plane, "Create " + plane.name);
            plane.transform.SetParent(splineObj.transform);
            plane.transform.SetSiblingIndex(SKSpline.kEditPlaneSibling);
            plane.transform.localScale = new Vector3(1000000.0f, 0.001f, 1000000.0f);
            SKPlane planeComp = plane.AddComponent<SKPlane>();
            while(UnityEditorInternal.ComponentUtility.MoveComponentUp(planeComp)) ;
            planeComp.SetShowSplinePlane(planeComp.ShowSplinePlane);

            Undo.RegisterCreatedObjectUndo(splineObj, "Create " + splineObj.name);

            Selection.activeObject = splineObj;

            return splineObj;
        }

        //--------------------------------------------------------------
        public void SplineEdited(bool forceRecalcEndPoints=false, bool recordUndo=true)
        {
#if UNITY_EDITOR
            if(recordUndo)
                Undo.RecordObject(this, "Spline Edit");
#endif

            RecalcEndPoints(forceRecalcEndPoints);
            CalculateLengths();

            SKSplineSignalManager.Instance.EmitSignal(SKSplineSignalManager.kSplineEdited, this);
        }

        //--------------------------------------------------------------
        void UpdateSiblingOrder(int offset=0)
        {
            if(m_pointRoot != null)
                m_pointRoot.transform.SetSiblingIndex(kControlPointsSibling+offset);

            if(m_branchRoot != null)
                m_branchRoot.transform.SetSiblingIndex(kBranchRootSibling+offset);

            if(m_triggerRoot != null)
                m_triggerRoot.transform.SetSiblingIndex(kTriggerRootSibling+offset);

            if(m_rotationRoot != null)
                m_rotationRoot.transform.SetSiblingIndex(kRotationRootSibling+offset);

            if(m_scaleRoot != null)
                m_scaleRoot.transform.SetSiblingIndex(kScaleRootSibling+offset);

            if(m_anchorRoot != null)
                m_anchorRoot.transform.SetSiblingIndex(kAnchorRootSibling+offset);
        }

        //--------------------------------------------------------------
        public void Recache()
        {
            SKSpline[] allMySplines = gameObject.GetComponentsInChildren<SKSpline>();
            for(int i=0; i<allMySplines.Length; i++)
                allMySplines[i].RecacheNodes();
        }

        //--------------------------------------------------------------
        public void RecacheNodes()
        {
            // Control points
            m_pointRoot = null;
            m_ctrlPoints = new List<SKPointNode>();
            SKPointNodeRoot[] pointRoots = gameObject.GetComponentsInChildren<SKPointNodeRoot>();
            for(int i=0; i<pointRoots.Length; i++)
            {
                if(pointRoots[i].transform.parent == transform)
                {
                    m_pointRoot = pointRoots[i];
                    break;
                }
            }
            if(m_pointRoot != null)
            {
                RepairPointNodeSiblingIndex();

                SKPointNode[] hierPoints = m_pointRoot.GetComponentsInChildren<SKPointNode>();
                for(int i=0; i<hierPoints.Length; i++)
                    m_ctrlPoints.Add(hierPoints[i]);
            }

            // Branch nodes
            m_branchRoot = null;
            m_branchNodes = new List<SKBranchNode>();
            SKBranchNodeRoot[] branchRoots = gameObject.GetComponentsInChildren<SKBranchNodeRoot>();
            for(int i=0; i<branchRoots.Length; i++)
            {
                if(branchRoots[i].transform.parent == transform)
                {
                    m_branchRoot = branchRoots[i];
                    break;
                }
            }
            if(m_branchRoot != null)
            {
                SKBranchNode[] hierNodes = m_branchRoot.GetComponentsInChildren<SKBranchNode>();
                for(int i=0; i<hierNodes.Length; i++)
                    m_branchNodes.Add(hierNodes[i]);
            }

            // Trigger nodes
            m_triggerRoot = null;
            m_triggerNodes = new List<SKTriggerNode>();
            SKTriggerNodeRoot[] triggerRoots = gameObject.GetComponentsInChildren<SKTriggerNodeRoot>();
            for(int i=0; i<triggerRoots.Length; i++)
            {
                if(triggerRoots[i].transform.parent == transform)
                {
                    m_triggerRoot = triggerRoots[i];
                    break;
                }
            }
            if(m_triggerRoot != null)
            {
                SKTriggerNode[] hierNodes = m_triggerRoot.GetComponentsInChildren<SKTriggerNode>();
                for(int i=0; i<hierNodes.Length; i++)
                    m_triggerNodes.Add(hierNodes[i]);
            }

            // Rotation nodes
            m_rotationRoot = null;
            m_rotationChainNodes = new List<SKBlendChainNode>();
            SKRotationNodeRoot[] rotationRoots = gameObject.GetComponentsInChildren<SKRotationNodeRoot>();
            for(int i=0; i<rotationRoots.Length; i++)
            {
                if(rotationRoots[i].transform.parent == transform)
                {
                    m_rotationRoot = rotationRoots[i];
                    break;
                }
            }
            if(m_rotationRoot != null)
            {
                SKBlendChainNode[] hierNodes = m_rotationRoot.GetComponentsInChildren<SKBlendChainNode>();
                for(int i=0; i<hierNodes.Length; i++)
                    m_rotationChainNodes.Add(hierNodes[i]);
            }

            // Scale nodes
            m_scaleRoot = null;
            m_scaleChainNodes = new List<SKBlendChainNode>();
            SKScaleNodeRoot[] scaleRoots = gameObject.GetComponentsInChildren<SKScaleNodeRoot>();
            for(int i=0; i<scaleRoots.Length; i++)
            {
                if(scaleRoots[i].transform.parent == transform)
                {
                    m_scaleRoot = scaleRoots[i];
                    break;
                }
            }
            if(m_scaleRoot != null)
            {
                SKBlendChainNode[] hierNodes = m_scaleRoot.GetComponentsInChildren<SKBlendChainNode>();
                for(int i=0; i<hierNodes.Length; i++)
                    m_scaleChainNodes.Add(hierNodes[i]);
            }

            // Anchor nodes
            m_anchorRoot = null;
            m_anchorNodes = new List<SKAnchorNode>();
            SKAnchorNodeRoot[] anchorRoots = gameObject.GetComponentsInChildren<SKAnchorNodeRoot>();
            for(int i=0; i<anchorRoots.Length; i++)
            {
                if(anchorRoots[i].transform.parent == transform)
                {
                    m_anchorRoot = anchorRoots[i];
                    break;
                }
            }
            if(m_anchorRoot != null)
            {
                SKAnchorNode[] hierNodes = m_anchorRoot.GetComponentsInChildren<SKAnchorNode>();
                for(int i=0; i<hierNodes.Length; i++)
                    m_anchorNodes.Add(hierNodes[i]);
            }

            UpdatePointNames();
            SplineEdited();
        }

        //--------------------------------------------------------------
        void RepairPointNodeSiblingIndex()
        {
            SKPointNode[] hierPoints = m_pointRoot.GetComponentsInChildren<SKPointNode>();
            for(int i=0; i<hierPoints.Length; i++)
            {
                int index = -1;
                if(hierPoints[i].name == kStartPointName)
                {
                    index = 0;
                }
                else if(hierPoints[i].name == kEndPointName)
                {
                    index = hierPoints.Length-1;
                }
                else
                {
                    int idx;
                    string sidx = hierPoints[i].name.Substring(hierPoints[i].name.Length-3);
                    if(int.TryParse(sidx, out idx))
                        index = idx;
                }

                if(index != -1)
                    hierPoints[i].transform.SetSiblingIndex(index);
            }
        }

        //--------------------------------------------------------------
        public void OnPointGizmoMoved(SKPointNode pointScript)
        {
            RecalcEndPoints();
        }

        //--------------------------------------------------------------
        public void Clear()
        {
            if(m_pointRoot != null)
                GameObject.DestroyImmediate(m_pointRoot.gameObject);
            if(m_branchRoot != null)
                GameObject.DestroyImmediate(m_branchRoot.gameObject);
            if(m_triggerRoot != null)
                GameObject.DestroyImmediate(m_triggerRoot.gameObject);
            if(m_rotationRoot != null)
                GameObject.DestroyImmediate(m_rotationRoot.gameObject);
            if(m_scaleRoot != null)
                GameObject.DestroyImmediate(m_scaleRoot.gameObject);
            if(m_anchorRoot != null)
                GameObject.DestroyImmediate(m_anchorRoot.gameObject);

            m_ctrlPoints = new List<SKPointNode>();
            m_branchNodes = new List<SKBranchNode>();
            m_triggerNodes = new List<SKTriggerNode>();
            m_rotationChainNodes = new List<SKBlendChainNode>();
            m_scaleChainNodes = new List<SKBlendChainNode>();
            m_anchorNodes = new List<SKAnchorNode>();

            m_length = 0.0f;
        }

        [UnityEditor.Callbacks.DidReloadScripts]
        static void OnScriptsReloaded()
        {
            SKSpline[] splines = (SKSpline[])UnityEngine.Object.FindObjectsOfType(typeof(SKSpline));
            for(int i=0; i<splines.Length; i++)
            {
                for(int j=0; j<splines[i].Count(); j++)
                    splines[i].GetControlPoint(j).OnScriptsReloaded();

                for(int j=0; j<splines[i].BranchNodeCount(); j++)
                    splines[i].GetBranchNode(j).OnScriptsReloaded();

                for(int j=0; j<splines[i].TriggerNodeCount(); j++)
                    splines[i].GetTriggerNode(j).OnScriptsReloaded();

                for(int j=0; j<splines[i].RotationNodeCount(); j++)
                    splines[i].GetRotationNode(j).OnScriptsReloaded();

                for(int j=0; j<splines[i].ScaleNodeCount(); j++)
                    splines[i].GetScaleNode(j).OnScriptsReloaded();

                for(int j=0; j<splines[i].AnchorNodeCount(); j++)
                    splines[i].GetAnchorNode(j).OnScriptsReloaded();
            }

            SKSplineAnimator[] splineAnims = (SKSplineAnimator[])UnityEngine.Object.FindObjectsOfType(typeof(SKSplineAnimator));
            for(int i=0; i<splineAnims.Length; i++)
                splineAnims[i].InitSignals();
        }

        //--------------------------------------------------------------
        public SKBranchNode AddBranchNode(float tVal)
        {
            if(m_branchRoot == null)
            {
                GameObject branchRootObj = new GameObject("Branch Nodes");
                Undo.RegisterCreatedObjectUndo(branchRootObj, "Create " + branchRootObj.name);
                m_branchRoot = branchRootObj.AddComponent<SKBranchNodeRoot>();
                branchRootObj.transform.SetParent(transform);
                branchRootObj.transform.localPosition = Vector3.zero;
                branchRootObj.transform.localRotation = Quaternion.identity;
                UpdateSiblingOrder();
            }

            GameObject branchObj = new GameObject();
            branchObj.name = "BranchNode_" + (m_branchNodes.Count+1).ToString("D3");
            Undo.RegisterCreatedObjectUndo(branchObj, "Create " + branchObj.name);
            branchObj.transform.SetParent(m_branchRoot.transform);

            SKBranchNode branchNode = branchObj.AddComponent<SKBranchNode>();
            branchNode.SetNodeTValue(tVal);
            m_branchNodes.Add(branchNode);
            ReorderBranchNodes();

            SplineEdited();

            if(m_editorAddNodeAutoSelect)
                Selection.activeObject = branchNode;

            return branchNode;
        }

        //--------------------------------------------------------------
        public void RemoveBranchNodeAt(int i, bool destroy=true)
        {
            if(i < m_branchNodes.Count)
                RemoveBranchNode(m_branchNodes[i], destroy);
        }

        //--------------------------------------------------------------
        public void RemoveBranchNode(SKBranchNode branchNode, bool destroy=true)
        {
            if(!m_branchNodes.Remove(branchNode))
                Debug.LogWarning("Spline: Failed to find branch node " + branchNode.name + " for delete!!");

            if(destroy)
                GameObject.DestroyImmediate(branchNode.gameObject);

            SplineEdited();
        }

        //--------------------------------------------------------------
        public void ReorderBranchNodes()
        {
            if(m_branchNodes.Count > 0)
            {
                m_branchNodes.Sort(delegate(SKBranchNode a, SKBranchNode b) { return (a.tVal).CompareTo(b.tVal); });

                for(int i=0; i<m_branchNodes.Count; i++)
                {
                    m_branchNodes[i].name = "BranchNode_" + (i+1).ToString("D3");
                    m_branchNodes[i].transform.SetSiblingIndex(i);
                }
            }
        }

        //--------------------------------------------------------------
        public SKTriggerNode AddTriggerNode(float tVal)
        {
            if(m_triggerRoot == null)
            {
                GameObject triggerRootObj = new GameObject("Event Triggers");
                Undo.RegisterCreatedObjectUndo(triggerRootObj, "Create " + triggerRootObj.name);
                m_triggerRoot = triggerRootObj.AddComponent<SKTriggerNodeRoot>();
                triggerRootObj.transform.SetParent(transform);
                triggerRootObj.transform.localPosition = Vector3.zero;
                triggerRootObj.transform.localRotation = Quaternion.identity;
                UpdateSiblingOrder();
            }

            GameObject triggerObj = new GameObject();
            triggerObj.name = "Trigger_" + (m_triggerNodes.Count+1).ToString("D3");
            Undo.RegisterCreatedObjectUndo(triggerObj, "Create " + triggerObj.name);
            triggerObj.transform.SetParent(m_triggerRoot.transform);

            SKTriggerNode triggerNode = triggerObj.AddComponent<SKTriggerNode>();
            triggerNode.SetNodeTValue(tVal);
            m_triggerNodes.Add(triggerNode);
            ReorderTriggerNodes();

            SplineEdited();

            if(m_editorAddNodeAutoSelect)
                Selection.activeObject = triggerNode;

            return triggerNode;
        }

        //--------------------------------------------------------------
        public void RemoveTriggerNodeAt(int i, bool destroy=true)
        {
            if(i < m_triggerNodes.Count)
                RemoveTriggerNode(m_triggerNodes[i], destroy);
        }

        //--------------------------------------------------------------
        public void RemoveTriggerNode(SKTriggerNode triggerNode, bool destroy=true)
        {
            if(!m_triggerNodes.Remove(triggerNode))
                Debug.LogWarning("Spline: Failed to find trigger node " + triggerNode.name + " for delete!!");

            if(destroy)
                GameObject.DestroyImmediate(triggerNode.gameObject);

            SplineEdited();
        }

        //--------------------------------------------------------------
        public void ReorderTriggerNodes()
        {
            if(m_triggerNodes.Count > 0)
            {
                m_triggerNodes.Sort(delegate(SKTriggerNode a, SKTriggerNode b) { return (a.tVal).CompareTo(b.tVal); });

                for(int i=0; i<m_triggerNodes.Count; i++)
                {
                    m_triggerNodes[i].name = "Trigger_" + (i+1).ToString("D3");
                    m_triggerNodes[i].transform.SetSiblingIndex(i);
                }
            }
        }

        //--------------------------------------------------------------
        public SKBlendChainNode AddRotationNode(float tVal)
        {
            if(m_rotationRoot == null)
            {
                GameObject rootNodeObj = new GameObject("Rotation Nodes");
                Undo.RegisterCreatedObjectUndo(rootNodeObj, "Create " + rootNodeObj.name);
                m_rotationRoot = rootNodeObj.AddComponent<SKRotationNodeRoot>();
                rootNodeObj.transform.SetParent(transform);
                rootNodeObj.transform.localPosition = Vector3.zero;
                rootNodeObj.transform.localRotation = Quaternion.identity;
                UpdateSiblingOrder();
            }

            GameObject rotationNodeObj = new GameObject();
            rotationNodeObj.name = "RotationNode_" + (m_rotationChainNodes.Count+1).ToString("D3");
            Undo.RegisterCreatedObjectUndo(rotationNodeObj, "Create " + rotationNodeObj.name);
            rotationNodeObj.transform.SetParent(m_rotationRoot.transform);

            SKRotationNode rotationNode = rotationNodeObj.AddComponent<SKRotationNode>();
            Vector3 tangent = Vector3.zero;
            if(GetTangentAtT(tVal, ref tangent))
                rotationNode.transform.rotation = Quaternion.LookRotation(tangent, m_splineUp);

            SKRotation skrot = new SKRotation();
            skrot.Rotation = rotationNode.transform.rotation;
            rotationNode.Rotations.Add(skrot);
            rotationNode.SetNodeTValue(tVal);

            m_rotationChainNodes.Add(rotationNode);
            ReorderRotationNodes();

            SplineEdited();

            if(m_editorAddNodeAutoSelect)
                Selection.activeObject = rotationNode;

            return rotationNode;
        }

        //--------------------------------------------------------------
        public void RemoveRotationNodeAt(int i, bool destroy=true)
        {
            if(i < m_rotationChainNodes.Count)
                RemoveRotationNode(m_rotationChainNodes[i], destroy);
        }

        //--------------------------------------------------------------
        public void RemoveRotationNode(SKBlendChainNode rotationNode, bool destroy=true)
        {
            if(!m_rotationChainNodes.Remove(rotationNode))
                Debug.LogWarning("Spline: Failed to find rotation node " + rotationNode.name + " for delete!!");

            if(destroy)
                GameObject.DestroyImmediate(rotationNode.gameObject);

            SplineEdited();
        }

        //--------------------------------------------------------------
        public void ReorderRotationNodes()
        {
            if(m_rotationChainNodes.Count > 0)
            {
                m_rotationChainNodes.Sort(delegate(SKBlendChainNode a, SKBlendChainNode b) { return (a.tVal).CompareTo(b.tVal); });

                for(int i=0; i<m_rotationChainNodes.Count; i++)
                {
                    m_rotationChainNodes[i].name = "RotationNode_" + (i+1).ToString("D3");
                    m_rotationChainNodes[i].transform.SetSiblingIndex(i);
                }
            }
        }

        //--------------------------------------------------------------
        public SKBlendChainNode AddScaleNode(float tVal)
        {
            if(m_scaleRoot == null)
            {
                GameObject rootNodeObj = new GameObject("Scale Nodes");
                Undo.RegisterCreatedObjectUndo(rootNodeObj, "Create " + rootNodeObj.name);
                m_scaleRoot = rootNodeObj.AddComponent<SKScaleNodeRoot>();
                rootNodeObj.transform.SetParent(transform);
                rootNodeObj.transform.localPosition = Vector3.zero;
                rootNodeObj.transform.localRotation = Quaternion.identity;
                UpdateSiblingOrder();
            }

            GameObject scaleNodeObj = new GameObject();
            scaleNodeObj.name = "ScaleNode_" + (m_scaleChainNodes.Count+1).ToString("D3");
            Undo.RegisterCreatedObjectUndo(scaleNodeObj, "Create " + scaleNodeObj.name);
            scaleNodeObj.transform.SetParent(m_scaleRoot.transform);

            SKScaleNode scaleNode = scaleNodeObj.AddComponent<SKScaleNode>();
            SKScale skscale = new SKScale();
            skscale.LocalScale = Vector3.one;
            scaleNode.Scales.Add(skscale);
            scaleNode.SetNodeTValue(tVal);
            m_scaleChainNodes.Add(scaleNode);
            ReorderScaleNodes();

            SplineEdited();

            if(m_editorAddNodeAutoSelect)
                Selection.activeObject = scaleNode;

            return scaleNode;
        }

        //--------------------------------------------------------------
        public void RemoveScaleNodeAt(int i, bool destroy=true)
        {
            if(i < m_scaleChainNodes.Count)
                RemoveScaleNode(m_scaleChainNodes[i], destroy);
        }

        //--------------------------------------------------------------
        public void RemoveScaleNode(SKBlendChainNode scaleNode, bool destroy=true)
        {
            if(!m_scaleChainNodes.Remove(scaleNode))
                Debug.LogWarning("Spline: Failed to find scale node " + scaleNode.name + " for delete!!");

            if(destroy)
                GameObject.DestroyImmediate(scaleNode.gameObject);

            SplineEdited();
        }

        //--------------------------------------------------------------
        public void ReorderScaleNodes()
        {
            if(m_scaleChainNodes.Count > 0)
            {
                m_scaleChainNodes.Sort(delegate(SKBlendChainNode a, SKBlendChainNode b) { return (a.tVal).CompareTo(b.tVal); });

                for(int i=0; i<m_scaleChainNodes.Count; i++)
                {
                    m_scaleChainNodes[i].name = "ScaleNode_" + (i+1).ToString("D3");
                    m_scaleChainNodes[i].transform.SetSiblingIndex(i);
                }
            }
        }

        //--------------------------------------------------------------
        public SKAnchorNode AddAnchorNode(float tVal)
        {
            if(m_anchorRoot == null)
            {
                GameObject anchorRootObj = new GameObject("Anchor Nodes");
                Undo.RegisterCreatedObjectUndo(anchorRootObj, "Create " + anchorRootObj.name);
                m_anchorRoot = anchorRootObj.AddComponent<SKAnchorNodeRoot>();
                anchorRootObj.transform.SetParent(transform);
                anchorRootObj.transform.localPosition = Vector3.zero;
                anchorRootObj.transform.localRotation = Quaternion.identity;
                UpdateSiblingOrder();
            }

            GameObject anchorObj = new GameObject();
            anchorObj.name = "AnchorNode_" + (m_anchorNodes.Count+1).ToString("D3");
            Undo.RegisterCreatedObjectUndo(anchorObj, "Create " + anchorObj.name);
            anchorObj.transform.SetParent(m_anchorRoot.transform);

            SKAnchorNode anchorNode = anchorObj.AddComponent<SKAnchorNode>();
            anchorNode.SetNodeTValue(tVal);
            m_anchorNodes.Add(anchorNode);
            ReorderAnchorNodes();

            SplineEdited();

            return anchorNode;
        }

        //--------------------------------------------------------------
        public void RemoveAnchorNodeAt(int i, bool destroy=true)
        {
            if(i < m_anchorNodes.Count)
                RemoveAnchorNode(m_anchorNodes[i], destroy);
        }

        //--------------------------------------------------------------
        public void RemoveAnchorNode(SKAnchorNode anchorNode, bool destroy=true)
        {
            if(!m_anchorNodes.Remove(anchorNode))
                Debug.LogWarning("Spline: Failed to find anchor node " + anchorNode.name + " for delete!!");

            if(destroy)
                GameObject.DestroyImmediate(anchorNode.gameObject);

            SplineEdited();
        }

        //--------------------------------------------------------------
        public void ReorderAnchorNodes()
        {
            if(m_anchorNodes.Count > 0)
            {
                m_anchorNodes.Sort(delegate(SKAnchorNode a, SKAnchorNode b) { return (a.tVal).CompareTo(b.tVal); });

                for(int i=0; i<m_anchorNodes.Count; i++)
                {
                    m_anchorNodes[i].name = "AnchorNode_" + (i+1).ToString("D3");
                    m_anchorNodes[i].transform.SetSiblingIndex(i);
                }
            }
        }

        //--------------------------------------------------------------
        public void ReorderNodes()
        {
            ReorderBranchNodes();
            ReorderTriggerNodes();
            ReorderRotationNodes();
            ReorderScaleNodes();
            ReorderAnchorNodes();
        }

        //--------------------------------------------------------------
        void GetSplineMinMax(SKSpline spline, ref Vector3 min, ref Vector3 max)
        {
            for(int i=1; i<spline.Count()-1; i++)
            {
                SKPointNode splinePt = spline.GetControlPoint(i);
                if(splinePt.transform.position.x < min.x)
                    min.Set(splinePt.transform.position.x, min.y, min.z);
                if(splinePt.transform.position.x > max.x)
                    max.Set(splinePt.transform.position.x, max.y, max.z);

                if(splinePt.transform.position.y < min.y)
                    min.Set(min.x, splinePt.transform.position.y, min.z);
                if(splinePt.transform.position.y > max.y)
                    max.Set(max.x, splinePt.transform.position.y, max.z);

                if(splinePt.transform.position.z < min.z)
                    min.Set(min.x, min.y, splinePt.transform.position.z);
                if(splinePt.transform.position.z > max.z)
                    max.Set(max.x, max.y, splinePt.transform.position.z);
            }

            // Recurse all the branches
            for(int i=0; i<spline.BranchNodeCount(); i++)
            {
                SKBranchNode branchNode = spline.GetBranchNode(i);
                for(int j=0; j<branchNode.Branches.Count; j++)
                {
                    SKSpline branchSpline = branchNode.Branches[j];
                    GetSplineMinMax(branchSpline, ref min, ref max);
                }
            }
        }

        //--------------------------------------------------------------
        public void CenterOrigin()
        {
            if(Count() > 1)
            {
                // Find Min & Max X,Y,Z
                Vector3 min = GetControlPoint(1).transform.position;
                Vector3 max = min;
                GetSplineMinMax(this, ref min, ref max);

                Vector3 avgPos = min + (max-min)*0.5f;
                Vector3 disp = avgPos - transform.position;
                transform.position = avgPos;

                for(int i=0; i<Count(); i++)
                {
                    SKPointNode splinePt = GetControlPoint(i);
                    splinePt.transform.position -= disp;
                }

                // Broken in 5.3.5+
                //SKPlane splinePlane = gameObject.GetComponentInChildren<SKPlane>();
                //if(splinePlane != null)
                //    splinePlane.gameObject.transform.position -= disp;
            }
        }

        //--------------------------------------------------------------
        public void MakeLoop(bool loop=true)
        {
            if(loop)
            {
                if(Count() > 5 && !m_isLooped)
                {
                    m_isLooped = true;

                    // Remove the last control point
                    GameObject.DestroyImmediate(m_ctrlPoints[m_ctrlPoints.Count-2].gameObject);
                    SplineEdited(true);
                }
            }
            else
            {
                if(m_isLooped)
                {
                    m_isLooped = false;

                    // Add a new point for the broken loop
                    AddPointInternal(m_ctrlPoints[1].transform.position, m_ctrlPoints.Count-1);
                    //ResetPointRotation(m_ctrlPoints.Count-2);
                    SplineEdited(true);
                }
            }
        }

        //--------------------------------------------------------------
        public void MakePlanar(SKSpline spline, Plane plane, float height, bool recursive=false)
        {
            // Set the spline to the height, then reset the offset to 0 for all the points
            if(plane == Plane.X)
                spline.transform.position = new Vector3(height, spline.transform.position.y, spline.transform.position.z);
            else if(plane == Plane.Y)
                spline.transform.position = new Vector3(spline.transform.position.x, height, spline.transform.position.z);
            else if(plane == Plane.Z)
                spline.transform.position = new Vector3(spline.transform.position.x, spline.transform.position.y, height);

            if(spline.m_branchRoot != null)
            {
                if(plane == Plane.X)
                    spline.m_branchRoot.transform.localPosition = new Vector3(0.0f, spline.m_branchRoot.transform.localPosition.y, spline.m_branchRoot.transform.localPosition.z);
                else if(plane == Plane.Y)
                    spline.m_branchRoot.transform.localPosition = new Vector3(spline.m_branchRoot.transform.localPosition.x, 0.0f, spline.m_branchRoot.transform.localPosition.z);
                else if(plane == Plane.Z)
                    spline.m_branchRoot.transform.localPosition = new Vector3(spline.m_branchRoot.transform.localPosition.x, spline.m_branchRoot.transform.localPosition.y, 0.0f);
            }

            if(spline.m_pointRoot != null)
            {
                if(plane == Plane.X)
                    spline.m_pointRoot.transform.localPosition = new Vector3(0.0f, spline.m_pointRoot.transform.localPosition.y, spline.m_pointRoot.transform.localPosition.z);
                else if(plane == Plane.Y)
                    spline.m_pointRoot.transform.localPosition = new Vector3(spline.m_pointRoot.transform.localPosition.x, 0.0f, spline.m_pointRoot.transform.localPosition.z);
                else if(plane == Plane.Z)
                    spline.m_pointRoot.transform.localPosition = new Vector3(spline.m_pointRoot.transform.localPosition.x, spline.m_pointRoot.transform.localPosition.y, 0.0f);
            }

            for(int i=0; i<spline.m_ctrlPoints.Count; i++)
            {
                if(plane == Plane.X)
                    spline.m_ctrlPoints[i].transform.localPosition = new Vector3(0.0f, spline.m_ctrlPoints[i].transform.localPosition.y, spline.m_ctrlPoints[i].transform.localPosition.z);
                else if(plane == Plane.Y)
                    spline.m_ctrlPoints[i].transform.localPosition = new Vector3(spline.m_ctrlPoints[i].transform.localPosition.x, 0.0f, spline.m_ctrlPoints[i].transform.localPosition.z);
                else if(plane == Plane.Z)
                    spline.m_ctrlPoints[i].transform.localPosition = new Vector3(spline.m_ctrlPoints[i].transform.localPosition.x, spline.m_ctrlPoints[i].transform.localPosition.y, 0.0f);
            }

            if(recursive)
            {
                // Recurse all the branches
                for(int i=0; i<spline.BranchNodeCount(); i++)
                {
                    SKBranchNode branchNode = spline.GetBranchNode(i);
                    for(int j=0; j<branchNode.Branches.Count; j++)
                    {
                        SKSpline branchSpline = branchNode.Branches[j];
                        MakePlanar(branchSpline, plane, height, recursive);
                    }
                }
            }

            SplineEdited();
        }

        //--------------------------------------------------------------
        public SKPointNode InsertPointBefore(SKPointNode splinePt, string ptName, float segmentT=0.5f)
        {
            SKPointNode newSplinePt = null;
            int ptIdx = m_ctrlPoints.IndexOf(splinePt);
            if(ptIdx > 0 && ptIdx < m_ctrlPoints.Count-1)
            {
                Vector3 pos = Vector3.zero;
                if(ptIdx == 1)
                {
                    // First control point
                    Vector3 dir = m_ctrlPoints[0].transform.position - splinePt.transform.position;
                    pos = splinePt.transform.position + dir*0.5f;
                    newSplinePt = AddPointInternal(pos, ptIdx, ptName);
                }
                else if(EvaluateSegment(ptIdx-1, segmentT, ref pos))
                {
                    newSplinePt = AddPointInternal(pos, ptIdx, ptName);
                    //ResetPointRotation(ptIdx);  // Calculate the tangent of the newly added point
                    SplineEdited(ptIdx == 1);
                }
                else
                {
                    // This is either the start point, or we have less than 4 control points
                    pos = splinePt.transform.position;
                    newSplinePt = AddPointInternal(pos, ptIdx, ptName);
                }
            }

            UpdatePointNames();
            SplineEdited();

            return newSplinePt;
        }

        //--------------------------------------------------------------
        public SKPointNode InsertPointAfter(SKPointNode splinePt, string ptName, float segmentT=0.5f)
        {
            SKPointNode newSplinePt = null;
            int ptIdx = m_ctrlPoints.IndexOf(splinePt);
            if(ptIdx > 0 && ptIdx < m_ctrlPoints.Count-1)
            {
                Vector3 pos = Vector3.zero;
                if(ptIdx == m_ctrlPoints.Count-2)
                {
                    // Last control point
                    Vector3 dir = m_ctrlPoints[m_ctrlPoints.Count-1].transform.position - splinePt.transform.position;
                    pos = splinePt.transform.position + dir*0.5f;
                    newSplinePt = AddPoint(pos, ptName);
                }
                else if(EvaluateSegment(ptIdx, segmentT, ref pos))
                {
                    newSplinePt = AddPointInternal(pos, ptIdx+1, ptName);
                    //ResetPointRotation(ptIdx+1);    // Calculate the tangent of the newly added point
                    SplineEdited(ptIdx+1 == m_ctrlPoints.Count-2);
                }
                else
                {
                    // This is either the end point, or we have less than 4 control points
                    pos = splinePt.transform.position;
                    newSplinePt = AddPoint(pos, ptName);
                }
            }

            UpdatePointNames();
            SplineEdited();

            return newSplinePt;
        }

        //--------------------------------------------------------------
        public void UpdatePointNames()
        {
            for(int i=0; i<m_ctrlPoints.Count; i++)
            {
                if(i == 0)
                    m_ctrlPoints[i].name = kStartPointName;
                else if(i == m_ctrlPoints.Count-1)
                    m_ctrlPoints[i].name = kEndPointName;
                else
                    m_ctrlPoints[i].name = "Pt_" + i.ToString("D3");
            }
        }

        //--------------------------------------------------------------
        public SKPointNode InsertPointAfterClosest(Vector3 pos, string ptName="")
        {
            SKPointNode newSplinePt = null;
            if(m_ctrlPoints.Count == 0)
                return newSplinePt;

            // Find the closest point (minus the ctrl points)
            int closestPtIdx = 1;
            float closestDist = Vector3.Distance(pos, m_ctrlPoints[0].transform.position);
            for(int i=2; i<m_ctrlPoints.Count-1; i++)
            {
                float dist = Vector3.Distance(pos, m_ctrlPoints[i].transform.position);
                if(dist < closestDist)
                {
                    closestPtIdx = i;
                    closestDist = dist;
                }
            }

            if(closestPtIdx < m_ctrlPoints.Count-2)
            {
                newSplinePt = AddPointInternal(pos, closestPtIdx+1, ptName);
                //ResetPointRotation(closestPtIdx+1); // Calculate the tangent of the newly added point
                RecalcEndPoints();
            }
            else
            {
                newSplinePt = AddPoint(pos, ptName);    // At the end, just add point as normal
            }

            SplineEdited();

            return newSplinePt;
        }

        //--------------------------------------------------------------
        public void RemovePointAt(int i, bool destroy=true)
        {
            if(i < m_ctrlPoints.Count)
                RemovePoint(m_ctrlPoints[i], destroy);
        }

        //--------------------------------------------------------------
        public void RemovePoint(SKPointNode splinePoint, bool destroy=true)
        {
            if(!m_ctrlPoints.Remove(splinePoint))
                Debug.LogWarning("Spline: Failed to find point " + splinePoint.name + " for delete!!");

            if(destroy)
                GameObject.DestroyImmediate(splinePoint.gameObject);

            SplineEdited();
        }

        //--------------------------------------------------------------
        public void ReverseSpline(bool keepTriggersWhereTheyAre=true)
        {
            List<SKPointNode> newList = new List<SKPointNode>();
            for(int i=m_ctrlPoints.Count-1; i>=0; i--)
            {
                newList.Add(m_ctrlPoints[i]);
                newList[newList.Count-1].transform.SetSiblingIndex(newList.Count-1);

                if(newList.Count == 1)
                    newList[0].name = kStartPointName;
                else if(newList.Count == m_ctrlPoints.Count)
                    newList[newList.Count-1].name = kEndPointName;
                else
                    newList[newList.Count-1].name = "Pt_" + (newList.Count-1).ToString("D3");
            }

            m_ctrlPoints = newList;

            // Reverse the weld if it was looped
            if(m_ctrlPoints.Count > 1 && m_ctrlPoints[1].Weld != null && m_ctrlPoints[1].Weld == m_ctrlPoints[m_ctrlPoints.Count-2].gameObject)
            {
                m_ctrlPoints[m_ctrlPoints.Count-2].Weld = m_ctrlPoints[1].gameObject;
                m_ctrlPoints[1].Weld = null;
            }

            if(keepTriggersWhereTheyAre)
            {
                for(int i=0; i<m_triggerNodes.Count; i++)
                    m_triggerNodes[i].tVal = 1.0f - m_triggerNodes[i].tVal;
            }

            SplineEdited();
        }
    }
}
#endif
