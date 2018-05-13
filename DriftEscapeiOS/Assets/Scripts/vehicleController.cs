using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class vehicleController : MonoBehaviour {


    PlayerController playerController; 

	// Use this for initialization
	void Start () {

        //Locate tile Controller 
        GameObject playerControllerObject = GameObject.FindWithTag("TileController");
        if (playerControllerObject != null)
        {
            playerController = playerControllerObject.GetComponent<PlayerController>();

        }
        else
        {
            Debug.Log("Cannot find PlayerController  script");

        }
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}




    /// When player object contacts with an object 
    void OnCollisionEnter(Collision collision)
    {

        //If enters straight road 
        if (collision.transform.name == "Road")
        {

            playerController.setMode("FORWARD");

        }

        //Enter Predrift mode when enter drift zone 
        if (collision.transform.name == "DriftZone(Clone)")
        {
            playerController.setMode("PREDRIFT");

        }

        //Gameover when touches the ground 
        if (collision.transform.name == "Ground")
        {
            playerController.setMode("GAMEOVER");

        }
    }

}
