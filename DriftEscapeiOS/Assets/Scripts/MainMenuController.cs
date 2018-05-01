using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuController : MonoBehaviour {

	/*void Start() {
		if ( GameObject.Find ("AE86") != null) {
			Debug.Log ("Exist");
			GameObject.Find("AE86").
		} else {
			Debug.Log ("Not exist");
		}
	}*/

    public void ChangeScene(int changeTheScene){
        SceneManager.LoadScene(changeTheScene);
    }

	public void facebook (){
		Application.OpenURL ("https://www.facebook.com");
	}


}
