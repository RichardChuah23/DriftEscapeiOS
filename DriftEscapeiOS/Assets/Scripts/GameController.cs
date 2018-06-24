using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
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

    //Tile Controller 
    private TileController tileController;

    //Player Controller 
    private PlayerController playerController;

    //Score Controller 
    private ScoreController2 scoreController; 
    public GameObject gameObjScoreController;
    private SoundEffectController soundController;
    public GameObject gameObjsoundController;

    //Game Center
    //public KTGameCenter gameCenterController; 

    private bool restartTrigger;
    private bool gameOverCalled;

	// UI
	public GameObject pauseButton;
	public GameObject pauseMenuUI;
	public GameObject gameOverUI;

    //Ads 
    public AdsController adsController;
    public int timesBeforeAds;
    public int timesbeforeLongAds;
    public int adsRemoved; 


    void Awake(){
        Application.targetFrameRate = 60;
    }

    private void Update()
    {
        if (gameOver == true)
        {
            GameOver();
        }
    }

    // Use this for initialization
    void Start(){
        
        gameOver = false;
        restart = false;
        restartTrigger = false;
        gameOverCalled = false;

        //Get Player Prefab removeAds Var
        adsRemoved = PlayerPrefs.GetInt("AdsRemoved",0); 

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
        scoreController = gameObjScoreController.GetComponent<ScoreController2>();

        //Locate SoundController
        soundController = gameObjsoundController.GetComponent<SoundEffectController>();
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


	/// <summary>
	/// Restart the game.
	/// </summary>
    void Restart(){
        //Delete all tile 
        tileController.DestroyAllTiles();
        //Spawn the first two tiles 
        tileController.spawnFirstTwoTiles();
        //Set player back to origin point 
        playerController.setPlayerPos(new Vector3(0, 5.5f, 0));

        //Rotote the player back to direction 
        playerController.resetPlayerRotation();

        //Move car forward 
        playerController.resetGameInitialValue();

        //Change Sky Dome colour;
        skyDomeController.changeColor();

        //Begin Starting Camera View; 
        cameraController.resetCamera();
        cameraController.setGameStartCameraView();

        //Reset score
        scoreController.resetScore();



	}

	/// <summary>
	/// Pause game.
	/// </summary>
	public void Pause(){
		//Change player mode
		playerController.setMode("PAUSE");
		//Deactive Score 
		scoreController.setAddScore(false); 
		// Activate Pause Menu
		pauseMenuUI.SetActive(true);
	}

	/// <summary>
	/// Resume game.
	/// </summary>
	public void Resume(){
		//Change Player Mode
		playerController.setMode(playerController.getPreviousMode());
		//Active Score 
		scoreController.setAddScore(true);
		// Deactivate Pause Menu
		pauseMenuUI.SetActive(false);
	}

	/// <summary>
	/// Restart button on PauseMenu.
	/// </summary>
	public void RestartPause(){
		// Restart game
		Restart();
		// Deactivate Pause Menu
		pauseMenuUI.SetActive (false);
	}

	/// <summary>
	/// Return to main menu.
	/// </summary>
	/// <param name="sceneBuildIndex">Scene build index.</param>
	public void ReturnMainMenu(int sceneBuildIndex){
		// Return to Main Menu
		SceneManager.LoadScene(sceneBuildIndex);
	}

	/// <summary>
	/// Restart button on GameOverMenu.
	/// </summary>
	public void RestartGameOver(){
		// Restart game
		Restart();
		// Done set up
		gameOver = false;
        StartCoroutine(setGameOverCalled(false));
		// Deactivate GameOver Menu
		gameOverUI.SetActive (false);
	}
    


    IEnumerator gameOverprocedure(){
        //Wait for 3s 
        yield return new WaitForSeconds(2f);

        if(gameOverCalled == false){
           
            //Show Game over GUI
			gameOverUI.SetActive(true);

            //Submit Score 
            scoreController.submitScore();
            gameOverCalled = true;


            //Run if ads is not removed
            if(adsRemoved == 0){
                
				timesBeforeAds--; 
				
				if(timesBeforeAds == 0 ){
					//adsController.ShowDefaultAd("rewardedVideo");
					
					//longads counter decreament 
					timesbeforeLongAds--;
					
					if (timesbeforeLongAds == 0)
					{
						//play long ads 
						adsController.ShowDefaultAd("rewardedVideo");
						//Reset counter 
						timesbeforeLongAds = 3;
						
					}
					else{
						//Play short ads
						adsController.ShowDefaultAd("video");
					}
					
					//Reset counter 
					timesBeforeAds = 3;
					
				}
				Debug.Log("Times before short Ads " + timesBeforeAds);
				Debug.Log("Times before long Ads " + timesbeforeLongAds);
            }else  if(adsRemoved == 1){
                Debug.Log("No ads Required");
            }




        }

    }


  

    IEnumerator setGameOverCalled(bool gameOverCalled){
        yield return new WaitForSeconds(2f);
        this.gameOverCalled = gameOverCalled;
    }

    public void GameOver(){
        //Prevent calling GameOver multiple time 
        if(gameOverCalled == false){
            scoreController.setAddScore(false);
			StartCoroutine(gameOverprocedure()); 
        }
    }


}
