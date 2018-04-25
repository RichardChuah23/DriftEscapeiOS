using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    public Rigidbody rb;
    public float objectGravity; 
    public float turnSpeed;
    public float forwardSpeed;
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

        //Set up variables 
        forwardDirection = (new Vector3(0.0f, 0.0f, 10f) - transform.position).normalized;
        horizontalDirection = (new Vector3(44.90f, 0f, 0f));
        lastTime = Time.time;
        tileDestroyTime = Time.time; 
        allowLeft = true;
        allowRight = true;
        anim = GetComponent<Animator>();
        gameOver = false;
        mode = "FORWARD";
        turnGear = 1; 


    }


    void FixedUpdate()
    {

        nextDriftDir = tileController.getDriftDirection();

        //Apply downward force on player Object 
        rb.AddForce(Vector3.down * objectGravity * rb.mass);

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
            //check next tile 
            enterDriftZone(nextDriftDir); 
        }

        else if ( mode == "GAMEOVER"){
            gameController.GameOver(); 
        }else{
            Debug.Log("Variable mode is invalid"); 
        }

        //Lock X and Z axis 
        transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);


    }

    public void setMode(string mode){
        this.mode = mode; 
    }

    public void setPlayerPos(Vector3 pos){
        transform.position = pos; 
    }

    void moveForward()
    {
        //Car moving forward 
        transform.position += forwardDirection * forwardSpeed * Time.deltaTime;

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
        if (mode != "GAMEOVER")
        { 
            yield return new WaitForSeconds(3f);
            tileController.DestroyTileRoad();
   
        }
    }

    IEnumerator RemoveTileDrift()
    {
        if (mode != "GAMEOVER")
        {
            yield return new WaitForSeconds(3f);
            tileController.DestroyTileDriftZone();
        }
    }


    private void OnCollisionExit(Collision collision)
    {


        //To prevent multiple calling. 
        //When player object left the tile 
        if(Time.time -  tileDestroyTime > 3 ){

            //If its a road.

            if (collision.transform.name == "Road" || collision.transform.name == "R_Road Curve" || collision.transform.name == "L_Road Curve")
            {
                //Spawn a new tile 
                tileController.nextTile();
                StartCoroutine(RemoveTileRoad());
                tileDestroyTime = Time.time;

            }

        }

        //Tells Tiles Manager to remove tile - Drift Zone 
        if (collision.transform.name == "DriftZone(Clone)")
        {
            StartCoroutine(RemoveTileDrift());
        }

	}


    /// When player object contacts with an object 
    void OnCollisionEnter(Collision collision)
    {
        /*
        Debug.Log("Entering " + collision.transform.name); 
        //If the contact object is a Straight tile  
        if(collision.transform.name == "Road"){
            mode = "FORWARD";
        }
            
        //If Right Tile
        else if(collision.transform.name == "R_Road Curve"){
            mode = "RIGHT"; 
            transform.Rotate(0, 0, 0); // reset rotation to 0 

        }
        //If Left tile 
        else if ( collision.transform.name == "L_Road Curve"){
            mode = "LEFT";
            transform.Rotate(0, 0, 0); // reset rotation to 0 

        //If the player contact with the ground  
        }else 

        */


        //When player did not react to the driftZone
        //Car keep going straight until game over  
        if ( collision.transform.name == "R_Road Curve" && collision.transform.name == "L_Road Curve" && mode == "PREDRIFT"){
            mode = "FORWARD"; 
        }

        if ( collision.transform.name == "DriftZone(Clone)"){
            Debug.Log("Set to predrift");
            mode = "PREDRIFT"; 
        }

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
            transform.Translate(0, 0, Time.deltaTime * forwardSpeed); // move forward

        }


        if (turnGear == 1)
        {

            drift(forwardSpeed, turn1);
        }

        if (turnGear == 2)
        {

            drift(forwardSpeed, turn2);
        }
        if (turnGear == 3)
        {

            drift(forwardSpeed, turn3);
        }

    }

    void drift(float speed, float angle)
    {
        
        transform.Translate(0, 0, Time.deltaTime * speed); // move forward
        transform.Rotate(0, angle, 0); // turn to a certain angle 



    }

    void enterDriftZone(string nextTileDirection){

        transform.Translate(0, 0, Time.deltaTime * forwardSpeed); // move forward 

        userInputVer = Input.GetAxisRaw("Vertical");

        if(userInputVer == -1 ){

            if (nextTileDirection == "LEFT")
            {
                mode = "LEFT";
            }
            else if (nextTileDirection == "RIGHT")
            {
                mode = "RIGHT";
            }

        }


        //When user swipe down
        //Turn to the tile direction with gear one 
        //Animation 
        //Reduce car speed 




    }

}

