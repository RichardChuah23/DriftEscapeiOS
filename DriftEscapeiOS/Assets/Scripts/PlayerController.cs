using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

    public Rigidbody rb;
    public float speed;

    private Vector3 forwardDirection;

    public Transform target; 


    void Start(){

        forwardDirection = (new Vector3(0.0f,0.0f,1) - transform.position).normalized; 

    }


    void Update()
    {
        transform.position += forwardDirection * speed * Time.deltaTime;
    }

}
