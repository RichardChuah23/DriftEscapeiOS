using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class GameController : MonoBehaviour
{

    public static GameController instance;
    public GameObject player;
    public Button btnRestart;
    private GameObject gameObjRestart;
    private bool gameOver;
    private bool restart;


    private TileController tileController;
    private PlayerController playerController;

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
        if (playerController == null)
        {
            Debug.Log("Cannot find PLayerController script");

        }






        //Find Restart button and rewrite the button text and disable it 
        gameObjRestart = GameObject.Find("btnRestart");
        //gameObjRestart.SetActive(false);

        Button btn = btnRestart.GetComponent<Button>();
        btn.onClick.AddListener(RestartOnClick);

        gameObjRestart.SetActive(false);


    }

    public bool isRestart()
    {
        return restart;
    }


    public bool isGameOver()
    {

        return gameOver;
    }

    public void setGameOver(bool gameOver){
        this.gameOver = gameOver; 

    }



	private void Update()
	{

        if (gameOver == true && gameOverCalled == false) {
            
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
        playerController.setPlayerPos(new Vector3(0, 0, 0));

        //Rotote the player back to direction 
        playerController.resetPlayerRotation();

        //Move car forward 
        playerController.setMode("FORWARD");


        //Done set up
        //Set up variable.s 
        gameOver = false;
        gameOverCalled = false;
        //Hide all game over buttons  
        hideGameOverbutton();
        

    }

    private void hideGameOverbutton(){ 
        gameObjRestart.SetActive(false);
    }

    IEnumerator showGameOverButtons()
    {

        restartTrigger = false;
        //Wait for 3s 
        yield return new WaitForSeconds(2f);
        //Show the button
        gameObjRestart.SetActive(true);
        //Set gameOver to true 

        restartTrigger = true;
    }


    public void GameOver(){
        
        //Prevent calling GameOver multiple time 
        gameOverCalled = true; 

        //
        StartCoroutine(showGameOverButtons()); 


    }


}
