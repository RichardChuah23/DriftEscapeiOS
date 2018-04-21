using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    public GameObject player;
    private Vector3 offset;
    public Rigidbody rb;

	// Use this for initialization
	void Start () {

        //Find the distance 
        offset = transform.position - player.transform.position; 

        //Set the camera at the first frame
        transform.position = player.transform.position + offset; 

	}
	
	void LateUpdate () {
        
        //camera follows car switch lane 
        transform.position = new Vector3(player.transform.position.x,transform.position.y, player.transform.position.z + offset.z) ;



        /*
        //move camera when switching lane 
        transform.position = Vector3.Lerp( new Vector3(transform.position.x,transform.position.y,transform.position.z), 
                                          new Vector3(player.transform.position.x + offset.x,transform.position.y,transform.position.z),
                                          Time.deltaTime * 2.0f);
        */ 
	}
}
