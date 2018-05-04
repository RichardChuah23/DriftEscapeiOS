using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class scoreController : MonoBehaviour {


    private float score; 
    public float forwardSpeed;
    private PlayerController playerController; 

	// Use this for initialization
	void Start () {



        //Locate game controller 
        GameObject gameObjectPlayerController = GameObject.FindWithTag("Player");
        if (gameObjectPlayerController != null)
        {
            playerController = gameObjectPlayerController.GetComponent<PlayerController>();

        }
        else
        {
            Debug.Log("Cannot find Player Controller  script");

        }

        score = 0; 
        forwardSpeed = playerController.getForwardSpeed(); 

		
	}
	
	// Update is called once per frame
    void Update () {
        
        Debug.Log(score);
        score += 0.1f * forwardSpeed; 

	}


}
