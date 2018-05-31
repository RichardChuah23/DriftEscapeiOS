using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarsCreation : MonoBehaviour {

	private List<GameObject> models;
	private int selectionIndex; 
	private string selectedCarName;
	private int counter;
	private Transform carContainer;

	private MainMenuController mainMenuController;

	private void Start() {
		carContainer = GameObject.Find ("CarsContainer").transform;
		models = new List<GameObject> ();
		foreach (Transform t in transform) {
			models.Add (t.gameObject);
			if (t.gameObject.tag == "Player") {
				//t.gameObject.SetActive (true);
				selectionIndex = models.Count - 1;
				selectedCarName = models [selectionIndex].gameObject.name.ToString();
				counter = models.Count - 1;
			} else {
				Debug.Log ("other");
				//t.gameObject.SetActive (false);
			}
		}


		// Locate MainMenuController script
		GameObject menuManager = GameObject.Find("MenuManager");
		mainMenuController = (MainMenuController) menuManager.GetComponent(typeof(MainMenuController));
	}

	public void Update() {

	}

	public void Select (int index) {
		if (index < 0 || index >= models.Count)
			return;

		GameObject.Find ("CarsContainer").transform.Find(selectedCarName).tag = "Untagged";
		//models [selectionIndex].SetActive (false);
		selectionIndex = index;
		models [selectionIndex].SetActive (true);
		selectedCarName = models [selectionIndex].gameObject.name.ToString();
		GameObject.Find ("CarsContainer").transform.Find(selectedCarName).tag = "Player";
	}

	public void Left (int index) {
		counter += 1;
		if (counter < models.Count) {
			carContainer.transform.position += new Vector3 (-35f, 0f, 0f);
		} else {
			counter -= 1;
		}
		Debug.Log (counter);
	}

	public void Right (int index) {
		counter -= 1;
		if (counter < 0 ) {
			counter = 0;
		} else {
			carContainer.transform.position += new Vector3 (35f, 0f, 0f);
		}
		Debug.Log (counter);
	}

	public void Back () {
		mainMenuController.setMode ("Main Menu");
		mainMenuController.offCarMenu ();
		mainMenuController.onMainMenu ();
	}

}
