using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{

    public GameObject player;
    public Vector3 offsetForward;
    public Vector3 offsetDriftLeft;
    public Vector3 offsetDriftRight;
    public Rigidbody rb;
    public float smoothSpeed ;
    private string playerMode; 
    private PlayerController playerController;
    public Vector3 forwardPosition;
    public Vector3 startPosition; 


    //TESTIN VAR

    public Transform target;
    public float distance ;
    public float height ;
    public float damping ;
    public bool smoothRotation = false ;
    public bool followBehind ;
    public float rotationDamping ;



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

        /*
        if(playerMode == "FORWARD"){
            forwardCamera();
        }
        else{

            driftCamera();
        }
		*/

        testing();

    }





    void forwardCamera(){
        
        Vector3 wantedPosition;
        if (followBehind)
            wantedPosition = target.TransformPoint(0, height, -distance);
        else
            wantedPosition = target.TransformPoint(0, height, distance);

        transform.position = Vector3.Lerp(transform.position, wantedPosition, Time.deltaTime * damping);

        if (smoothRotation)
        {
            Quaternion wantedRotation = Quaternion.LookRotation(target.position - transform.position, target.up);
            transform.rotation = Quaternion.Slerp(transform.rotation, wantedRotation, Time.deltaTime * rotationDamping);
        }
        else transform.LookAt(target, target.forward);

        transform.eulerAngles = new Vector3(transform.eulerAngles.x, 0, 0);
      
    }


    void driftCamera(){

        transform.eulerAngles = new Vector3(transform.eulerAngles.x, 0, 0);


        
        Vector3 wantedPosition;
        if (followBehind)
            wantedPosition = target.TransformPoint(0, height, -distance);
        else
            wantedPosition = target.TransformPoint(0, height, distance);

        transform.position = Vector3.Lerp(transform.position, wantedPosition, Time.deltaTime * damping);

        if (smoothRotation)
        {
            Quaternion wantedRotation = Quaternion.LookRotation(target.position - transform.position, target.up);
            transform.rotation = Quaternion.Slerp(transform.rotation, wantedRotation, Time.deltaTime * rotationDamping);
        }
        else transform.LookAt(target, target.forward);






    }


    void testing(){
        Vector3 wantedPosition;
        if (followBehind)
            wantedPosition = target.TransformPoint(0, height, -distance);
        else
            wantedPosition = target.TransformPoint(0, height, distance);

        transform.position = Vector3.Lerp(transform.position, wantedPosition, Time.deltaTime * damping);

        if (smoothRotation)
        {
            Quaternion wantedRotation = Quaternion.LookRotation(target.position - transform.position, target.up);
            transform.rotation = Quaternion.Slerp(transform.rotation, wantedRotation, Time.deltaTime * rotationDamping);
        }
        else transform.LookAt(target, target.forward);
    }




}
