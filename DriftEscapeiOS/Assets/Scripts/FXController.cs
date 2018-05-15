using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FXController : MonoBehaviour {

    private Transform brakeFX;
    private GameObject brokeDownSmokeGameObject; 
    private GameObject brakeFXGameObject; 

    // Use this for initialization
    void Start () {

        //Locate FX for tyre smoke 
        brakeFX = transform.Find("FX_Tyre_Smoke");
        brakeFXGameObject = brakeFX.gameObject;


        //Locate FX for broke down Smoke 
        Transform brokedownSmokeFX = transform.Find("FX_BrokeDown_Smoke");
        brokeDownSmokeGameObject = brokedownSmokeFX.gameObject;
                                    

       

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

    public void onBrokeDownSmoke()
    {

        //FX
        brokeDownSmokeGameObject.SetActive(true); 
    }

    public void offBrokeDownSmoke()
    {

        //FX
        brokeDownSmokeGameObject.SetActive(false);
    }



}
