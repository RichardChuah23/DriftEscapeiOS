using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SplineKitPro;

public class testDriftController : MonoBehaviour {

    public Transform orbitingObject;
    public Ellipse orbitPath;

    [Range(0f,1f)]
    public float orbitProgress;
    public float orbitPeriod = 3f;
    public bool orbitActive = true ; 


	// Use this for initialization
	void Start () {
        if(orbitingObject == null){
            orbitActive = false;
            return;
        }

        SetOrbittingObjectPosition();
        StartCoroutine(AnimaterOrbit());

	}
	


    void SetOrbittingObjectPosition(){
        Vector2 orbitPos = orbitPath.Evaluate(orbitProgress);
        orbitingObject.localPosition = new Vector3(orbitPos.x, 0, orbitPos.y); 

    }

    IEnumerator AnimaterOrbit(){
        if ( orbitPeriod < 0.1f){
            orbitPeriod = 0.1f; 
        }
        float orbitspeed = 1f / orbitPeriod; 

        while(orbitActive == true){
            orbitProgress += Time.deltaTime * orbitspeed;
            orbitProgress %= 1f;
            SetOrbittingObjectPosition();
            yield return null; 
        }

    }
}
