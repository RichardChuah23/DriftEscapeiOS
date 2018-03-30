using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine; 

public class GameController : MonoBehaviour {

    public static GameController instance; 
    public Button btnRestart;  

    GameObject gameOverBar;
    Collider gameOverCollider;
    private GameObject gameObjRestart;
    private bool gameOver;  



	// Use this for initialization
	void Start () {

        gameOver = false; 


        //Find Restart button and rewrite the button text and disable it 
        gameObjRestart = GameObject.Find("btnRestart") ;
        gameObjRestart.GetComponentInChildren<Text>().text = "Restart ";
        gameObjRestart.SetActive(false);


        Button btn = btnRestart.GetComponent<Button>();
        btn.onClick.AddListener(RestartOnClick);

   

	}


	// Update is called once per frame
	void Update () {
        
        

	}

    void RestartOnClick(){
        gameOver = false;
        gameObjRestart.SetActive(false);
        Debug.Log("Hi");
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
