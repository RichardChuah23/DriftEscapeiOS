using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine; 

public class GameController : MonoBehaviour {

    public static GameController instance;
    public GameObject player; 
    public Button btnRestart;  
    private GameObject gameObjRestart;
    private bool gameOver;
    private bool restart; 


    private TileController tileController;
    private PlayerController playerController; 



	// Use this for initialization
	void Start () {

        gameOver = false;
        restart = false; 


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

        if (tileController == null)
        {
            Debug.Log("Cannot find PLayerController script");

        }


        //Find Restart button and rewrite the button text and disable it 
        gameObjRestart = GameObject.Find("btnRestart") ;
        //gameObjRestart.SetActive(false);

        Button btn = btnRestart.GetComponent<Button>();
        btn.onClick.AddListener(RestartOnClick);


	}


	// Update is called once per frame
	void Update () {
        
        

	}

    public void RestartOnClick(){

        gameOver = false;
        restart = true;
        gameObjRestart.SetActive(false);


        //Delete all tile 
        tileController.DestroyAllTiles();

        //Spawn the first two tiles 
        tileController.spawnFirstTwoTiles();

        //Set player back to origin point 
        playerController.setPlayerPos(new Vector3(0, 0, 0));

        //Move car forward 
        playerController.setMode("FORWARD"); 



    }




    public bool isRestart(){
        return restart; 
    }


    public bool isGameOver(){

        return gameOver; 
    }


    public void GameOver(){
        //Show the button
        gameObjRestart.SetActive(true);
        //Set gameOver to true 
        gameOver = true; 


    }
}
