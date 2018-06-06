using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarsCreation : MonoBehaviour {

	//private List<GameObject> models;
	private GameObject[] models;

	// selected car -> index and name
	//private int selectionIndex; 
	private string selectedCarName;

	private string mode = "car";

	// counter to prevent index out of bound
	public int counter; 

	private Transform carContainer;
	private MainMenuController mainMenuController;

	private Vector3 position; 
	private Vector3 newPosition;
	private Vector3 selectedPosition; 
	public float smooth = 3; 

	public swipeController swipeController;

	public Vector3 Position{
		get{ return position;}
		set{ position = value;}
	}

	private void Awake() {
		//PlayerPrefs.SetInt ("CharacterSelected", 0);
		counter = PlayerPrefs.GetInt ("CharacterSelected");
		Debug.Log ("carscreation= " + counter);

		models = new GameObject[transform.childCount];

		// Fill the array with our models
		for (int i = 0; i < transform.childCount; i++)
			models [i] = transform.GetChild (i).gameObject;


		// Toggle off thier renderer
		//foreach (GameObject go in models)
			//go.SetActive (false);

		// Toggle on the selected character
		//if (models [counter])
			//models [counter].SetActive (true);



		// Locate MainMenuController script
		GameObject menuManager = GameObject.Find("MenuManager");
		mainMenuController = (MainMenuController) menuManager.GetComponent(typeof(MainMenuController));

		// Get the transform of this game object
		carContainer = GameObject.Find ("CarsSelection").transform;
	}

	public void Update() {
		if (mainMenuController.Mode == "Car") {
			//position = carContainer.position;
			//Debug.Log ("test " + position);
			ChangingPosition ();
		}
		if (mode == "return") {
			ReturnPosition ();
			mode = "car";
		}
			
	}
		
	/// <summary>
	/// Changings the position.
	/// Allow the user to swipe the cars left and right to select or change the model.
	/// </summary>
	public void ChangingPosition() {
		//Debug.Log (counter);
		position = carContainer.position;

		if (Input.GetKeyDown (KeyCode.LeftArrow) || swipeController.SwipeLeft) {
			// Toggle on the current model
			//models[counter].SetActive(false);

			counter -= 1;
			if (counter < 0 ) {
				counter = 0;
			} else {
				newPosition = position + new Vector3 (38f, 0f, 0f);
			}

			// Toggle on the new model
			//models[counter].SetActive(true);
		}

		if (Input.GetKeyDown (KeyCode.RightArrow) || swipeController.SwipeRight) {
			// Toggle on the current model
			//models[counter].SetActive(false);

			counter += 1;
			if (counter < models.Length) {
				newPosition = position + new Vector3 (-38f, 0f, 0f);
			} else {
				counter -= 1;
			}

			// Toggle on the new model
			//models[counter].SetActive(true);
		}

		carContainer.transform.position = Vector3.Lerp(position, newPosition, Time.deltaTime * smooth );
	}

	public void Confirm(){
		PlayerPrefs.SetInt ("CharacterSelected", counter);
		PlayerPrefs.SetFloat ("PositionX", carContainer.transform.position.x);
		PlayerPrefs.SetFloat ("PositionY", carContainer.transform.position.y);
		PlayerPrefs.SetFloat ("PositionZ", carContainer.transform.position.z);
		mainMenuController.Mode = "Main";
		mainMenuController.deactiveCarMenu ();
		mainMenuController.activeMainMenu ();
		mainMenuController.Zoom = "mainMenu";

	}

	/// <summary>
	/// Return to main menu
	/// </summary>
	public void Back () {
		mode = "return";
		ReturnPosition ();
		mainMenuController.Mode = "Main";
		mainMenuController.deactiveCarMenu ();
		mainMenuController.activeMainMenu ();
		mainMenuController.Zoom = "mainMenu";
	}

	public void ReturnPosition(){
		selectedPosition = new Vector3 (PlayerPrefs.GetFloat ("PositionX"), PlayerPrefs.GetFloat ("PositionY"), PlayerPrefs.GetFloat ("PositionZ"));
		carContainer.transform.position = selectedPosition;
	}
}