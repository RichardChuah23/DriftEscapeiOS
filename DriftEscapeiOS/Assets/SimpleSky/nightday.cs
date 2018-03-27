using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class nightday : MonoBehaviour {

	// Use this for initialization
	void Start () {


        gameObject.GetComponent<Renderer>().material.SetTextureOffset("_MainTex", new Vector2(0.3f, 0));
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
