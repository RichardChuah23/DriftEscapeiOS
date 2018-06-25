using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{


    //Player var
    public Rigidbody rb;
    private string playerMode; 
    private PlayerController playerController;
    private Vector3 startPosition;

    //Sound Controller 
    private SoundEffectController soundController; 
    private bool soundPlaying = false ;
    private bool accelerateSoundPlaying = false; 

    //Camera effect var 
    public ParticleSystem accelerateFX;

    //Camera var 
    public bool smoothRotation = false ;
    public bool followBehind = true; 
    public Transform target;

    private float particleTime = 1.8f; 
    public float distance = 80; 
    public float distance_start = -180  ;
    public float height_start = 15;
    public float height = 35 ;
    public float damping  = 3;
    public float rotationDamping = 15 ;

    private Vector3 start_offset ;
    private Vector3 start_offset_start = new Vector3(17, 0f, 0f);

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



    private bool beginLerping = true;
    private float t;
    public float startGameFocusDuration;


    public GameObject pauseGameObject;
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

        GameObject soundControllerObj = GameObject.FindWithTag("SoundController");
        soundController = soundControllerObj.GetComponent<SoundEffectController>();


    }


    void FixedUpdate()
    {

        playerMode = playerController.getMode();
        rotationDamping = 15;
        //Front Mode
        if (beginLerping == true)
        {

            //Wait for n seconds and start 
            distance = -180;
            height = 15;
            damping = 5;
            rotationDamping = 15;
            start_offset = new Vector3(17, 0f, 0f);


            rotationDamping = 15;
            if (soundPlaying == false)
            {

                StartCoroutine(beginplayingAcceleratingSound());
            }

            StartCoroutine(beginMoveStartCamera());

            pauseGameObject.SetActive(false);


        }
        else{
            pauseGameObject.SetActive(true);
        }

        //Forward Mode 
        if (playerMode == "FORWARD" && beginLerping == false)
        {


            //Accelerating 
            if (particleTime > 0f)
            {

                accelerateFX.gameObject.SetActive(true);
                height = 22;
                damping = 5;
                rotationDamping = 15;

                if(soundPlaying == false){
                    StartCoroutine(beginplayingAcceleratingSound());


                }
               


                particleTime -= Time.deltaTime;
                //StartCoroutine(delayResetRotationDamping());



            }
            else
            {
                distance = -25;
                damping = 3;
                height = 25;
                rotationDamping = 1;
  
                accelerateFX.gameObject.SetActive(false);

            }


            //Drift Mode
        }
        else if (playerMode == "LEFT" || playerMode == "RIGHT")
        {

            distance = 70;
            damping = 6;
            rotationDamping = 15;
            height = 25;

            soundPlaying = false;



            accelerateFX.gameObject.SetActive(false);
            particleTime = 1.8f;
        }
        else if (playerMode == "GAMEOVER" && playerController.getGameOverReason() == "STRAIGHT HIT"){

            rotationDamping = 2;

        }
    


        followTranform(distance);

        cameraHeavyShake();
        cameraLightShake();

    }


	public void resetCamera(){
        soundPlaying = false;
        damping = 3; 
        rotationDamping = 15 ;
        beginLerping = true;
        particleTime = 1.8f;
    }


    public void setGameStartCameraView(){

        transform.position = new Vector3(0f, 0f, 0f);
        beginLerping = true; 
        distance = -180;
        height = 15;
        start_offset = new Vector3(17, 0f, 0f);
    }

    void followTranform(float distance){


        Vector3 wantedPosition;
        if (followBehind)
            wantedPosition = target.TransformPoint(0, height, -distance) + start_offset;
        else
            wantedPosition = target.TransformPoint(0, height, distance);

        transform.position = Vector3.Lerp(transform.position, wantedPosition, Time.deltaTime * damping);

        if (smoothRotation)
        {
            
            Quaternion wantedRotation = Quaternion.LookRotation(target.position - transform.position, target.up) ;

            transform.rotation = Quaternion.Slerp(transform.rotation, wantedRotation, Time.deltaTime * rotationDamping);
        }
        else transform.LookAt(target, target.forward);



    }



    #region Camera Shake


    public void startLightShake(){

        lightShakeDuration_2 = lightShakeDuration; 
    }

    public void startLongLightShake()
    {

        lightShakeDuration_2 = 1.5f;
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


    #endregion


    IEnumerator beginplayingAcceleratingSound()
    {

        yield return new WaitForSeconds(startGameFocusDuration - 0.2f);


        if (soundPlaying == false)
        {

            soundController.playAccelerate();
            soundPlaying = true;


        }


    }

    #region Coroutine 

    IEnumerator beginMoveStartCamera()
    {

        yield return new WaitForSeconds(startGameFocusDuration);


        rotationDamping = 15;

        //Interpolated float result between min and max
        distance = Mathf.Lerp(distance_start, 35, t);
        height = Mathf.Lerp(height_start, 22, t);

        start_offset.x = Mathf.Lerp(start_offset_start.x, 0, t);

        // .. and increate the t interpolater
        t += 0.5f * Time.deltaTime;


        if (t > 1)
        {


            beginLerping = false;

        }


    }

    IEnumerator delayResetRotationDamping()
    {

        yield return new WaitForSeconds(1f);

        rotationDamping = 1;


    }

    #endregion
}
