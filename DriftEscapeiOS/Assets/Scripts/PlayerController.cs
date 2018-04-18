using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    public Rigidbody rb;
    public float turnSpeed;
    public float forwardSpeed;
    public float switchlaneSpeed;
    public float swithLaneCoolDown;
    private Vector3 forwardDirection;
    private Vector3 horizontalDirection;
    private float userInputHo;
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
    private int turnGear = 0;
    private float inputHo;
    private float coolDown;
    private float lastTime2;



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


        //Set car location 
        //transform.position = new Vector3(0, 0, 0);




    }


    void FixedUpdate()
    {

        //Check if the game is running 
        //gameOver = gameController.isGameOver();

        if (mode == "FORWARD")
        {
            moveForward();
        }
        else
        {

            driftmode(mode);
        }


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
        yield return new WaitForSeconds(2f);
        tileController.DestroyTileRoad();
    }

    IEnumerator RemoveTileDrift()
    {
        yield return new WaitForSeconds(2f);
        tileController.DestroyTileDriftZone();
    }


    private void OnCollisionExit(Collision collision)
    {

        if(Time.time -  tileDestroyTime > 1 ){ 

            Debug.Log(collision.transform.name);
            if (collision.transform.name == "Road" || collision.transform.name == "R_Road Curve" || collision.transform.name == "L_Road Curve")
            {
                StartCoroutine(RemoveTileRoad());

            }

            tileDestroyTime = Time.time; 
        
        }


        //Tells Tiles Manager to remove tile - Drift Zone 
            if (collision.transform.name == "DriftZone(Clone)")
            {
                StartCoroutine(RemoveTileDrift());

            }

	}

    void OnCollisionEnter(Collision collision)
    {
        

        //Straight 
        if(collision.transform.name == "Road"){
            mode = "FORWARD";
        }
            
        //Left
        else if(collision.transform.name == "R_Road Curve"){
            mode = "RIGHT"; 
        }

        else if ( collision.transform.name == "L_Road Curve"){
            mode = "LEFT"; 
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
        if (inputHo == 1 && Time.time - lastTime2 > coolDown && turnGear <= 2)
        {
            turnGear++;
            lastTime2 = Time.time;

        }

        //Click Left
        if (inputHo == -1 && Time.time - lastTime2 > coolDown && turnGear >= 1)
        {
            turnGear--;
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


}

