using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Advertisements;

public class MainMenuController : MonoBehaviour {

	private string mode; 

	private GameObject carsSelection;
	private Transform carContainer;
	private Transform mainMenuGameObject;
	private Transform carMenuGameObject;
	private Transform settingsGameObject;

	public Camera mainMenuCamera;

	Vector3 mainMenu = new Vector3 (0, 0, 0);
	Vector3 carMenu = new Vector3 (0, 0, -16);
	Vector3 settings = new Vector3 (0, 0, 22);
	private Vector3 newPosition;

	public float smooth = 3; 
	private string zoom;
	private string model;

	private CarsCreation carsCreation;


	private Transform carSelection;
	public Vector3 position; 
	private Vector3 selectedPosition;

	/// <summary>
	/// Gets or sets the mode.
	/// </summary>
	/// <value>The mode.</value>
	public string Mode{
		get{ return mode;}
		set{ mode = value;}
	}
		
	/// <summary>
	/// Gets or sets the zoom.
	/// </summary>
	/// <value>The zoom.</value>
	public string Zoom{
		get{ return zoom;}
		set{ zoom = value;}
	}

	/// <summary>
	/// Gets or sets the model.
	/// </summary>
	/// <value>The model.</value>
	public string Model{
		get{ return model;}
		set{ model = value;}
	}

	void Start(){
		mode = "Main";
		zoom = "mainMenu";

		selectedPosition = new Vector3 (PlayerPrefs.GetFloat ("PositionX"), PlayerPrefs.GetFloat ("PositionY"), PlayerPrefs.GetFloat ("PositionZ"));

		mainMenuGameObject = GameObject.Find ("Canvas").transform.GetChild (0);
		carMenuGameObject = GameObject.Find ("Canvas").transform.GetChild (1);
		settingsGameObject = GameObject.Find ("Canvas").transform.GetChild (2);

		carsSelection = GameObject.Find ("CarsSelection");
		carContainer = GameObject.Find ("CarsSelection").transform;

		carContainer.position = selectedPosition;

		// Locate CarsCreation script
		carsCreation = (CarsCreation) carsSelection.GetComponent(typeof(CarsCreation));
	
		Debug.Log("menucontroller= " + PlayerPrefs.GetInt ("CharacterSelected"));
	}
		
	void Update() {
		clickCar ();
		cameraZooming();
	}

	/// <summary>
	/// Changes the scene.
	/// Main scene build index is 1.
	/// </summary>
	/// <param name="sceneBuildIndex">Scene build index.</param>
	public void ChangeScene (int sceneBuildIndex){
		SceneManager.LoadScene(sceneBuildIndex);
    }


	/// <summary>
	/// Openfacebook this instance.
	/// Opens the url in a browser.
	/// </summary>
	public void openfacebook (){
		Application.OpenURL ("https://www.facebook.com");
	}

	/// <summary>
	/// Clicks the car.
	/// Left button mouse down
	/// Use Physics.Raycast to find which object is being clicked 
	/// Allow to click any object in scene, since a single script attached to the camera does the job
	/// </summary>
	public void clickCar(){
		if (mode == "Main") {
			if (Input.GetMouseButtonDown (0)) {
				RaycastHit hitInfo = new RaycastHit();  
				if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hitInfo) && 
					hitInfo.transform.gameObject.tag == "Player") {
					activeCarMenu ();
					deactiveMainMenu ();
					zoom = "carMenu";
					cameraZooming();
					mode = "Car";
					carsCreation.counter = PlayerPrefs.GetInt ("CharacterSelected");
					//carContainer.transform.position = selectedPosition;
					carContainer.position = selectedPosition;
				} 
			}
		}
	}

	/// <summary>
	/// Cameras the zooming.
	/// </summary>
	public void cameraZooming(){
		if (zoom == "carMenu") {
			newPosition = carMenu;
		} else if (zoom == "settings") {
			newPosition = settings;
		} else {
			newPosition = mainMenu;
		}
		mainMenuCamera.transform.position = Vector3.Lerp(mainMenuCamera.transform.position, newPosition, Time.deltaTime * smooth );
	}

	/// <summary>
	/// Shows the ad.
	/// </summary>
	public void ShowAd () {
		Advertisement.Show ();
	}

	/// <summary>
	/// Actives the main menu.
	/// </summary>
	public void activeMainMenu() {
		mainMenuGameObject.gameObject.SetActive (true);
	}

	/// <summary>
	/// Deactives the main menu.
	/// </summary>
	public void deactiveMainMenu() {
		mainMenuGameObject.gameObject.SetActive (false);
	}

	/// <summary>
	/// Actives the car menu.
	/// </summary>
	public void activeCarMenu() {
		carMenuGameObject.gameObject.SetActive (true);
	}	

	/// <summary>
	/// Deactives the car menu.
	/// </summary>
	public void deactiveCarMenu() {
		carMenuGameObject.gameObject.SetActive (false);
	}	

	/// <summary>
	/// Actives the settings.
	/// </summary>
	public void activeSettings() {
		carsSelection.SetActive (false);
		settingsGameObject.gameObject.SetActive (true);
		zoom = "settings";
	}

	/// <summary>
	/// Deactives the settings.
	/// </summary>
	public void deactiveSettings() {
		carsSelection.SetActive (true);
		settingsGameObject.gameObject.SetActive (false);
		zoom = "mainMenu";
	}
}