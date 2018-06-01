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


    //now fixed figures 80,40,5,3

    //Camera Shake
    private float shakeDuration;

    //Heavy Shake
    private float heavyShakeDuration_2 = 0f ;
    private float heavyShakeDuration = 0.5f;
    private float heavyShakeAmount = 15f ;
    private float heavyShakeSpeed = 12f ;

    //Light Shake 
    private float lightShakeDuration_2 = 0f;
    private float lightShakeDuration = 0.2f;
    private float lightShakeAmount = 5f;
    private float lightShakeSpeed = 3f; 

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


        followTranform(80);

        cameraHeavyShake();
        cameraLightShake();

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


    void followTranform(float distance){
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


        cameraLightShake();

    }


    public void startLightShake(){

        lightShakeDuration_2 = lightShakeDuration; 
    }

    public void startHeavyShake(){

        heavyShakeDuration_2 = heavyShakeDuration; 
    }


    void cameraHeavyShake(){

        if (heavyShakeDuration_2 > 0)
        {
            transform.localPosition = Vector3.Lerp(transform.localPosition, transform.position + Random.insideUnitSphere * heavyShakeAmount, Time.deltaTime * heavyShakeSpeed);
            heavyShakeDuration_2 -= Time.deltaTime;
        }
    }

    void cameraLightShake()
    {

        if (lightShakeDuration_2 > 0)
        {
            transform.localPosition = Vector3.Lerp(transform.localPosition, transform.position + Random.insideUnitSphere * lightShakeAmount, Time.deltaTime * lightShakeSpeed);
            lightShakeDuration_2 -= Time.deltaTime;
        }


    }




}
