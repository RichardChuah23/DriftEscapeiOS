using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkyDomeController : MonoBehaviour {

    public GameObject player;
    private Vector3 offset;
    private float z;
    private float y;

    // Use this for initialization
    void Start()
    {

        //Find the distance 
        offset = transform.position - player.transform.position;

        //Set the camera at the first frame
        transform.position = player.transform.position + offset;



    }

    void LateUpdate()
    {

        transform.position = player.transform.position + offset;

        transform.position = Vector3.Lerp(transform.position, player.transform.position + offset, Time.deltaTime * 1);

    }



}
