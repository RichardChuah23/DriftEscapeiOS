﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenuVehicleAnimation : MonoBehaviour {

    public Animator anim; 

	// Use this for initialization
	void Start () {


	}
	
	// Update is called once per frame
	void Update () {


		
	}

    public void playStartEngine(){
        anim.Play("StartEngine");
    }
}
