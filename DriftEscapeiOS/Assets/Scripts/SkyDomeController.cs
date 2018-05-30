using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkyDomeController : MonoBehaviour {

    [Range(0,1f)]
    public float skyColour;
    public float damping;
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

        List<float> a_list = new List<float>() { 0,1, 0.17f, 0.76f,0.22f,0.259f};
		int index = Random.Range(0, 6);

        skyColour = a_list[index]; 

    }



    void FixedUpdate()
    {


        transform.position = Vector3.Lerp(transform.position, player.transform.position + offset, Time.deltaTime * damping);

        transform.GetComponent<Renderer>().material.SetTextureOffset("_MainTex", new Vector2(skyColour, 0));

    }



}
