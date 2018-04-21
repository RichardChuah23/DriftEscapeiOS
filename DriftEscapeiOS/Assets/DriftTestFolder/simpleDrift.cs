using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class simpleDrift : MonoBehaviour {

    public float speed;  
    private  float turn1;
    private float turn2;
    private float turn3;
    private int mode;
    private float inputHo;
    private float coolDown;
    private float lastTime; 

	// Use this for initialization
	void Start () {

        turn1 = 0.2f;
        turn2 = 0.4f;
        turn3 = 1f;
        coolDown = 0.5f;
        mode = 0;
        lastTime = Time.time; 
		
	}
	
	// Update is called once per frame
	void Update () {

        driftmode(); 




	}

    void driftmode(){ 

        inputHo = Input.GetAxisRaw("Horizontal");


        if (inputHo == 1 && Time.time - lastTime > coolDown && mode <= 2)
        {
            mode++;
            lastTime = Time.time;

        }


        if (inputHo == -1 && Time.time - lastTime > coolDown && mode >= 1)
        {
            mode--;
            lastTime = Time.time;

        }

        if (mode == 0)
        {
            transform.Translate(0, 0, Time.deltaTime * speed); // move forward

        }


        if (mode == 1)
        {

            drift(speed, turn1);
        }

        if (mode == 2)
        {

            drift(speed, turn2);
        }
        if (mode == 3)
        {

            drift(speed, turn3);
        }
    
    }


    void drift(float speed, float angle){

        transform.Translate(0, 0, Time.deltaTime * speed); // move forward
        transform.Rotate(0, angle, 0); // turn a little

    }
}
