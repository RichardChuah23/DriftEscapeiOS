﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightController : MonoBehaviour {

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

        //Get new position 
        z = player.transform.position.z + offset.z;
        y = player.transform.position.y + offset.y;

        //Camra always stays in center 
        transform.position = new Vector3(0.0f, y, z);
    }



}
