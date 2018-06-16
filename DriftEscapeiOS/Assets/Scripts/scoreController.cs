using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreController : MonoBehaviour
{

    private bool activeScore;
    private float score;
    private int coins;
    private float forwardSpeed;
    private PlayerController playerController;
    private GameController gameController;

    // Use this for initialization
    void Start()
    {



        //Locate player controller 
        GameObject playerControllerObject = GameObject.Find("Player");
        if (playerControllerObject != null)
        {
            playerController = playerControllerObject.GetComponentInChildren<PlayerController>();

        }


        score = 0;
        coins = 0;
        forwardSpeed = playerController.getForwardSpeed();



    }

    // Update is called once per frame
    void Update()
    {


        if (activeScore == true)
        {


            score += 0.1f * forwardSpeed;
        }






    }

    public void addCoins()
    {

        coins += 1;
    }

    public void setAddScore(bool activeScore)
    {
        this.activeScore = activeScore;
    }




}
