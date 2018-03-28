using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine; 

public class GameController : MonoBehaviour {

    public static GameController instance; 
    //public Button btnStart; 
    //private bool startGame;

    GameObject gameOverBar;
    Collider gameOverCollider; 



	// Use this for initialization
	void Awake () {


        if (instance = this){
            instance = this; 
            //btnStart.onClick.AddListener(StartClicked);
        
        }else if (instance != this){

            Destroy(gameObject);
        }


	}


	// Update is called once per frame
	void Update () {
        /*  
        gameOverBar = GameObject.FindWithTag("PotHole-Collider");
        gameOverCollider = gameOverBar.GetComponent<Collider>();

        Debug.Log(gameOverCollider.isTrigger);
        if(gameOverCollider.isTrigger == true){
            Debug.Log("Game Over");
        }

        */
        

	}


    void StartClicked()
    {

        //startGame = true;
        //btnStart.gameObject.SetActive(false);

        //Do Something

    }


    public void GameOver(){
        Debug.Log("Game Over");

    }
}
