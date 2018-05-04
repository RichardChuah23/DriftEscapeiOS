using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FXController : MonoBehaviour {

    private Transform brakeFX;
    private GameObject brakeFXGameObject; 

    // Use this for initialization
    void Start () {

        //Locate FX for tyre smoke 
        brakeFX = transform.Find("FX_Tyre_Smoke");
        brakeFXGameObject = brakeFX.gameObject;

       

    }

    public void onTyreBrakeSmoke(){ 

        //FX 
        brakeFXGameObject.SetActive(true);
    
    }


    public void offTyreBrakeSmoke()
    {

        //FX 
        brakeFXGameObject.SetActive(false);

    }


}
