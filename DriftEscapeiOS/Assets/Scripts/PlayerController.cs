using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

    public Rigidbody rb;
    public float speed;

    private Vector3 forwardDirection;

    public Transform target;

    private CharacterController controller; 


    void Start(){

        forwardDirection = (new Vector3(0.0f,0.0f,10) - transform.position).normalized; 

        //controller = GetComponent<CharacterController>();

    }


    void FixedUpdate()
    {
        transform.position += forwardDirection * speed * Time.deltaTime;

        //controller.Move(forwardDirection * speed * Time.deltaTime);



    }

}
