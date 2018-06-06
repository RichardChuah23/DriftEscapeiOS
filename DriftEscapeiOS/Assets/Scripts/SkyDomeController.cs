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

    private float t;
    private float min;
    private float max; 

    // Use this for initialization
    void Start()
    {

        //Find the distance 
        offset = transform.position - player.transform.position;

        //Set the camera at the first frame
        transform.position = player.transform.position + offset;

        changeColor();

    }



    void FixedUpdate()
    {

        //Interpolated float result between min and max
        skyColour = Mathf.Lerp(min, max, t);

        // .. and increate the t interpolater
        t += 0.01f * Time.deltaTime;

        // now check if the interpolator has reached 1.0
        // and swap maximum and minimum so game object moves
        // in the opposite direction.
        if (t > 1.0f || max >= 1)
        {
            
            max = 1;
            min = 0;
            t = 0.0f;
        }

        //Follows the player transform 
        transform.position = Vector3.Lerp(transform.position, player.transform.position + offset, Time.deltaTime * damping);

        //Set the sky colour
        transform.GetComponent<Renderer>().material.SetTextureOffset("_MainTex", new Vector2(skyColour, 0));

    }


    public void changeColor(){

        List<float> a_list = new List<float>() { 0,1, 0.17f, 0.76f,0.22f,0.259f};
        int index = Random.Range(0, 6);

        min = a_list[index]; 



    }



}
