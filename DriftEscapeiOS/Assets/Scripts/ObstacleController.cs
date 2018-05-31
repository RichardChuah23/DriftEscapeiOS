using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleController : MonoBehaviour {
    public List<GameObject> readyObstacleList;
    public GameObject obstcaleGameObj;
    private int numOfObs; 

	// Use this for initialization
	void Start () {

        //Declare List
        //readyObstacleList = new List<GameObject>();



        //Count the child 
        numOfObs = transform.childCount;


        //Random list of object, add it into the game object. 


        //Set up a loop. Place obstacle models into the obstacle gameobject. 
        for (int i = 0; i < numOfObs; i ++){



            //Find the obstacle object 
            Transform obstacleTranform = transform.GetChild(i);


            //pick a random ready obstacle from the list. 
            int rnd = Random.Range(0, 2);

            //get the n gameobject
            GameObject obsSpawn = readyObstacleList[rnd];

            //Spawn the obstsacle object
            obsSpawn = Instantiate(obsSpawn) as GameObject;
            //In Hierachy, set it as child for Obsatcle
            obsSpawn.transform.SetParent((obstacleTranform));
            obsSpawn.transform.position = obstacleTranform.position; 


        }


     	
	}
	
	// Update is called once per frame
	void Update () {





		
	}






}
