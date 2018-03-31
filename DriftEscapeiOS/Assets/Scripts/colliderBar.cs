using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class colliderBar : MonoBehaviour {


    private Collider gameCollider;
    private GameController gameController;

	// Use this for initialization
	void Start () {
        gameCollider = gameObject.GetComponent<Collider>();

        GameObject gameControllerObject = GameObject.FindWithTag("GameController");

        if (gameControllerObject != null)
        {
            gameController = gameControllerObject.GetComponent<GameController>();

        }

        if (gameController == null)
        {
            Debug.Log("Cannot find GameController script");

        }

       
	}
	
	// Update is called once per frame
	void Update () {

	}


    void OnTriggerEnter(Collider other)
	{


        gameController.GameOver();

	}
}
