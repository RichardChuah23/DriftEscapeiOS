using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuController : MonoBehaviour {

	private Transform mainMenuGameObject;
	private Transform carMenuGameObject;

	private GameObject scenary;

	public Camera mainMenuCamera;
	public Camera carMenuCamera;

	AudioListener mainMenuCameraAudioLis;
	AudioListener carMenuCameraAudioLis;

	void Start(){
		mainMenuGameObject = GameObject.Find ("Canvas").transform.GetChild (0);
		carMenuGameObject = GameObject.Find ("Canvas").transform.GetChild (1); 

		scenary = GameObject.Find ("Main Menu Scenary");

		// Get cameras audio listener
		mainMenuCameraAudioLis = mainMenuCamera.GetComponent<AudioListener> ();
		carMenuCameraAudioLis = carMenuCamera.GetComponent<AudioListener> ();

		// Disable car menu camera and audio listener
		carMenuCamera.enabled = false;
		carMenuCameraAudioLis.enabled = false;
	}

	void Update() {
		if(Input.GetMouseButtonDown(0)){

			Debug.Log ("Mouse is down");

			RaycastHit hitInfo = new RaycastHit();
			bool hit = Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hitInfo);
			if (hit) {
				Debug.Log("Hit " + hitInfo.transform.gameObject.name);
				if (hitInfo.transform.gameObject.tag == "Player") {
					Debug.Log ("It's working!");

					mainMenuGameObject.gameObject.SetActive (false);
					scenary.SetActive (false);
					carMenuGameObject.gameObject.SetActive (true);
				} else {
					Debug.Log ("It's NOT working!");
				}
			} else {
				Debug.Log("No hit");
			}
		}
		switchCamera ();
	}

	void switchCamera () {
		// Car Menu set active
		if (carMenuGameObject.gameObject.activeInHierarchy){
			Debug.Log ("Active");

			// Enable car menu camera and audio listener
			carMenuCamera.enabled = true;
			carMenuCameraAudioLis.enabled = true;

			// Disable main menu camera and audio listener
			mainMenuCamera.enabled = false;
			mainMenuCameraAudioLis.enabled = false;
		} else {
			Debug.Log ("Car_Menu NOT Active!");

			mainMenuGameObject.gameObject.SetActive (true);
			scenary.SetActive (true);

			// Enable main menu camera and audio listener
			mainMenuCamera.enabled = true;
			mainMenuCameraAudioLis.enabled = true;

			// Diable car menu camera and audio listener
			carMenuCamera.enabled = false;
			carMenuCameraAudioLis.enabled = false;
		}
	}

    public void ChangeScene (int changeTheScene){
        SceneManager.LoadScene(changeTheScene);
    }

	public void facebook (){
		Application.OpenURL ("https://www.facebook.com");
	}


}
