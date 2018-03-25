using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine; 

public class GameController : MonoBehaviour {

    public static GameController instance; 
    public Button btnStart; 
    private bool startGame; 


	// Use this for initialization
	void Awake () {


        if (instance = this){
            instance = this; 

            startGame = false; 
            btnStart.onClick.AddListener(StartClicked);
        
        }else if (instance != this){

            Destroy(gameObject);
        }


	}


    void StartClicked(){

        startGame = true; 
        btnStart.gameObject.SetActive(false);
        Debug.Log("Done ");

        //Do Something
    
    }

	// Update is called once per frame
	void Update () {
        

	}
}
