using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class GameController : MonoBehaviour {
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
    //public Button btnPause;
    //public GameObject gameObjPause; 

    //Play Button 
    //public Button btnPlay;
    //public GameObject gameObjPlay; 

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

	public GameObject pauseButton;
	public GameObject pauseMenuUI;
	public GameObject gameOverUI;

    void Awake(){
        Application.targetFrameRate = 60;
    }

    // Use this for initialization
    void Start(){
        gameOver = false;
        restart = false;
        restartTrigger = false;
        gameOverCalled = false;


        //Locate game controller 
        GameObject tileControllerObject = GameObject.Find("TileManager");
        if (tileControllerObject != null){
            tileController = tileControllerObject.GetComponent<TileController>();
        }

        if (tileController == null) {
            Debug.Log("Cannot find GameController script");
        }

        //Locate player controller 
        GameObject playerControllerObject = GameObject.Find("Player");
        if (playerControllerObject != null){
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
        //Button btnRestartbtn = btnRestart.GetComponent<Button>();
        //btnRestartbtn.onClick.AddListener(RestartOnClick);
        //gameObjRestart.SetActive(false);
    }

    public bool isRestart(){
        return restart;
    }

    public bool isGameOver(){
        return gameOver;
    }

    public void setGameOver(bool gameOver){
        this.gameOver = gameOver;
    }

    private void Update(){
        if (gameOver == true){
             GameOver();
        }
    }

	/// <summary>
	/// Restart the game.
	/// </summary>
    void Restart(){
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
        //hideGameOverbutton();
	}

	/// <summary>
	/// Restart button on PauseMenu.
	/// </summary>
	public void RestartPause(){
		Restart();
		pauseMenuUI.SetActive (false);
		pauseButton.SetActive (true);
	}

	/// <summary>
	/// Restart button on GameOverMenu.
	/// </summary>
	public void RestartGameOver(){
		Restart();
		gameOverUI.SetActive (false);
		pauseButton.SetActive (true);
	}

    /// <summary>
    /// Pause the game.
    /// </summary>
    public void Pause(){
        //Change player mode
        playerController.setMode("PAUSE");
		//Deactive Score 
        scoreController.setAddScore(false); 
        
		pauseMenuUI.SetActive(true);
		gameObjRestart.SetActive (true);
		pauseButton.SetActive (false);
    }

    /// <summary>
    /// Resume the game.
    /// </summary>
    public void Resume(){
        //Change Player Mode
        playerController.setMode(playerController.getPreviousMode());
        //Active Score 
        scoreController.setAddScore(true);
        
		pauseMenuUI.SetActive(false);
		pauseButton.SetActive (true);
    }

    private void hideGameOverbutton(){ 
        gameObjRestart.SetActive(false);
    }

    IEnumerator showGameOverButtons(){
        //Wait for 3s 
        yield return new WaitForSeconds(2f);
        //Show the button
		Debug.Log("LOL");
        //gameObjRestart.SetActive(true);
        //Set gameOver to true 
		gameOverUI.SetActive(true);
		Debug.Log ("test");
		pauseButton.SetActive (false);
    }

    public void GameOver(){
        //Prevent calling GameOver multiple time 
        gameOverCalled = true; 
        StartCoroutine(showGameOverButtons()); 
    }
}
