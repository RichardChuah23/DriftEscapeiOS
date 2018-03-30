using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

    public Rigidbody rb;
    public float turnSpeed; 
    public float forwardSpeed;
    public float switchlaneSpeed;
    public float swithLaneCoolDown; 
    private Vector3 forwardDirection;
    private Vector3 horizontalDirection;
    private float userInput;
    private float lastTime ;
    private bool allowLeft;
    private bool allowRight;
    private bool gameOver; 

    private GameController gameController;

    Animator anim;


                       
    void Start(){

        //Locate game controller 
        GameObject gameControllerObject = GameObject.FindWithTag("GameController");
        if (gameControllerObject != null)
        {
            gameController = gameControllerObject.GetComponent<GameController>();

        }

        if (gameController == null)
        {
            Debug.Log("Cannot find GameController script");

        }

        //Set up variables 
        forwardDirection = (new Vector3(0.0f,0.0f,10f) - transform.position).normalized;
        horizontalDirection = (new Vector3(44.90f, 0f, 0f));
        lastTime = Time.time;
        allowLeft = true;
        allowRight = true;
        anim = GetComponent<Animator>();
        gameOver = false;


        //Set car location 
        transform.position = new Vector3(0, 0, 0);



    }


    void FixedUpdate()
    {
        
        //Check if the game is running 
        gameOver = gameController.isGameOver();
        if (gameOver == false){
            moveForward();
        }

    }


    void moveForward(){ 

        //Car moving forward 
        transform.position += forwardDirection * forwardSpeed * Time.deltaTime;

        //Left Right User input 
        userInput = Input.GetAxisRaw("Horizontal");

        //Check user allow to turn left and right 
        allowLeft = checkAllowLeft();
        allowRight = checkAllowRight();

        //Moving Left and Right 
        if (userInput == -1.0 && Time.time - lastTime > swithLaneCoolDown && allowLeft)
        {
            switchLeft();
        }
        else if (userInput == 1 && Time.time - lastTime > swithLaneCoolDown && allowRight)
        {
            switchRight();
        }
    
    }


    void switchLeft(){ 
        //Move left 
        //transform.position += -horizontalDirection * switchlaneSpeed * Time.deltaTime;


        transform.position += new Vector3(-40, 0f, 0f);

        //turn the car 
        anim.SetTrigger("SwitchLeft");

        //Reset user input
        userInput = 0;
        //Update cooldown
        lastTime = Time.time;
    }

    void switchRight(){ 
        //Move Right 
        //transform.position += -horizontalDirection * switchlaneSpeed * Time.deltaTime;
        anim.SetTrigger("SwitchRight");
        transform.position += new Vector3(40, 0f, 0f);



        //Reset user input
        userInput = 0;
        //Update cooldown
        lastTime = Time.time;
    }

    bool checkAllowLeft(){

        if(transform.position.x <= -39.0f){ 
            return false; 
        }else{
            return true; 
        }
    }

    bool checkAllowRight(){ 

        if (transform.position.x >= 39.0f)
        {
            return false;
        }
        else
        {
            return true;
        }
    
    }
}

