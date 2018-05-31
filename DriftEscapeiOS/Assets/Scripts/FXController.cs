using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FXController : MonoBehaviour {

    private GameObject brokeDownSmokeGameObject; 

    private GameObject skidMarkGameObject;
    private GameObject tyreSketchGameObject;

    // Use this for initialization
    void Start () {




        //Locate FX for broke down Smoke 
        Transform brokedownSmokeFX = transform.Find("FX_BrokeDown_Smoke");
        brokeDownSmokeGameObject = brokedownSmokeFX.gameObject;

        //Locate FX for SkidMark
        Transform skidMarkGameFX = transform.Find("FX_SkidMark");
        skidMarkGameObject = skidMarkGameFX.gameObject;

        //Locate FX for SkidMark
        Transform tyreSketchFX = transform.Find("FX_Tyre_RoadSketch");
        tyreSketchGameObject = tyreSketchFX.gameObject;
                                    

       

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

    public void onSkidMark()
    {
        //FX
        skidMarkGameObject.SetActive(true);
    }

    public void offSkidMark()
    {
        //FX
        skidMarkGameObject.SetActive(false);
    }

	public void onTyreSketch()
	{
        //FX
        tyreSketchGameObject.SetActive(true);
	}

    public void offTyreSketch()
    {
        //FX
        tyreSketchGameObject.SetActive(false);
    }



}
