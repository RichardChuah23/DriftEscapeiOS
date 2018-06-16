using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class GameController : MonoBehaviour
{

    public static GameController instance;
    public GameObject player;
    private SkyDomeController skyDomeController; 
    public GameObject SkyDome;
    private bool gameOver;
    private bool restart;

    //Cameracontroller 
    private CameraController cameraController;
    public GameObject MainCamera;

    //Restart button
    public Button btnRestart;
    public GameObject gameObjRestart;

    //Pause Button 
    public Button btnPause;
    public GameObject gameObjPause; 

    //Play Button 
    public Button btnPlay;
    public GameObject gameObjPlay; 


    //Tile Controller 
    private TileController tileController;

    //Player Controller 
    private PlayerController playerController;

    //Score Controller 
    private ScoreController scoreController; 
    public GameObject gameObjScoreController;
    private SoundEffectController soundController;
    public GameObject gameObjsoundController;

    private bool restartTrigger;
    private bool gameOverCalled;

    void Awake()
    {
        Application.targetFrameRate = 60;
    }


    // Use this for initialization
    void Start()
    {
        

        gameOver = false;
        restart = false;
        restartTrigger = false;
        gameOverCalled = false;


        //Locate game controller 
        GameObject tileControllerObject = GameObject.Find("TileManager");
        if (tileControllerObject != null)
        {
            tileController = tileControllerObject.GetComponent<TileController>();

        }

        if (tileController == null)
        {
            Debug.Log("Cannot find GameController script");

        }

        //Locate player controller 
        GameObject playerControllerObject = GameObject.Find("Player");
        if (playerControllerObject != null)
        {
            //playerController = playerControllerObject.GetComponent<PlayerController>();
            playerController = playerControllerObject.GetComponentInChildren<PlayerController>();


        }



        //Locate camera controller 
        cameraController = MainCamera.GetComponent<CameraController>();

        //Locate skydomeController 
        skyDomeController = SkyDome.GetComponent<SkyDomeController>();

        //Locate ScoreController 
        scoreController = gameObjScoreController.GetComponent<ScoreController>();

        //Locate SoundController
        soundController = gameObjsoundController.GetComponent<SoundEffectController>();

        //Restart Button
        Button btnRestartbtn = btnRestart.GetComponent<Button>();
        btnRestartbtn.onClick.AddListener(RestartOnClick);

        //Pause Button
        Button btnPausebtn = btnPause.GetComponent<Button>();
        btnPausebtn.onClick.AddListener(PauseOnClick);

        //Play Button  
        Button btnPlaybtn = btnPlay.GetComponent<Button>();
        btnPlaybtn.onClick.AddListener(PlayOnClick);


        //Play Music
        soundController.playMusic();

        gameObjRestart.SetActive(false);
        gameObjPlay.SetActive(false);


    }

    public bool isRestart()
    {
        return restart;
    }


    public bool isGameOver()
    {

        return gameOver;
    }

    public void setGameOver(bool gameOver)
    {
        this.gameOver = gameOver;

    }



    private void Update()
    {

        if (gameOver == true && gameOverCalled == false)
        {

            GameOver();
        }
    }


    public void RestartOnClick()
    {
        //Delete all tile 
        tileController.DestroyAllTiles();
        //Spawn the first two tiles 
        tileController.spawnFirstTwoTiles();
        //Set player back to origin point 
        playerController.setPlayerPos(new Vector3(0, 4.8f, 0));

        //Rotote the player back to direction 
        playerController.resetPlayerRotation();

        //Move car forward 
        playerController.resetGameInitialValue();

        //Change Sky Dome colour;
        skyDomeController.changeColor();

        //Begin Starting Camera View; 
        cameraController.resetCamera();
        cameraController.setGameStartCameraView();

        //Done set up
        gameOver = false;
        gameOverCalled = false;
        //Hide all game over buttons  
        hideGameOverbutton();
       }


    //Pause the game 
    public void PauseOnClick(){
       
        //Change player mode
        playerController.setMode("PAUSE");
        //Deactive Score 
        scoreController.setAddScore(false); 
        //Deactivate Pause Button activate Play Button.
        gameObjPlay.SetActive(true);
        gameObjPause.SetActive(false);


    

    }



    //Play the game 
    public void PlayOnClick()
    {


        //Change Player Mode
        playerController.setMode(playerController.getPreviousMode());
        //Active Score 
        scoreController.setAddScore(true);
        //Deactive Play Button, Activate Pause Button
        gameObjPlay.SetActive(false);
        gameObjPause.SetActive(true);

    }





    private void hideGameOverbutton(){ 
        gameObjRestart.SetActive(false);
    }

    IEnumerator showGameOverButtons()
    {

        //Wait for 3s 
        yield return new WaitForSeconds(2f);
        //Show the button
        gameObjRestart.SetActive(true);
        //Set gameOver to true 


    }


    public void GameOver(){
        
        //Prevent calling GameOver multiple time 
        gameOverCalled = true; 

        //
        StartCoroutine(showGameOverButtons()); 


    }


}
