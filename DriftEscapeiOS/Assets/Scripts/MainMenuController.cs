﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuController : MonoBehaviour {

    public void ChangeScene(int changeTheScene){
        SceneManager.LoadScene(changeTheScene);
    }

	public void facebook (){
		Application.OpenURL ("https://www.facebook.com");
	}
}