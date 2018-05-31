using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuController : MonoBehaviour {

	private Transform mainMenuGameObject;
	private Transform carContainer;

	public Camera mainMenuCamera;
	public float moveSpeed;
	private float inputHorizontal; 

	private string mode; 

	AudioListener mainMenuCameraAudioLis;

	void Start(){

		mode = "Main Menu";
		mainMenuGameObject = GameObject.Find ("Canvas").transform.GetChild (0);
		//carContainer = GameObject.Find ("Main Menu Scenary").transform.GetChild (5);
		mainMenuCameraAudioLis = mainMenuCamera.GetComponent<AudioListener> ();
	}

	void Update() {
		if(Input.GetMouseButtonDown(0)){

			Debug.Log ("Mouse is down");

			RaycastHit hitInfo = new RaycastHit();
			bool hit = Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hitInfo);
			if (hit) {
				Debug.Log("Hit " + hitInfo.transform.gameObject.name);
				if (hitInfo.transform.gameObject.tag == "Player") {
					onCarMenu ();
					offMainMenu ();
					Debug.Log ("It's working!");
				} else {
					Debug.Log ("It's NOT working!");
				}
			} else {
				Debug.Log("No hit");
			}
		}
			
		/*if (Input.GetKey ("left")) {
			print("left arrow key is held down");
			//carContainer.transform.position += new Vector3 (0f, 0f, -50.5f);
			//Debug.Log (carContainer.transform.position);
		}

		if (Input.GetKey ("right")) {


			Vector3 wantedPos = carContainer.transform.position + new Vector3 (0f, 0f, 50.5f); 
			print("right arrow key is held down");
			//carContainer.transform.position = Vector3.Lerp (carContainer.transform.position, wantedPos, Time.deltaTime * moveSpeed);


			carContainer.transform.position += new Vector3 (0f, 0f, 50.5f); 
			Debug.Log (carContainer.transform.position);
		}*/

		/*inputHorizontal = Input.GetAxisRaw ("Horizontal");
		Debug.Log (inputHorizontal);
		if (inputHorizontal == 1) {
			cameraSwipeRight ();
		}		
		if (inputHorizontal == -1) {
			cameraSwipeLeft ();
		}	*/

	}
	public void onMainMenu() {
		mainMenuGameObject.Find ("Game_Title").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Play_Button").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Settings_Button").gameObject.SetActive (true);
	}

	public void offMainMenu() {
		mainMenuGameObject.Find ("Game_Title").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Play_Button").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Settings_Button").gameObject.SetActive (false);
	}

	public void onCarMenu() {
		mainMenuGameObject.Find ("Coin_Image").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Total_Coins").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Purchase_Button").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Left").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Right").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Car_Back_Button").gameObject.SetActive (true);
	}	

	public void offCarMenu() {
		mainMenuGameObject.Find ("Coin_Image").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Total_Coins").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Purchase_Button").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Left").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Right").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Car_Back_Button").gameObject.SetActive (false);
	}	

	public void onSettingsMenu() {
		carContainer.gameObject.SetActive (false);
		mainMenuGameObject.Find ("Settings_Title").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Music_Label").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Music_Toogle").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Sound_Label").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Sound_Toogle").gameObject.SetActive (true);
		mainMenuGameObject.Find ("Settings_Back_Button").gameObject.SetActive (true);
	}

	public void offSettingsMenu() {
		carContainer.gameObject.SetActive (true);
		mainMenuGameObject.Find ("Settings_Title").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Music_Label").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Music_Toogle").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Sound_Label").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Sound_Toogle").gameObject.SetActive (false);
		mainMenuGameObject.Find ("Settings_Back_Button").gameObject.SetActive (false);
	}
    
	public void ChangeScene (int changeTheScene){
        SceneManager.LoadScene(changeTheScene);
    }

	public void facebook (){
		Application.OpenURL ("https://www.facebook.com");
	}


	void cameraSwipeRight(){
		mainMenuCamera.transform.position += new Vector3 (20, 0, 0);


	}

	void cameraSwipeLeft(){
		mainMenuCamera.transform.position += new Vector3 (-20, 0, 0);


	}


}
