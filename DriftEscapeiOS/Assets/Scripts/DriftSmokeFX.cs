using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DriftSmokeFX : MonoBehaviour {


    private GameObject DriftSmokeLeft; 
    private GameObject DriftSmokeRight; 

	// Use this for initialization
	void Start () {



        //Locate FX for drift smoke
        DriftSmokeLeft = transform.Find("FX_Tyre_Smoke").gameObject; 
        DriftSmokeRight = transform.Find("FX_Tyre_Smoke_2").gameObject;



	}
	
	// Update is called once per frame
	void Update () {
		
	}


    public void onDriftSmoke(){

        DriftSmokeLeft.SetActive(true);
        DriftSmokeRight.SetActive(true);

        DriftSmokeLeft.GetComponent<ParticleSystem>().Play();
        DriftSmokeRight.GetComponent<ParticleSystem>().Play();
        DriftSmokeLeft.GetComponent<ParticleSystem>().loop = true; 
        DriftSmokeRight.GetComponent<ParticleSystem>().loop = true; 
    }

    public void offDriftSmoke(){

        DriftSmokeLeft.GetComponent<ParticleSystem>().loop = false; 
        DriftSmokeRight.GetComponent<ParticleSystem>().loop = false; 
    }

    public void hardOffDriftSmoke()
    {

        if(DriftSmokeLeft == null){
            DriftSmokeLeft = transform.Find("FX_Tyre_Smoke").gameObject; 


        }

        if (DriftSmokeRight == null)
        {
            DriftSmokeRight = transform.Find("FX_Tyre_Smoke_2").gameObject;


        }
        
        DriftSmokeLeft.SetActive(false);
        DriftSmokeRight.SetActive(false);
    }


}
