using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireworksController : MonoBehaviour {

    public ParticleSystem fireworks1; 
    public ParticleSystem fireworks2; 
    public ParticleSystem fireworks3; 
    public ParticleSystem fireworks4; 


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}



    public void playFireworks(){
        fireworks1.Play();
        fireworks2.Play();
        fireworks3.Play();
        fireworks4.Play();

    }
}
