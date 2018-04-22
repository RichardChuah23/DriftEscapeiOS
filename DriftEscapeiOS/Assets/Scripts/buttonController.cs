using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class buttonController : MonoBehaviour
{

    private GameController gameController;


	private void Start()
	{

        //Locate game controller 
        GameObject gameControllerObject = GameObject.FindWithTag("GameController");
        if (gameControllerObject != null)
        {
            gameController = gameControllerObject.GetComponent<GameController>();

        }
        else
        {
            Debug.Log("Cannot find GameController script");

        }

	}

	// Use this for initialization
	public void restartButtonPressed()
    {
        Debug.Log("Pressed");
        gameController.RestartOnClick(); 
    }

}