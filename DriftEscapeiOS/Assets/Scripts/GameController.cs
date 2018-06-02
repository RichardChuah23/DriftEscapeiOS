using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class GameController : MonoBehaviour
{

    public static GameController instance;
    public GameObject player;
    private bool gameOver;
    private bool restart;

    //Restart button
    public Button btnRestart;
    private GameObject gameObjRestart;

    //Pause buitton
    public Button btnPause;
    private GameObject gameObjPause; 



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
        gameObjPause = GameObject.Find("btnPause"); 


        //Restart Button
        Button btnRestartbtn = btnRestart.GetComponent<Button>();
        btnRestartbtn.onClick.AddListener(RestartOnClick);

        //Pause Button
        Button btnPausebtn = btnPause.GetComponent<Button>();
        btnPausebtn.onClick.AddListener(PauseOnClick);

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


        //Done set up
        gameOver = false;
        gameOverCalled = false;
        //Hide all game over buttons  
        hideGameOverbutton();


    }

    public void PauseOnClick(){

        Debug.Log("Pressed");
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
