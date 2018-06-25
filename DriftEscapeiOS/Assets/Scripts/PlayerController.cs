using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class PlayerController : MonoBehaviour
{
    public Rigidbody rb;

    //Player movement variable 
    public float objectGravity;
    public float turnSpeed;
    public float forwardSpeed;
    private float currentSpeed;
    public float switchlaneSpeed;
    public float swithLaneCoolDown;
    private Vector3 forwardDirection;
    private Vector3 horizontalDirection;
    private string GameOverDriftDirection;
    private string mode = "FORWARD";
    private string previousMode;
    private float startGameMovementCoolDown;
    public float startGameMovementCoolDownDuration;

    //Drift Variable 
    private float turn1;
    private float turn2;
    private float turn3;
    private float offAngle;
    private int turnGear;
    private float inputHo;
    private float coolDown;
    private float lastTime2;
    private bool readyDrift; 

    //Switch lane variable 
    private float userInputHo;
    private float userInputVer;
    private float lastTime;
    private float tileDestroyTime;
    private bool allowLeft;
    private bool allowRight;
    private float laneAdjustment_x;
    private bool laneAdjustmentRequire = false;
    private int onLaneNumber = 0;
    private bool lerping = false;
    private float wantedPosX;
    private bool startTurning = false;

    //Gameover Variable 
    private float t;

    //Tile variable 
    private string nextDriftDir;
    private bool dzTrigger = true;
    private bool tileTrigger = true;
    private GameObject currentInteractRoadExitCollider;
    private Vector3 currentInteractingTileVector;


    //GameController variable 
    private bool gameOverTriggred = false;
    private string gameOverReason = "null";

    //Others Controller variable 
    private GameController gameController;
    private TileController tileController;
    private FXController fxController;
    private DriftSmokeFX driftSmokeGameController;
    private AnimationController animController;
    private ScoreController2 scoreController;
    private CameraController cameraController;
    private SoundEffectController soundEffectController;
    public FireworksController fireWorksController;


    //Swipe Controls 
    public swipeController swipeController;
    private int touchSwipeHo;
    private int touchTap ; 


    //Animation
    Animator anim;
    //private float forwardDir = 0f;
    private string animMode;

    //Sound 
    private bool gameOverSoundEffect = false;

    //Vehicle Gameobject
    public BoxCollider carBoxCollider;
    private int currentVehicleIndex;

    //Perfect Drift 
    private bool perfectDrift;


    //Gameobjects list for all vehicle 
    public List<GameObject> carList ;




    void Start()
    {
        locateAllController();

        driftSmokeGameController.hardOffDriftSmoke();

        resetGameInitialValue();



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
            //Off drift fx
            offDriftFX();
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
            lerping = false;


        }
        else if (mode == "PREFORWARD")
        {
            preForward();
        }

        else if (mode == "GAMEOVER")
        {

            Debug.Log("GAME OVER ! Game Over Reason : "  + gameOverReason );

            if (gameOverReason == "STRAIGHT HIT")
            {
                gameOverStraightHitObstacle();
            }
            else if (gameOverReason == "DRIFT HIT")
            {

                gameOverDrifttHitObstacle();
            }
            else if (gameOverReason == "HIT GROUND")
            {
                gameOverTouchGround(); 
            }
            else if (gameOverReason == "LATE DRIFT")
            {
                gameOverLateDrift(); 
            }
            else if (gameOverReason == "EARLY DRIFT")
            {
                gameOverEarlyDrift();
            }

            turnGear = 0;

        }
        else if (mode == "PAUSED")
        {
            Debug.Log("GAME PAUSED");
        }
        else
        {
            Debug.Log("Variable mode is invalid");
        }

        touchSwipeHo = 0;
        touchTap = 0;
    }

    #region End Game Functions

    private void gameOverDrifttHitObstacle()
    {


        float turnAngle = 0; 

        if(previousMode == "LEFT"){

            turnAngle = -3; 
        }else{
            turnAngle = 3;
        }

        if (t <= 1)
        {

            drift(Mathf.Lerp(turnSpeed, 0, t), turnAngle);
            // .. and increate the t interpolater
            t += 0.5f * Time.deltaTime;
        }



        if (t >= 1 && gameOverTriggred == false )
        {
            gameController.setGameOver(true);

            Debug.Log("ON!");
            fxController.onBrokeDownSmoke();
            offDriftFX();
            driftSmokeGameController.offDriftSmoke();
            cameraController.startLightShake();
            //Fix the car movement; 
            transform.GetComponent<Rigidbody>().isKinematic = true;

            gameOverTriggred = true;
        }



    }

    /// 
    /// GameOver - player hits obstacle 
    /// 
    private void gameOverStraightHitObstacle()
    {
        drift(currentSpeed, 0.02f);
        StartCoroutine(delayStopForwardSpeed(0.5f,2f));
        if (gameOverTriggred == false)
        {

            cameraController.startLightShake();


            animController.playSpinOff();
            fxController.onTyreSketch();
            driftSmokeGameController.onDriftSmoke();


        }
        gameOverTriggred = true;

    }

    /// <summary>
    /// Game over - player failed to tap drift 
    /// </summary>
    private void gameOverLateDrift()
    {
        
        float turnAngle = 0;



        if (t <= 1)
        {
            if (GameOverDriftDirection == "RIGHT")
            {
                turnAngle = 2;

            }
            else if (GameOverDriftDirection == "LEFT")
            {
                turnAngle = -2;
            }
            else if (GameOverDriftDirection == "FORWARD")
            {
                animController.playDriftRight();
            }

            driftSmokeGameController.onDriftSmoke();
            fxController.onSkidMark();


            drift(Mathf.Lerp(turnSpeed, 0, t), turnAngle);
            // .. and increate the t interpolater
            t += 0.8f * Time.deltaTime;
        }


        //When the car stops 
        if (t >= 1 && gameOverTriggred == false)
        {
            gameController.setGameOver(true);

            fxController.onBrokeDownSmoke();
            offDriftFX();
            driftSmokeGameController.offDriftSmoke();
            cameraController.startLightShake();
            //Fix the car movement; 
            transform.GetComponent<Rigidbody>().isKinematic = true;

            gameOverTriggred = true;
        }


    }


    private void gameOverEarlyDrift()
    {

        float turnAngle = 2;



        if (t <= 1)
        {
            if (GameOverDriftDirection == "RIGHT")
            {
                turnAngle = 2;

            }
            else if (GameOverDriftDirection == "LEFT")
            {
                turnAngle = -2;
            }
            else if (GameOverDriftDirection == "FORWARD")
            {
                animController.playDriftRight();
            }

            driftSmokeGameController.onDriftSmoke();
            fxController.onSkidMark();


            if(GameOverDriftDirection == "FORWARD"){
                drift(Mathf.Lerp(forwardSpeed, 0, t), turnAngle);
            }else{
                drift(Mathf.Lerp(turnSpeed, 0, t), turnAngle);
            }

            // .. and increate the t interpolater
            t += 0.8f * Time.deltaTime;
        }


        //When the car stops 
        if (t >= 1 && gameOverTriggred == false)
        {
            gameController.setGameOver(true);

            fxController.onBrokeDownSmoke();
            offDriftFX();
            driftSmokeGameController.offDriftSmoke();
            cameraController.startLightShake();
            //Fix the car movement; 
            transform.GetComponent<Rigidbody>().isKinematic = true;

            gameOverTriggred = true;
        }


    }

    /// <summary>
    /// Game over - player rigitbody touches ground 
    /// </summary>
    private void gameOverTouchGround()
    {

        if (gameOverTriggred == false)
        {


            if (GameOverDriftDirection == "LEFT")
            {

                offAngle = -2f;
            }
            else if (GameOverDriftDirection == "RIGHT")
            {
                offAngle = 2f;
            }



        }


        if (turnSpeed != 0)
        {
            turnSpeed = turnSpeed - 5;
            drift(turnSpeed, offAngle);
        }


        gameController.setGameOver(true);
        fxController.onBrokeDownSmoke();
        offDriftFX();
        gameOverTriggred = true;

        if (turnSpeed == 0)
        {

            //Fix car movement
            transform.GetComponent<Rigidbody>().isKinematic = true;
        }


    }

    #endregion 

    private void refreshCharacterCar(){
        
        //Get player prefeab 
        currentVehicleIndex = PlayerPrefs.GetInt("CharacterSelected");


        //Deactive all car, active the selected one 
        for (int i = 0; i < carList.Count; i ++ ){
            
            //Deactive all car box collider 
            carList[i].transform.GetComponent<BoxCollider>().enabled = false;


            //Deactive not selected car. Active selected car
            if(i == currentVehicleIndex ){
                Debug.Log("Set ACTIVE car number " + i + "Name : " + carList[i].name ); 
                carList[i].SetActive(true);

                //Set up new fx controller;
                fxController = carList[i].GetComponentInChildren<FXController>();
            }else{
                carList[i].SetActive(false);
            }

        }

    }


    public void resetGameInitialValue()
    {
        refreshCharacterCar();
        transform.GetComponent<Rigidbody>().isKinematic = false;
        animMode = "IDLE";
        mode = "FORWARD";
        gameOverReason = "null";
        fxController.offBrokeDownSmoke();
        animController.playIdle();
        offDriftFX();
        forwardDirection = (new Vector3(0.0f, 0.0f, 10f) - transform.position).normalized;
        horizontalDirection = (new Vector3(44.90f, 0f, 0f));
        transform.Rotate(0, 0, 0); // turn to 0 degree
        lastTime = Time.time;
        tileDestroyTime = Time.time;
        allowLeft = true;
        allowRight = true;
        anim = GetComponent<Animator>();
        gameOverTriggred = false;
        previousMode = "NULL";

        forwardSpeed = 350;
        turnSpeed = 200;


        turnGear = 0;
        offAngle = 0;
        onLaneNumber = 0;
        currentSpeed = forwardSpeed;
        laneAdjustmentRequire = false;
        lerping = false;
        startTurning = false;
        startGameMovementCoolDown = Time.time;
        startGameMovementCoolDownDuration = 1f;
        t = 0;
        readyDrift = false;

        scoreController.setAddScore(true);
        perfectDrift = false;
        scoreController.setScoreMultiplier(1);





    }

    void locateAllController()
    {

        //Locate FX controller 
        driftSmokeGameController = transform.Find("FX_Tyre_Smoke").gameObject.GetComponentInChildren<DriftSmokeFX>();


        //Set up animation Controller 
        animController = GameObject.Find("Vehicle").GetComponentInChildren<AnimationController>();



        //Locate game controller 
        GameObject gameControllerObject = GameObject.FindWithTag("GameController");
        if (gameControllerObject != null)
        {
            gameController = gameControllerObject.GetComponent<GameController>();

        }

        //Locate game controller 
        GameObject cameraControllerObject = GameObject.FindWithTag("MainCamera");
        if (cameraControllerObject != null)
        {
            cameraController = cameraControllerObject.GetComponent<CameraController>();

        }

        //Locate tile Controller 
        GameObject tileControllerObject = GameObject.FindWithTag("TileController");
        if (tileControllerObject != null)
        {
            tileController = tileControllerObject.GetComponent<TileController>();

        }

        //Locate Coins Controller 
        GameObject scoreControllerObject = GameObject.FindWithTag("ScoreController");
        if (scoreControllerObject != null)
        {

            scoreController = scoreControllerObject.GetComponent<ScoreController2>();

        }





        //Locate Sound Manager 

        GameObject soundControllerObject = GameObject.FindWithTag("SoundController"); 
        if(soundControllerObject != null){
            soundEffectController = soundControllerObject.GetComponent<SoundEffectController>();
        }




    }

    void onDriftFX()
    {
        driftSmokeGameController.onDriftSmoke();
        fxController.onSkidMark();
        fxController.onTyreSketch();
    }

    void offDriftFX()
    {


        driftSmokeGameController.offDriftSmoke();
        fxController.offSkidMark();
        fxController.offTyreSketch();
    }

    #region Getters and Setters 
    public float getForwardSpeed()
    {
        return forwardSpeed;

    }

    public string getGameOverReason(){
        return gameOverReason; 
    }

    public void setForwardSpeed(float forwardSpeed){
        this.forwardSpeed = forwardSpeed; 
    }
    public void setTurnSpeed(float turnSpeed){
        this.turnSpeed = turnSpeed;
    }

    public void setMode(string mode)
    {
        previousMode = this.mode;
        this.mode = mode;
    }

    public string getPreviousMode()
    {

        return previousMode;
    }

    public string getMode()
    {
        return mode;
    }

    public void setPlayerPos(Vector3 pos)
    {
        transform.position = pos;
    }

    public void setPlayerYAxis(float degree)
    {
        transform.rotation = Quaternion.AngleAxis(degree, Vector3.up);
    }

    public void setTouchSwipeHorizontal(int input)
    {
        this.touchSwipeHo = input;

    }

    public void setTouchTap(int input)
    {
        this.touchTap = input;

    }

    #endregion

    public void resetPlayerRotation()
    {
        //Rotote the player back to direction 
        transform.eulerAngles = new Vector3(0, 0, 0);
    }


    void moveForward()
    {


        transform.Translate(0, 0, Time.deltaTime * forwardSpeed); // move forward

        //Left Right User input 
        userInputHo = Input.GetAxisRaw("Horizontal");

        //Check user allow to turn left and right 
        allowLeft = checkAllowLeft();
        allowRight = checkAllowRight();


        //if (swipeController.SwipeLeft || userInputHo == -1.0)
        if (touchSwipeHo == -1 || userInputHo == -1.0)
        {
            if (Time.time - lastTime > swithLaneCoolDown && allowLeft && (Time.time - startGameMovementCoolDown > startGameMovementCoolDownDuration))
            {

                wantedPosX = switchLeft();
            }


        }
        //else if (swipeController.SwipeRight || userInputHo == 1)
        else if (touchSwipeHo == 1 || userInputHo == 1)
        {
            if (Time.time - lastTime > swithLaneCoolDown && allowRight && (Time.time - startGameMovementCoolDown > startGameMovementCoolDownDuration))
            {
                wantedPosX = switchRight();

            }
        }

        if (lerping == true && laneAdjustmentRequire == false)
        {
            transform.position = Vector3.Lerp(transform.position, new Vector3(wantedPosX, transform.position.y, transform.position.z), Time.deltaTime * 4);

        }


        //If needed to adjust player position back to lane 
        //Lerp towards that direction  
        if (laneAdjustmentRequire == true)
        {

            transform.position = Vector3.Lerp(transform.position, new Vector3(laneAdjustment_x, transform.position.y, transform.position.z), Time.deltaTime * 1f * 10);

            float diff = Mathf.Abs(transform.position.x - laneAdjustment_x);

            if (diff < 5)
            {
                laneAdjustmentRequire = false;

            }
        }

    }

    #region Switch Lane Mechanism 

    float getLerpWantedPos(string direction)
    {

        Vector3 wantedPos = new Vector3(0, 0, 0);


        if (direction == "L")
        {



            if (onLaneNumber == 0)
            {
                wantedPos = new Vector3(currentInteractingTileVector.x - 50, 0, 0);

            }
            else if (onLaneNumber == 1)
            {
                wantedPos = new Vector3(currentInteractingTileVector.x, 0, 0);

            }
            else
            {
                Debug.Log("Player lerping Error");
            }
        }

        if (direction == "R")
        {
            if (onLaneNumber == 0)
            {
                wantedPos = new Vector3(currentInteractingTileVector.x + 50, 0, 0);

            }
            else if (onLaneNumber == -1)
            {
                wantedPos = new Vector3(currentInteractingTileVector.x, 0, 0);

            }
            else
            {
                Debug.Log("Player lerping Error");
            }

        }

        return wantedPos.x;
    }

    float switchLeft()
    {
        Debug.Log("Switched Left once");
        float wantedPosX = getLerpWantedPos("L");

        //transform.position += new Vector3(-50, 0f, 0f);

        //play animation
        animController.playSwitchLeft();

        //Reset user input
        userInputHo = 0;
        //Update cooldown
        lastTime = Time.time;
        onLaneNumber -= 1;
        lerping = true;

        soundEffectController.playSwoosh();
        return wantedPosX;
    }

    float switchRight()
    {

        float wantedPosX = getLerpWantedPos("R");

        //play animation
        animController.playSwitchRight();

        //Reset user input
        userInputHo = 0;

        //Update cooldown
        lastTime = Time.time;
        onLaneNumber += 1;
        lerping = true;


        soundEffectController.playSwoosh();
        return wantedPosX;
    }

    bool checkAllowLeft()
    {

        if (onLaneNumber == -1 || laneAdjustmentRequire == true)
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

        if (onLaneNumber == 1 || laneAdjustmentRequire == true)
        {
            return false;
        }
        else
        {
            return true;
        }

    }
    #endregion 


    #region Collider 
    void OnTriggerEnter(Collider collision)
    {
        if (collision.transform.name == "Perfect Enter Collider" && mode == "PREDRIFT")
        {
            perfectDrift = true;
        }


        if (collision.transform.name == "Perfect Exit Collider" && mode != "GAMEOVER")
        {
            perfectDrift = false; 
        }


        if (collision.transform.tag == "Big Road Object" && mode == "FORWARD" )
        {
            soundEffectController.playHit();
            previousMode = mode;
            mode = "GAMEOVER";
            gameOverReason = "STRAIGHT HIT";
        }

        if (collision.transform.tag == "Big Road Object"  )
        {


            soundEffectController.playHit();
            if(mode == "LEFT" || mode == "RIGHT" ){
                previousMode = mode;
                mode = "GAMEOVER";
                Debug.Log("Drift hit GG" + collision.transform.tag);

                gameOverReason = "DRIFT HIT";
            }

        }

        //When car exit a tile 
        if (collision.transform.name == "Enter Collider")
        {
            tileController.nextTile();
            StartCoroutine(RemoveTileRoad());

            tileDestroyTime = Time.time;

            currentInteractRoadExitCollider = collision.gameObject;

            currentInteractingTileVector = collision.transform.position;
            //collision.transform.gameObject.SetActive(false);

        }


        if (collision.transform.name == "Exit DriftZone Collider" && mode != "GAMEOVER")
        {
            
            collision.transform.gameObject.SetActive(false);

            if (mode == "PREDRIFT")
            {

                if (previousMode == "LEFT")
                {
                    GameOverDriftDirection = "LEFT";
                }
                else if (previousMode == "RIGHT")
                {
                    GameOverDriftDirection = "RIGHT";
                }
                else if (previousMode == "FORWARD")
                {
                    GameOverDriftDirection = "FORWARD";
                }
                soundEffectController.playHit();

                //GameOver when car hits the road and its still in predrift mode. 
                previousMode = mode;
                mode = "GAMEOVER";
                gameOverReason = "LATE DRIFT";



            }
            StartCoroutine(RemoveTileDrift());
            //collision.transform.gameObject.SetActive(false);

        }


        if (collision.transform.name == "Ready Drift DriftZone Collider" && mode != "GAMEOVER")
        {
            collision.transform.gameObject.SetActive(false);
            readyDrift = true;
        }

 


        if (collision.transform.name == "Enter DriftZone Collider" && mode != "GAMEOVER")
        {
            collision.transform.gameObject.SetActive(false);
            //Enter Predrift mode when enter drift zone 
            previousMode = mode;
            mode = "PREDRIFT";
        }

        /*
        if (collision.transform.tag == "Coins")
        {
            scoreController.addCoins();
            collision.transform.gameObject.SetActive(false);

        }

        */


    }

    /// When player object contacts with an object 
    void OnCollisionEnter(Collision collision)
    {





        //Shake camera when player hit's small road object
        if (collision.transform.tag == "Small Road Object")
        {

            cameraController.startLightShake();
            soundEffectController.playKnock();

        }



        if (collision.transform.tag == "Coins")
        {
            scoreController.addCoins();
            collision.transform.parent.gameObject.SetActive(false);
            soundEffectController.playCoins();

        }


        //Gameover when touches the ground 
        if (collision.transform.name == "Ground" && mode != "GAMEOVER")
        {
            soundEffectController.playHit();
            if (mode == "LEFT")
            {
                GameOverDriftDirection = "LEFT";
            }
            else if (mode == "RIGHT")
            {
                GameOverDriftDirection = "RIGHT";
            }

            //Control FX 
            offDriftFX();
            previousMode = mode;
            mode = "GAMEOVER";
            gameOverReason = "HIT GROUND";
        }



        //When car hits Lane Collider
        // reposition car 
        if (collision.transform.tag == "Lane Collider")
        {

            //reposition car 
            //transform.position = new Vector3(collision.transform.position.x, transform.position.y, transform.position.z);

            laneAdjustmentRequire = true;
            laneAdjustment_x = collision.transform.position.x;

            //Remove the lane collider 
            collision.gameObject.transform.parent.gameObject.SetActive(false);


            if (collision.transform.name == "Lane Collider L")
            {

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

    #endregion

    #region Drift

    void driftmode(string mode)
    {

        if (mode == "RIGHT")
        {
            turn1 = 0.7f;
            turn2 = 1.0f;
            turn3 = 1.2f;
        }

        if (mode == "LEFT")
        {

            turn1 = -0.7f;
            turn2 = -1.0f;
            turn3 = -1.2f;

        }

        coolDown = 0.5f;
        lastTime = Time.time;
        inputHo = Input.GetAxisRaw("Horizontal");

        //Click Right
        //bool tmpBool = (swipeController.SwipeRight || inputHo == 1);

        bool tmpBool = (touchSwipeHo == 1  || inputHo == 1);
        if (tmpBool && Time.time - lastTime2 > coolDown && turnGear <= 3)
        {
            if (mode == "LEFT" && turnGear - 1 >= 0)
            {
                turnGear--;
                soundEffectController.playSwoosh();
            }
            else if (mode == "RIGHT" && turnGear + 1 <= 3)
            {
                turnGear++;
                soundEffectController.playSwoosh();
            }

            lastTime2 = Time.time;

        }


        //Click Left
        //tmpBool = (swipeController.SwipeLeft || inputHo == -1);
        tmpBool = (touchSwipeHo == -1 || inputHo == -1);
        if (tmpBool && Time.time - lastTime2 > coolDown && turnGear >= 0)
        {
            if (mode == "LEFT" && (turnGear + 1) <= 3)
            {
                turnGear++;
                soundEffectController.playSwoosh();
            }
            else if (mode == "RIGHT" && turnGear - 1 >= 0)
            {
                turnGear--;
                soundEffectController.playSwoosh();
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

    float slowDown(float currentSpeed, float desireSpeed)
    {

        while (currentSpeed > desireSpeed)
        {

            currentSpeed -= 10;
        }

        return currentSpeed;
    }

    #endregion

    #region Drift Zone 
    void driftZoneMode(string nextTileDirection)
    {

        if (previousMode != "FORWARD")
        {
            //keep drifting until user respond 
            driftmode(previousMode);
        }

        if (previousMode == "FORWARD")
        {
            transform.Translate(0, 0, Time.deltaTime * forwardSpeed);
        }

        //User input 
        userInputVer = Input.GetAxisRaw("Vertical");

        //User input 
        bool earlyDrift; 

        //Game Over when player tap too early 
        if(swipeController.Tap == true && readyDrift == false){
            GameOverDriftDirection = previousMode; 
            previousMode = mode;
            mode = "GAMEOVER";
            gameOverReason = "EARLY DRIFT"; 

        }

        //If input is tap
        //Enter Drift Mode
        bool tmpInput = (touchTap == 1 || userInputVer == -1);

        if (tmpInput && nextTileDirection != "FORWARD" && mode != "GAMEOVER")
        {

            //If player in perfect drift zone. Get Bonus
            if(perfectDrift == true){
                scoreController.increaseMultiplier();
                fireWorksController.playFireworks();
                //SoundEffect 
                soundEffectController.playMultiplier(scoreController.getMultiplier());
            }else{
                //Not Perfect, reset multiplier back to 1; 
                scoreController.resetScoreMultiplier();
            }

            //Active Drift FX
            onDriftFX();

            //Play sound 
            //soundEffectController.playHeaySwoosh();

            //If player came from forward tile. 
            if (previousMode == "FORWARD")
            {

                //Car slows down 
                transform.Translate(0, 0, Time.deltaTime * turnSpeed); // move forward 

                //Shake Camera 
                cameraController.startLongLightShake();

            }

            //Switch mode according to tile curve direction 
            if (nextTileDirection == "LEFT")
            {
                //Switch to left mode 
                previousMode = mode;
                mode = "LEFT";
                turnGear = 0;
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
                turnGear = 0;

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


        }


        //Back to forward Tile 
        if (nextTileDirection == "FORWARD" &&mode != "GAMEOVER")
        {


 
            
            //Swipe Up
            //if (swipeController.Tap || userInputVer == 1)
            if (swipeController.Tap || userInputVer == 1)
            {


                //If player in perfect drift zone. Get Bonus
                if (perfectDrift == true)
                {
                    scoreController.increaseMultiplier();
                    fireWorksController.playFireworks();
                    soundEffectController.playMultiplier(scoreController.getMultiplier());
                }
                else
                {
                    //Not Perfect, reset multiplier back to 1; 
                    scoreController.resetScoreMultiplier();
                }


                //player animation 
                if (animMode == "DriftLeft")
                {
                    animController.playDriftLeftToIdle();

                }
                else if (animMode == "DriftRight")
                {

                    animController.playDriftRightToIdle();
                }

                mode = "PREFORWARD";
                StartCoroutine(delayForward());

                previousMode = mode;

                animMode = "IDLE";

            }


        }

    }

    //Return the angle player should turn to when enter drift zone
    private float angleEnterDriftZone(GameObject currentTile)
    {


        if (currentTile.transform.tag == "UP")
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


    #endregion

    void preForward()
    {
        //Keep car moving 
        transform.Translate(0, 0, Time.deltaTime * turnSpeed);

        transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.Euler(new Vector3(0, 0, 0)), Time.deltaTime * 10);
    }




    #region Courotine 

    IEnumerator delayForward()
    {

        yield return new WaitForSeconds(1f);
        if (mode != "GAMEOVER")
        {

            mode = "FORWARD";
        }


    }

    IEnumerator delayStopForwardSpeed(float slowDownSpeed, float delayTime)
    {





        yield return new WaitForSeconds(delayTime);

        if (mode == "GAMEOVER")
        {
            currentSpeed = Mathf.Lerp(forwardSpeed, 0, t);

            // .. and increate the t interpolater
            t += slowDownSpeed * Time.deltaTime;



            if (currentSpeed == 0)
            {
                gameController.setGameOver(true);
                fxController.onBrokeDownSmoke();
                offDriftFX();
                driftSmokeGameController.offDriftSmoke();

                //Fix the car movement; 
                transform.GetComponent<Rigidbody>().isKinematic = true;
            }

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



    #endregion

}

