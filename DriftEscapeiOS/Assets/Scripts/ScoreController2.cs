using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreController2 : MonoBehaviour {

	private bool activeScore;
	private int score;
	private int coins;
	private float forwardSpeed;
	private PlayerController playerController;
	private GameController gameController;
	private int currentHighScore;
	private int scoreMultiplier;

	//GUI
	public TextMeshProUGUI coinText, scoreText, gameOverScoreText, highScoreText;
	public TextMeshProUGUI scoreMultiplierText;

	/*
	 * GameObject
	 * */
	public GameObject newBestScoreImage;


	private float scoreMultplierTextSize;
	static float t = 0.0f ;
	private bool playTextSize = false; 


	//GameCenter 
	public KTGameCenter gameCenterController;

	//Sound Controller 
	public SoundEffectController soundController;

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
		scoreMultiplier = 1; 
		forwardSpeed = playerController.getForwardSpeed();

		//Get Player current coin
		coins  = PlayerPrefs.GetInt("Coins");
		//Get Player current highscore
		currentHighScore = PlayerPrefs.GetInt("HighScore");
		coinText.SetText(coins.ToString());
		scoreText.SetText(score.ToString());

		scoreMultplierTextSize = scoreMultiplierText.fontSize;
		playTextSize = true;

		increaseTextSize();
		highScoreText.SetText(currentHighScore.ToString());
	}

	// Update is called once per frame
	void Update()
	{


		if (activeScore == true)
		{


			score += Mathf.FloorToInt(forwardSpeed/2)  *  scoreMultiplier ;

			scoreText.SetText(score.ToString());
			gameOverScoreText.SetText(score.ToString());

			if(playTextSize == true){
				increaseTextSize();
			}

		}









	}


	public void increaseMultiplier(){

		if(scoreMultiplier <= 8 ){
			scoreMultiplier += 1; 

			//GUI
			scoreMultiplierText.SetText("x" + scoreMultiplier);
			playTextSize = true;
			increaseTextSize();

			//SoundEffect 
			soundController.playMultiplier(scoreMultiplier);
		}


	}

	public void setScoreMultiplier(int mult){
		scoreMultiplier = mult;
		scoreMultiplierText.SetText("x" + scoreMultiplier);
	}

	public void resetScoreMultiplier(){

		if(scoreMultiplier > 1 ){
			soundController.playLostMultiplier();
		}


		scoreMultiplier = 1;
		Debug.Log("Bad Drift ! " + scoreMultiplier);
		scoreMultiplierText.SetText("x" + scoreMultiplier);

	}



	public void addCoins()
	{

		coins += 1;
		//save it to player prefs 
		PlayerPrefs.SetInt("Coins", coins);
		coinText.SetText(coins.ToString());



	}

	public void setAddScore(bool activeScore)
	{
		this.activeScore = activeScore;
	}

	public int getScore(){
		return score; 
	}


	public void resetScore()
	{
		this.score = 0;
	}

	public void submitScore(){

		//Submit to GameCenter
		gameCenterController.SubmitScore(score, "ScoreLeaderBoard");

		if (score > currentHighScore) {
			//Submit HighScore to player prefeb 
			PlayerPrefs.SetInt ("HighScore", score);
			currentHighScore = score;

			Debug.Log ("Submmited Score, score " + score + " High Score: " + currentHighScore);

			highScoreText.SetText (currentHighScore.ToString ());
			newBestScoreImage.SetActive (true);

		} else {
			newBestScoreImage.SetActive (false);
		}

	}


	private void increaseTextSize(){


		scoreMultiplierText.fontSize = Mathf.Lerp(100, scoreMultplierTextSize, t);

		// .. and increate the t interpolater
		t += 0.9f * Time.deltaTime  ;



		if (t > 1.0f)
		{
			playTextSize = false;
			t = 0f;


		}

	}



}
