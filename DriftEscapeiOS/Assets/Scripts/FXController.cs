using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FXController : MonoBehaviour {

    public GameObject brokeDownSmokeGameObject; 

    public GameObject skidMarkGameObject;
    public GameObject tyreSketchGameObject;


    //Signal Lights Controller; 
    public GameObject leftSignal;
    public GameObject rightSignal; 



    // Use this for initialization
    void Start () {



    }

	public void onLeftSignal()
	{
        
        StartCoroutine(flashLeftSignal()); 

	}


    public void onRightSignal()
    {

        StartCoroutine(flashRightSignal());

    }


    IEnumerator flashRightSignal()
    {



        rightSignal.SetActive(true);

        yield return new WaitForSeconds(0.5f);

        rightSignal.SetActive(false);

    }

    IEnumerator flashLeftSignal(){


            
        leftSignal.SetActive(true);

        yield return new WaitForSeconds(0.5f);

        leftSignal.SetActive(false);

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
