using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarsCreation : MonoBehaviour {

	private List<GameObject> models;

	// selected car -> index and name
	//private int selectionIndex; 
	//private string selectedCarName;

	// counter to prevent index out of bound
	private int counter;

	private Transform carContainer;
	private MainMenuController mainMenuController;

	private Vector3 position; 
	private Vector3 newPosition;
	public float smooth = 3; 

	private void Start() {
		models = new List<GameObject> ();
		foreach (Transform t in transform) {
			models.Add (t.gameObject);
			if (t.gameObject.tag == "Player") {
				//selectionIndex = models.Count - 1;
				//selectedCarName = models [selectionIndex].gameObject.name.ToString();
				counter = models.Count - 1;
			}
		}

		// Locate MainMenuController script
		GameObject menuManager = GameObject.Find("MenuManager");
		mainMenuController = (MainMenuController) menuManager.GetComponent(typeof(MainMenuController));

		// Get the current position
		carContainer = GameObject.Find ("CarsContainer").transform;
	}

	public void Update() {
		if (mainMenuController.Mode == "Car") {
			ChangingPosition();
		}
	}
		
	/// <summary>
	/// Changings the position.
	/// Allow the user to swipe the cars left and right to select or change the model.
	/// </summary>
	public void ChangingPosition() {
		position = carContainer.position;

		if (Input.GetKeyDown (KeyCode.LeftArrow)) {
			counter += 1;
			if (counter < models.Count) {
				newPosition = position + new Vector3 (-38f, 0f, 0f);
			} else {
				counter -= 1;
			}
		}

		if (Input.GetKeyDown (KeyCode.RightArrow)) {
			counter -= 1;
			if (counter < 0 ) {
				counter = 0;
			} else {
				newPosition = position + new Vector3 (38f, 0f, 0f);
			}
		}

		carContainer.transform.position = Vector3.Lerp(position, newPosition, Time.deltaTime * smooth );
	}

	/// <summary>
	/// Return to main menu
	/// </summary>
	public void Back () {
		mainMenuController.Mode = "Main";
		mainMenuController.deactiveCarMenu ();
		mainMenuController.activeMainMenu ();
		mainMenuController.Zoom = false;
	}

}

/*public void Select (int index) {
		if (index < 0 || index >= models.Count)
			return;

		GameObject.Find ("CarsContainer").transform.Find(selectedCarName).tag = "Untagged";
		//models [selectionIndex].SetActive (false);
		selectionIndex = index;
		models [selectionIndex].SetActive (true);
		selectedCarName = models [selectionIndex].gameObject.name.ToString();
		GameObject.Find ("CarsContainer").transform.Find(selectedCarName).tag = "Player";
	}*/