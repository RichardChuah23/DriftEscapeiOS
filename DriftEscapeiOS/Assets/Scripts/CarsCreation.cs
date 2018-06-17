using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class CarsCreation : MonoBehaviour {

	private GameObject[] models;

	private string mode = "car";
	public int currentCarIndex;
	public int carAvailability;

	private Transform carContainer;

	private Vector3 position; 
	private Vector3 newPosition;
	private Vector3 selectedPosition; 
	public float smooth = 3; 

	public swipeController swipeController;
	private MainMenuController mainMenuController;
	private SoundEffectController soundEffectController;

	public Button button; 
	public TextMeshProUGUI text; 

	private void Awake() {
		models = new GameObject[transform.childCount];

		// Fill the array with our models
		for (int i = 0; i < transform.childCount; i++)
			models [i] = transform.GetChild (i).gameObject;

		// Get the transform of this game object
		carContainer = GameObject.Find ("CarsSelection").transform;

		// Get the saved index
		currentCarIndex = PlayerPrefs.GetInt ("CharacterSelected");

		// Returned to the saved position
		if (currentCarIndex > 0) {
			selectedPosition = new Vector3 (PlayerPrefs.GetFloat ("PositionX"), PlayerPrefs.GetFloat ("PositionY"), PlayerPrefs.GetFloat ("PositionZ"));
			carContainer.transform.position = selectedPosition;
			newPosition = selectedPosition;
		}

		// Locate MainMenuController script
		GameObject menuManager = GameObject.Find("MenuManager");
		mainMenuController = (MainMenuController) menuManager.GetComponent(typeof(MainMenuController));

		// Locate sound manager
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

	}
		
	/// <summary>
	/// Changings the position.
	/// Allow the user to swipe the cars left and right to select or change the cars model.
	/// </summary>
	public void ChangingPosition() {
		position = carContainer.position;

		if (Input.GetKeyDown (KeyCode.LeftArrow) || swipeController.SwipeLeft) {
			currentCarIndex -= 1;
			if (currentCarIndex < 0 ) {
				currentCarIndex = 0;
			} else {
				newPosition = position + new Vector3 (38f, 0f, 0f);
			}
		}

		if (Input.GetKeyDown (KeyCode.RightArrow) || swipeController.SwipeRight) {
			currentCarIndex += 1;
			if (currentCarIndex < models.Length) {
				newPosition = position + new Vector3 (-38f, 0f, 0f);
			} else {
				currentCarIndex -= 1;
			}
		}

		carContainer.transform.position = Vector3.Lerp(position, newPosition, Time.deltaTime * smooth );

		if (currentCarIndex == PlayerPrefs.GetInt ("CharacterSelected")) {
			//Debug.Log (currentCarIndex +" = same");
			button.gameObject.SetActive (false);
		} else {
			button.gameObject.SetActive (true);
			text.text = "BUY";
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

		// Save the selected model index and position x,y,z
		PlayerPrefs.SetInt ("CharacterSelected", currentCarIndex);
		PlayerPrefs.SetFloat ("PositionX", carContainer.transform.position.x);
		PlayerPrefs.SetFloat ("PositionY", carContainer.transform.position.y);
		PlayerPrefs.SetFloat ("PositionZ", carContainer.transform.position.z);

		// Return to the main menu
		mainMenuController.Mode = "Main";
		mainMenuController.deactiveCarMenu ();
		mainMenuController.activeMainMenu ();
		mainMenuController.Zoom = "mainMenu";
	}

	/// <summary>
	/// Return to main menu
	/// </summary>
	public void Back () {
		soundEffectController.playPop ();
		mode = "return";

		// Return to main menu
		mainMenuController.Mode = "Main";
		mainMenuController.deactiveCarMenu ();
		mainMenuController.activeMainMenu ();
		mainMenuController.Zoom = "mainMenu";

	}

	/// <summary>
	/// Returns the position.
	/// Return to the selected model index and position
	/// </summary>
	public void ReturnPosition(){
		currentCarIndex = PlayerPrefs.GetInt ("CharacterSelected");
		selectedPosition = new Vector3 (PlayerPrefs.GetFloat ("PositionX"), PlayerPrefs.GetFloat ("PositionY"), PlayerPrefs.GetFloat ("PositionZ"));
		carContainer.transform.position = selectedPosition;
		newPosition = selectedPosition;
	}
}