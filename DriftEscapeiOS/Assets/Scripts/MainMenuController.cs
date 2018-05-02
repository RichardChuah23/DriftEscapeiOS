using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuController : MonoBehaviour {

	void Update() {
		if(Input.GetMouseButtonDown(0)){

			Debug.Log ("Mouse is down");

			RaycastHit hitInfo = new RaycastHit();
			bool hit = Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hitInfo);
			Debug.Log("Hit " + hitInfo.transform.gameObject.name);
			if (hit) {
				Debug.Log("Hit " + hitInfo.transform.gameObject.name);
				if (hitInfo.transform.gameObject.tag == "Player") {
					Debug.Log ("It's working!");
				} else {
					Debug.Log ("It's NOT working!");
				}
			} else {
				Debug.Log("No hit");
			}
		}
	}


	/*void Start() {
		var player = GameObject.FindWithTag ("Player").transform;
		Debug.Log ("This is the " + player);
	}*/
	/*void Update() {
		Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
		RaycastHit hit;

		if(Physics.Raycast (ray, out hit)) {
			if (hit.transform.CompareTag("Player")) 
			//if(hit.transform.gameObject.tag == "Player")
			{
				Debug.Log ("This is a Player");
			}
			else {
				Debug.Log ("This isn't a Player");                
			}
		}
	}*/

	/*void Start() {
		if ( GameObject.Find ("AE86") != null) {
			Debug.Log ("Exist");
		} else {
			Debug.Log ("Not exist");
		}
	}*/

	/*void OnMouseDown() {
		Debug.Log (gameObject.name);
	}*/

    public void ChangeScene(int changeTheScene){
        SceneManager.LoadScene(changeTheScene);
    }

	public void facebook (){
		Application.OpenURL ("https://www.facebook.com");
	}


}
