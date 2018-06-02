using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class obstacleColliderScript : MonoBehaviour
{

    private CameraController cameraController;

    // Use this for initialization
    void Start()
    {

        //Locate game controller 
        GameObject mainCameraObject = GameObject.FindWithTag("MainCamera");
        if (mainCameraObject != null)
        {
            cameraController = mainCameraObject.GetComponent<CameraController>();


        }
    }

    // Update is called once per frame
    void Update()
    {

    }


    /// When player object contacts with an object 
    void OnTriggerEnter(Collider collision)
    {
        
        if (collision.gameObject.tag == "Player")
        {


            cameraController.startHeavyShake();

        }
    }
}

