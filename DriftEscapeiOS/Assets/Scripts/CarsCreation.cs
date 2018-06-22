using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CarsCreation : MonoBehaviour {

	private static CarsCreation instance;
	public static CarsCreation Instance{get{ return instance;}}

	private bool moving = false;
	public float smooth = 1f;
	public int currentCarIndex = 0;
	public int coins = 0;
	public int carAvailability = 1;
	public float carPositionZ = 0;
	private string mode = "car";

	/*
	 * Canvas
	 * */
	public TextMeshProUGUI coinsText;
	public TextMeshProUGUI text;

	/*
	 * GameObject
	 * */
	public GameObject[] models;
	public GameObject buyButton;
	public GameObject confirmButton;
	public GameObject GoImage;
	public GameObject lockImage;

	/*
	 * Script
	 * */
	public swipeController swipeController;
	private MainMenuController mainMenuController;
	private SoundEffectController soundEffectController;

	/*
	 * Transform
	 * */
	private Transform carContainer;

	/*
	 * Vector3
	 * */
	private Vector3 position; 
	private Vector3 newPosition;
	private Vector3 selectedPosition;
	private Vector3 mainMenuCarContainer = new Vector3(-120, 0, 0);
	private Vector3 inGameCarContainer = new Vector3(-120, 200, 0);



    /*
    All Cars
    0 Myvi 
    1 AE86 
    2 Pick Up
    3 Police
    4 Mazda R-7  
    5 Muscle 
    6 Ferarri 
     */

	private void Awake() {
		instance = this;
		DontDestroyOnLoad (gameObject);

		models = new GameObject[transform.childCount];

		// Fill the array with our models
		for (int i = 0; i < transform.childCount; i++)
			models [i] = transform.GetChild (i).gameObject;

		// Get the transform of this game object
		carContainer = GameObject.Find ("CarsSelection").transform;

		if(PlayerPrefs.HasKey("CharacterSelected")){
			// We had a previous session
			currentCarIndex = PlayerPrefs.GetInt("CharacterSelected");
			coins = PlayerPrefs.GetInt ("Coins");
			carAvailability = PlayerPrefs.GetInt ("CarAvailability", 1);
			carPositionZ = PlayerPrefs.GetFloat ("PositionZ");
		} else{
			Save ();
		}

		// Returned the saved total coins
		coinsText.text = coins.ToString ();

		// Returned to the saved position
		if (currentCarIndex > 0) {
			selectedPosition = new Vector3 (carPositionZ, 0f, 0f);
			carContainer.transform.position = selectedPosition;
			newPosition = selectedPosition;
			carPositionZ = PlayerPrefs.GetFloat ("PositionZ");
		} else {
			ReturnPosition ();
		}

		// Locate MainMenuController script
		GameObject menuManager = GameObject.Find("MenuManager");
		mainMenuController = (MainMenuController) menuManager.GetComponent(typeof(MainMenuController));

		// Locate SoundManager script
		GameObject soundManager = GameObject.Find("SoundManager");
		soundEffectController = (SoundEffectController) soundManager.GetComponent(typeof(SoundEffectController));
	}

	public void Update() {
		if (mainMenuController.Mode == "Car") {
			ChangingPosition ();
		}

		if (mode == "return") {
			ReturnPosition ();
			mode = "car";
		}

		if (mainMenuController.Mode == "Game") {
			carContainer.transform.position = inGameCarContainer;
		} else if (mainMenuController.Mode == "Main") {
			carContainer.transform.position = mainMenuCarContainer;
		}

	}
		
	/// <summary>
	/// Changings the position.
	/// Allow the user to swipe the cars left and right to select or change the cars model.
	/// </summary>
	public void ChangingPosition() {
		position = new Vector3(carPositionZ, 0f, 0f);

		if ((Input.GetKeyDown (KeyCode.LeftArrow) || swipeController.SwipeLeft) && moving == false) {
			currentCarIndex -= 1;
			carPositionZ += 40;
			if (currentCarIndex < 0) {
				currentCarIndex = 0;
				carPositionZ -= 40;
			} else {
				StartCoroutine(wait());
				newPosition = position + new Vector3 (40f, 0f, 0f);
			}
		}

		if ((Input.GetKeyDown (KeyCode.RightArrow) || swipeController.SwipeRight) && moving == false) {
			currentCarIndex += 1;
			carPositionZ -= 40;
			if (currentCarIndex < models.Length) {
				StartCoroutine(wait()); 
				newPosition = position + new Vector3 (-40f, 0f, 0f);
			} else {
				currentCarIndex -= 1;
				carPositionZ += 40;
			}
		} 

		carContainer.transform.position = Vector3.Lerp(carContainer.transform.position, newPosition, Time.deltaTime * smooth );

		if ((carAvailability & 1 << (currentCarIndex)) == 1 << currentCarIndex) {
			// Have the car and is the selected car
			if (currentCarIndex == PlayerPrefs.GetInt ("CharacterSelected")) {
				buyButton.SetActive (false);
				confirmButton.SetActive (false);
				GoImage.SetActive (true);
				lockImage.SetActive (false);
			} else {
				// Have the car and is NOT the selected car
				buyButton.SetActive (false);
				confirmButton.SetActive (true);
				GoImage.SetActive (false);
				lockImage.SetActive (false);
			}
		} else {
			// Do not have the car
			buyButton.SetActive (true);
			confirmButton.SetActive (false);
			GoImage.SetActive (false);
			lockImage.SetActive (true);
		}
	}

	/// <summary>
	/// Return to main menu
	/// </summary>
	public void Back () {
		soundEffectController.playPop ();
		mode = "return";
		// Return to main menu
		mainMenuController.Mode = "Main";
		mainMenuController.closeCarMenu ();
		mainMenuController.openMainMenu ();
		mainMenuController.Zoom = "mainMenu";
	}

	/// <summary>
	/// Buy this instance.
	/// User perform buy action.
	/// </summary>
	public void Buy(){
		//sound effect
		soundEffectController.playPop ();
		int cost = 10;
		if (coins >= cost) {
			coins -= cost;
			carAvailability += 1 << currentCarIndex;
			Save ();
			coinsText.text = coins.ToString ();
			GoImage.SetActive (true);
			buyButton.SetActive (false);
			lockImage.SetActive (false);
		}
	}

	/// <summary>
	/// Confirm this instance.
	/// Save the selected model's information
	/// Return to the main menu 
	/// </summary>
	public void Confirm(){
		//sound effect
		soundEffectController.playPop ();
		// Save PlayerPrefs
		Save ();
		// Return to the main menu
		mainMenuController.Mode = "Main";
		mainMenuController.closeCarMenu ();
		mainMenuController.openMainMenu ();
		mainMenuController.Zoom = "mainMenu";
	}

	/// <summary>
	/// Save PlayerPrefs.
	/// </summary>
	private void Save(){
		PlayerPrefs.SetInt ("CharacterSelected", currentCarIndex);
		PlayerPrefs.SetInt ("Coins", coins);
		PlayerPrefs.SetInt ("CarAvailability", carAvailability);
		PlayerPrefs.SetFloat ("PositionZ", carPositionZ);
	}

	/// <summary>
	/// Returns the position.
	/// Return to the selected model index and position
	/// </summary>
	public void ReturnPosition(){
		currentCarIndex = PlayerPrefs.GetInt ("CharacterSelected");
		carPositionZ = PlayerPrefs.GetFloat ("PositionZ", carPositionZ);
		selectedPosition = new Vector3 (carPositionZ, 0f, 0f);
		carContainer.transform.position = selectedPosition;
		newPosition = selectedPosition;
	}

	IEnumerator wait(){
		moving = true;
		yield return new WaitForSeconds (0.5f);
		moving = false;
	}
}