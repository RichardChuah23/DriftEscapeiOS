using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    public Rigidbody rb;
    public float objectGravity; 
    public float turnSpeed;
    public float forwardSpeed;
    private float newSpeed; 
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
    private string mode;

    public float t;
    Animator anim;

    //Drift Variable 
    private float turn1;
    private float turn2;
    private float turn3;
    private int turnGear ;
    private float inputHo;
    private float coolDown;
    private float lastTime2;

    private string nextDriftDir; 

    private bool dzTrigger = true; 
    private bool tileTrigger = true;
    private GameObject currentInteractRoadExitCollider;

    private float forwardDir = 0f;

    private Transform brakeFX;
    private GameObject brakeFXGameObject; 

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

        //FX 
        brakeFX = transform.Find("FX_Tyre_Smoke");
        Debug.Log(brakeFX.gameObject.name);
        brakeFXGameObject = brakeFX.gameObject; 
        brakeFXGameObject.SetActive(false);



        forwardDirection = (new Vector3(0.0f, 0.0f, 10f) - transform.position).normalized;
        horizontalDirection = (new Vector3(44.90f, 0f, 0f));
        lastTime = Time.time;
        tileDestroyTime = Time.time; 
        allowLeft = true;
        allowRight = true;
        anim = GetComponent<Animator>();
        gameOver = false;
        mode = "FORWARD";
        turnGear = 0;
        newSpeed = forwardSpeed; 

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
        else if ( mode ==   "LEFT" || mode == "RIGHT")
        {
            driftmode(mode);
        }
        else if(mode == "PREDRIFT"){
            nextDriftDir = tileController.getDriftDirection();
            Debug.Log(nextDriftDir);

            //check next tile 
            driftZoneMode(nextDriftDir); 
        }

        else if ( mode == "GAMEOVER"){
            
            gameController.setGameOver(true);
            turnGear = 0; 
        }else{
            Debug.Log("Variable mode is invalid"); 
        }


    }

    public float getForwardSpeed(){
        return forwardSpeed; 
    
    }

    public void setMode(string mode){
        this.mode = mode; 
    }

    public void setPlayerPos(Vector3 pos){
        transform.position = pos; 
    }

    public void resetPlayerRotation(){
        //Rotote the player back to direction 
        transform.eulerAngles = new Vector3(0, 0, 0);
    }

    void moveForward()
    {
        //Check which collider player collide with 
        //left right or middle. 

        //If middle 
        //If Left 
        //If Right 




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

    }


    void switchLeft()
    {


        transform.position += new Vector3(-50, 0f, 0f);

        //turn the car 
        anim.SetTrigger("SwitchLeft");

        //Reset user input
        userInputHo = 0;
        //Update cooldown
        lastTime = Time.time;
    }

    void switchRight()
    {

        anim.SetTrigger("SwitchRight");
        transform.position += new Vector3(50, 0f, 0f);

        //Reset user input
        userInputHo = 0;
        //Update cooldown
        lastTime = Time.time;
    }

    bool checkAllowLeft()
    {

        if (transform.position.x <= -49.0f)
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

        if (transform.position.x >= 49.0f)
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


    private void OnCollisionExit(Collision collision)
    {




	}



	/// When player object contacts with an object 
	void OnCollisionEnter(Collision collision)
    {

        //When player did not react to the driftZone
        //Car keep going straight until game over  
        if (collision.transform.name == "Exit DriftZone Collider" )
        {


            if(mode == "PREDRIFT"){
                mode = "FORWARD";
            }
            StartCoroutine(RemoveTileDrift());

        }

        //When car exit a tile 
        if (collision.transform.name == "Enter Collider" )
        {
            
                
                tileController.nextTile();
                StartCoroutine(RemoveTileRoad());

                tileDestroyTime = Time.time;

                currentInteractRoadExitCollider = collision.gameObject;

        }



        //If enters straight road 
        if (collision.transform.name == "Road")
        {
            mode = "FORWARD";
        }

        //Enter Predrift mode when enter drift zone 
        if ( collision.transform.name == "DriftZone(Clone)"){
            mode = "PREDRIFT"; 
        }

        //Gameover when touches the ground 
        if(collision.transform.name == "Ground"){
            mode = "GAMEOVER"; 
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

    void driftZoneMode(string nextTileDirection){
        brakeFXGameObject.SetActive(true);
        //Car slows down 
        if (newSpeed > turnSpeed)
        {
            newSpeed = newSpeed - 10;

        }


        if (currentInteractRoadExitCollider != null){
            //Find direction 
            forwardDir = angleEnterDriftZone(currentInteractRoadExitCollider);
        }

        //Rotote the player back to direction 
        transform.eulerAngles = new Vector3(0, forwardDir, 0);
         
        //Car keep moving forward 
        transform.Translate(0, 0, Time.deltaTime * newSpeed); // move forward 

        //User input 
        userInputVer = Input.GetAxisRaw("Vertical");

        //If input is swipe down 
        //Enter Drift Mode 
        if(userInputVer == -1 ){

            //Switch mode according to tile curve direction 
            if (nextTileDirection == "LEFT")
            {
                mode = "LEFT";
            }
            else if (nextTileDirection == "RIGHT")
            {
                mode = "RIGHT";
            }

            turnGear = 0; 
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

