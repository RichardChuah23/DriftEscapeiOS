using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{

    public GameObject player;
    public Vector3 offset;
    public Rigidbody rb;
    public float smoothSpeed ;
    private string playerMode; 
    private PlayerController playerController;
    public Vector3 forwardPosition;
    public Vector3 startPosition; 


    // Use this for initialization
    void Start()
    {

        //Locate player controller 
        GameObject playerControllerObject = GameObject.Find("Player");
        if (playerControllerObject != null)
        {
            playerController = playerControllerObject.GetComponentInChildren<PlayerController>();


        }

        //Set the camera at the first frame
        transform.position = startPosition; 


    }

    void FixedUpdate()
    {

        playerMode = playerController.getMode(); 

        if(playerMode == "FORWARD"){
            test();
        
        }

    }


    //Lower camera from high and focus on car. 
    void startMode(){

    }

    void straightMode(){

        transform.position = new Vector3(transform.position.x, transform.position.y, player.transform.position.z + offset.z);

        transform.position = Vector3.Lerp(new Vector3(transform.position.x, transform.position.y, transform.position.z),
                                  new Vector3(player.transform.position.x + offset.x, transform.position.y, transform.position.z),
                                  Time.deltaTime * 2.0f);
        
        
    }


    void test(){

        Vector3 desiredPosition = player.transform.position + offset;
        Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed * Time.deltaTime);
        transform.position = smoothedPosition;

        //transform.LookAt(player.transform);

    }
}
