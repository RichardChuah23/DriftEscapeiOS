using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuController : MonoBehaviour {

	private string mode; 
	private Transform mainMenuGameObject;
	private Transform carContainer;

	public Camera mainMenuCamera;

	/// <summary>
	/// Sets the mode.
	/// </summary>
	/// <param name="value">Value.</param>
	public void setMode(string value){
		mode = value; 
	}

	void Start(){
		mode = "Main";
		mainMenuGameObject = GameObject.Find ("Canvas").transform.GetChild (0);
	}
		
	void Update() {
		clickCar ();
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
	/// 
	/// Left button mouse down
	/// Use Physics.Raycast to find which object is being clicked 
	/// Allow to click any object in scene, since a single script attached to the camera does the job
	/// </summary>
	public void clickCar(){
		if (mode == "Main") {
			if (Input.GetMouseButtonDown (0)) {
				RaycastHit hitInfo = new RaycastHit();
				bool hit = Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hitInfo);
				if (hitInfo.transform.gameObject.tag == "Player") {
					onCarMenu ();
					offMainMenu ();
					mode = "Car Menu";
				} 
			}
		}
	}

	/// <summary>
	/// Ons the main menu.
	/// </summary>
	public void onMainMenu() {
		mainMenuGameObject.Find ("Game_Title").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Play_Button").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Settings_Button").gameObject.SetActive (true);
	}

	/// <summary>
	/// Offs the main menu.
	/// </summary>
	public void offMainMenu() {
		mainMenuGameObject.Find ("Game_Title").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Play_Button").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Settings_Button").gameObject.SetActive (false);
	}

	/// <summary>
	/// Ons the car menu.
	/// </summary>
	public void onCarMenu() {
		mainMenuGameObject.Find ("Coin_Image").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Total_Coins").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Purchase_Button").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Car_Back_Button").gameObject.SetActive (true);
	}	

	/// <summary>
	/// Offs the car menu.
	/// </summary>
	public void offCarMenu() {
		mainMenuGameObject.Find ("Coin_Image").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Total_Coins").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Purchase_Button").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Car_Back_Button").gameObject.SetActive (false);
	}	

	/// <summary>
	/// Ons the settings menu.
	/// </summary>
	public void onSettingsMenu() {
		carContainer.gameObject.SetActive (false);
		mainMenuGameObject.Find ("Settings_Title").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Music_Label").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Music_Toogle").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Sound_Label").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Sound_Toogle").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Settings_Back_Button").gameObject.SetActive (true);
	}

	/// <summary>
	/// Offs the settings menu.
	/// </summary>
	public void offSettingsMenu() {
		carContainer.gameObject.SetActive (true);
		mainMenuGameObject.Find ("Settings_Title").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Music_Label").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Music_Toogle").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Sound_Label").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Sound_Toogle").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Settings_Back_Button").gameObject.SetActive (false);
	}
}

/*
if (mode == "Main") {
	if(Input.GetMouseButtonDown(0)){
		Debug.Log ("Mouse is down");
		RaycastHit hitInfo = new RaycastHit();
		bool hit = Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hitInfo);
		if (hit) {
			Debug.Log("Hit " + hitInfo.transform.gameObject.name);
			if (hitInfo.transform.gameObject.tag == "Player") {
				onCarMenu ();
				offMainMenu ();
				mode = "Car Menu";
				Debug.Log ("It's working!");
			} else {
				Debug.Log ("It's NOT working!");
			}
		} else {
			Debug.Log("No hit");
		}
	}
} */