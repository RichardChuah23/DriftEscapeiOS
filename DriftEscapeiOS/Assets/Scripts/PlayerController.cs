using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    public Rigidbody rb;
    public float objectGravity;
    public float turnSpeed;
    public float forwardSpeed;
    private float currentSpeed;
    public float switchlaneSpeed;
    public float swithLaneCoolDown;
    private Vector3 forwardDirection;
    private Vector3 horizontalDirection;
    private float userInputHo;
    private float userInputVer;
    private float lastTime;
    private float tileDestroyTime;
    private bool allowLeft;
    private bool allowRight;
    private bool gameOver;
    private GameController gameController;
    private TileController tileController;
    private FXController fxController;
    private AnimationController animController;
    private string GameOverDriftDirection;


    private string mode = "FORWARD";
    private string previousMode; 

    public float t;
    Animator anim;

    //Drift Variable 
    private float turn1;
    private float turn2;
    private float turn3;
    private float offAngle; 
    private int turnGear;
    private float inputHo;
    private float coolDown;
    private float lastTime2;

    private string nextDriftDir;

    private bool dzTrigger = true;
    private bool tileTrigger = true;
    private GameObject currentInteractRoadExitCollider;

    private float forwardDir = 0f;
    private string animMode;
    private float laneAdjustment_x; 
    private bool laneAdjustmentRequire = false;

    private int onLaneNumber = 0; 


    void Start()
    {

        //Locate game controller 
        GameObject gameControllerObject = GameObject.FindWithTag("GameController");
        if (gameControllerObject != null)
        {
            gameController = gameControllerObject.GetComponent<GameController>();

        }
        else
        {
            Debug.Log("Cannot find GameController script");

        }

        //Locate tile Controller 
        GameObject tileControllerObject = GameObject.FindWithTag("TileController");
        if (tileControllerObject != null)
        {
            tileController = tileControllerObject.GetComponent<TileController>();

        }
        else
        {
            Debug.Log("Cannot find TileController script");

        }

        //Locate FX controller 
        Transform fxTranform = transform.Find("FX");
        GameObject fxControllerObject = fxTranform.gameObject;
        if (fxControllerObject != null)
        {
            //playerController = playerControllerObject.GetComponent<PlayerController>();
            fxController = fxControllerObject.GetComponentInChildren<FXController>();


        }
        if (fxController == null)
        {
            Debug.Log("Cannot find PLayerController script");

        }

        //Locate Vehicle 
        Transform vehicleTranform = transform.Find("Vehicle");
        GameObject vehicleControllerObject = vehicleTranform.gameObject;
        if (vehicleControllerObject != null)
        {
            //playerController = playerControllerObject.GetComponent<PlayerController>();
            animController = vehicleControllerObject.GetComponentInChildren<AnimationController>();


        }
        if (animController == null)
        {
            Debug.Log("Cannot find Vehicle Controller script");

        }

        fxController.offTyreBrakeSmoke();

        forwardDirection = (new Vector3(0.0f, 0.0f, 10f) - transform.position).normalized;
        horizontalDirection = (new Vector3(44.90f, 0f, 0f));
        lastTime = Time.time;
        tileDestroyTime = Time.time;
        allowLeft = true;
        allowRight = true;
        anim = GetComponent<Animator>();
        gameOver = false;
        mode = "FORWARD";
        previousMode = "NULL"; 
        turnGear = 0;
        offAngle = 0;
        currentSpeed = forwardSpeed;

    }


    void FixedUpdate()
    {
        //Apply downward force on player Object 
        rb.AddForce(Vector3.down * objectGravity * rb.mass);
        //Lock X and Z axis, prevent player object wooble 
        transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);

        //Check mode 
        if (mode == "FORWARD")
        {
            moveForward();
        }
        else if (mode == "LEFT" || mode == "RIGHT")
        {
            driftmode(mode);
        }
        else if (mode == "PREDRIFT")
        {
            laneAdjustmentRequire = false;
            nextDriftDir = tileController.getDriftDirection();

            //check next tile 
            driftZoneMode(nextDriftDir);
        }else if(mode=="PREFORWARD")
        {
            preForward(); 
        }

        else if (mode == "GAMEOVER")
        {   
            
            if (GameOverDriftDirection == "LEFT")
            {

                offAngle = -2f;
            }
            else if (GameOverDriftDirection == "RIGHT")
            {
                offAngle = 2f;
            }


            if (turnSpeed != 0 ){

                turnSpeed = turnSpeed - 5;
                drift(turnSpeed, offAngle);
            }

            gameController.setGameOver(true);
            turnGear = 0;

        }
        else
        {
            Debug.Log("Variable mode is invalid");
        }


    }

    public float getForwardSpeed()
    {
        return forwardSpeed;

    }

    public void setMode(string mode)
    {
        this.mode = mode;
    }

    public string getMode(){
        return mode; 
    }

    public void setPlayerPos(Vector3 pos)
    {
        transform.position = pos;
    }

    public void resetPlayerRotation()
    {
        //Rotote the player back to direction 
        transform.eulerAngles = new Vector3(0, 0, 0);
    }

    void preForward(){

        transform.Translate(0, 0, Time.deltaTime * turnSpeed);
    }

    void moveForward()
    {

 
       
        transform.Translate(0, 0, Time.deltaTime * forwardSpeed); // move forward


        //Left Right User input 
        userInputHo = Input.GetAxisRaw("Horizontal");

        //Check user allow to turn left and right 
        allowLeft = checkAllowLeft();
        allowRight = checkAllowRight();

        //Moving Left and Right 
        if (userInputHo == -1.0 && Time.time - lastTime > swithLaneCoolDown && allowLeft)
        {
            switchLeft();
        }
        else if (userInputHo == 1 && Time.time - lastTime > swithLaneCoolDown && allowRight)
        {
            switchRight();
        }

        //If needed to adjust player position back to lane 
        //Lerp towards that direction  
        if(laneAdjustmentRequire == true){


            transform.position = Vector3.Lerp(transform.position, new Vector3(laneAdjustment_x,transform.position.y,transform.position.z), Time.deltaTime * 1f * 10);

            if(Mathf.FloorToInt(transform.position.x) ==  Mathf.FloorToInt(laneAdjustment_x)){
                laneAdjustmentRequire = false;

            }
        }

    }



    void switchLeft()
    {


        transform.position += new Vector3(-50, 0f, 0f);


        //play animation
        animController.playSwitchLeft();

        //Reset user input
        userInputHo = 0;
        //Update cooldown
        lastTime = Time.time;
        onLaneNumber -=1; 
    }

    void switchRight()
    {

        //anim.SetTrigger("SwitchRight");
        transform.position += new Vector3(50, 0f, 0f);

        //play animation
        animController.playSwitchRight();

        //Reset user input
        userInputHo = 0;
        //Update cooldown
        lastTime = Time.time;

        onLaneNumber +=1; 
    }

    bool checkAllowLeft()
    {

        if (onLaneNumber == -1 || laneAdjustmentRequire == true )
        {
            return false;
        }
        else
        {
            return true;
        }

    }

    bool checkAllowRight()
    {

        if (onLaneNumber == 1 || laneAdjustmentRequire == true  )
        {
            return false;
        }
        else
        {
            return true;
        }

    }

    IEnumerator RemoveTileRoad()
    {
        tileTrigger = false;
        if (mode != "GAMEOVER")
        {

            yield return new WaitForSeconds(2f);
            tileController.DestroyTileRoad();

        }
        tileTrigger = true;
    }

    IEnumerator RemoveTileDrift()
    {
        if (mode != "GAMEOVER")
        {
            yield return new WaitForSeconds(2f);
            tileController.DestroyTileDriftZone();
        }
    }



	/// When player object contacts with an object 
	void OnCollisionEnter(Collision collision)
    {
        
        if (collision.transform.name == "Exit DriftZone Collider" )
        {
            collision.transform.gameObject.SetActive(false);

            if(mode == "PREDRIFT"){
                Debug.Log("MODE IN ON COLLISION! " + mode); 
                //GameOver when car hits the road and its still in predrift mode. 
                mode = "GAMEOVER";
                Debug.Log("TOO SLOW EXIT PREDRIFT");
            }
            StartCoroutine(RemoveTileDrift());
            collision.transform.gameObject.SetActive(false);

        }

        if (collision.transform.name == "Enter DriftZone Collider")
        {
            collision.transform.gameObject.SetActive(false);
            //Enter Predrift mode when enter drift zone 
            previousMode = mode;
            mode = "PREDRIFT";
        }


        //When car exit a tile 
        if (collision.transform.name == "Enter Collider" )
        {

            tileController.nextTile();
            StartCoroutine(RemoveTileRoad());

            tileDestroyTime = Time.time;

            currentInteractRoadExitCollider = collision.gameObject;

            collision.transform.gameObject.SetActive(false);

            collision.transform.gameObject.SetActive(false);

        }
        /*
        //If enters straight road 
        if (collision.transform.name == "Road")
        {
            
            mode = "FORWARD";

        }
        */

        //Gameover when touches the ground 
        if(collision.transform.name == "Ground"){

            Debug.Log("HIT GROUND!");
            if(mode == "LEFT"){
                GameOverDriftDirection = "LEFT";
            }else if(mode == "RIGHT"){
                GameOverDriftDirection = "RIGHT";
            }

            //Control FX 
            fxController.onBrokeDownSmoke();
            fxController.offTyreBrakeSmoke();


            mode = "GAMEOVER"; 
        }

        //When car hits Lane Collider
        // reposition car 
        if(collision.transform.tag == "Lane Collider" ){

            //reposition car 
            //transform.position = new Vector3(collision.transform.position.x, transform.position.y, transform.position.z);

            laneAdjustmentRequire = true;
            laneAdjustment_x = collision.transform.position.x; 


            //Remove the lane collider 
            collision.gameObject.transform.parent.gameObject.SetActive(false) ;


            if(collision.transform.name == "Lane Collider L"){

                onLaneNumber = -1;

            }
            if (collision.transform.name == "Lane Collider M")
            {
                onLaneNumber = 0;

            }
            if (collision.transform.name == "Lane Collider R")
            {

                onLaneNumber = 1;
            }

        }

 
    }






    void driftmode(string mode)
    {
        
        if (mode == "RIGHT"){ 
            turn1 = 0.5f;
            turn2 = 0.7f;
            turn3 = 1f;
        }

        if(mode == "LEFT"){ 

            turn1 = -0.5f;
            turn2 = -0.9f; 
            turn3 = -1f;
        
        }

        coolDown = 0.5f;
        lastTime = Time.time; 
        inputHo = Input.GetAxisRaw("Horizontal");

        //Click Right
        if (inputHo == 1 && Time.time - lastTime2 > coolDown && turnGear <= 3)
        {
            if (mode == "LEFT" && turnGear - 1 >= 0  ){
                turnGear--;
            }else if(mode == "RIGHT" && turnGear + 1 <= 3 ){
                turnGear++; 
            }

            lastTime2 = Time.time;

        }


        //Click Left
        if (inputHo == -1 && Time.time - lastTime2 > coolDown && turnGear >= 0)
        {
            if (mode == "LEFT" && (turnGear + 1)  <= 3 )
            {
                turnGear++;
            }
            else if (mode == "RIGHT" && turnGear - 1 >= 0  )
            {
                turnGear--;
            }
            lastTime2 = Time.time;

        }


        if (turnGear == 0)
        {
            transform.Translate(0, 0, Time.deltaTime * turnSpeed); // move forward

        }

        if (turnGear == 1)
        {

            drift(turnSpeed, turn1);
        }

        if (turnGear == 2)
        {

            drift(turnSpeed, turn2);
        }
        if (turnGear == 3)
        {

            drift(turnSpeed, turn3);
        }

    }

    void drift(float speed, float angle)
    {
        
        transform.Translate(0, 0, Time.deltaTime * speed); // move forward
        transform.Rotate(0, angle, 0); // turn to a certain angle 

    }

    float slowDown(float currentSpeed, float desireSpeed){
        
        while (currentSpeed > desireSpeed){

            currentSpeed -= 10; 
        }

        return currentSpeed; 
    }

    void driftZoneMode(string nextTileDirection){
        
        if(previousMode == "FORWARD"){
            
            //Brake Smoke 
            fxController.onTyreBrakeSmoke();

            //Car keep moving forward, slowed down speed
            transform.Translate(0, 0, Time.deltaTime * turnSpeed); // move forward 


        }else{
            //keep drifting until user respond 
            drift(turnSpeed, turnGear);

        }




        //User input 
        userInputVer = Input.GetAxisRaw("Vertical");
        //If input is swipe down 
        //Enter Drift Mode
        if (userInputVer == -1 && nextTileDirection != "FORWARD")
        {


            //Switch mode according to tile curve direction 
            if (nextTileDirection == "LEFT")
            {
                //Switch to left mode 
                previousMode = mode; 
                mode = "LEFT";
                //If the car is already drifting light
                if (animMode == "DriftRight")
                {
                    //Turn car from Right to Left
                    animController.playDriftRightToLeft();

                }
                else
                {
                    animController.playDriftLeft();
                }


                //update animation mode 
                animMode = "DriftLeft";
            }
            else if (nextTileDirection == "RIGHT")
            {
                //Switch to Right Mode 
                previousMode = mode; 
                mode = "RIGHT";
                Debug.Log("Current mode ! " + mode);
                //If the car is already drifting left 
                if (animMode == "DriftLeft")
                {
                    animController.playDriftLeftToRight();
                }
                else
                {
                    animController.playDriftRight();
                }

                //Update animation mode 
                animMode = "DriftRight";

            }

            //Reset turn gear 
            turnGear = 0;
        }


        //Back to forward Tile 
        if (nextTileDirection == "FORWARD"){
            //Swipe Up
            if(userInputVer == 1){


                //player car rotate back to straight 
                transform.rotation = Quaternion.Euler(new Vector3(0, 0, 0));

                //player animation 
                if (animMode == "DriftLeft"){
                    animController.playDriftLeftToIdle(); 
                    
                }else if (animMode == "DriftRight"){

                    animController.playDriftRightToIdle(); 
                }

                mode = "PREFORWARD"; 
                StartCoroutine(delayForward());

                previousMode = mode; 

                animMode = "IDLE"; 

            }



        }

    }

    IEnumerator delayForward()
    {

        yield return new WaitForSeconds(1f);
        if(mode != "GAMEOVER"){

            mode = "FORWARD";
        }


    }


    //Return the angle player should turn to when enter drift zone
    private float angleEnterDriftZone(GameObject currentTile)
    {


        if (currentTile.transform.tag == "UP"  )
        {

            return 0;
        }
        else if (currentTile.transform.tag == "RIGHT")
        {
            return 90;
        }
        else if (currentTile.transform.tag == "DOWN")
        {
            return 180;
        }
        else if (currentTile.transform.tag == "LEFT")
        {
            return -90;
        }
        else
        {

            return 0;
        }
    }



}

