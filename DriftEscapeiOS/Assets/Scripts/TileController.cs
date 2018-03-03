using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class TileController : MonoBehaviour {

    public GameObject[] tilePrefabs;

    private Transform playerTransform;

    //Where to spawn the Z ? 
    private float spawnZ = -200.0f;

    //Length of the tiles
    private float tileLength =200.0f ;

    //Number of tiles on the screen 
    private int numOfTilesOnScreen = 3;

    private List<GameObject> activeTiles;

    private float safeZone = 100.0f;




	// Use this for initialization
	void Start () {


        activeTiles = new List<GameObject>();

        //find Player object 
        GameObject playerObj = GameObject.FindGameObjectWithTag("Player");


        Debug.Log(tileLength);

        playerTransform = playerObj.transform;
        for (int i = 0; i < numOfTilesOnScreen; i++)
        {
            SpawnTile();


        }


	
	}
	
	// Update is called once per frame
	void Update () {


        //Repeatly spawn further as the player travel 
        if(playerTransform.position.z - safeZone > (spawnZ - numOfTilesOnScreen * tileLength)){ 
            SpawnTile();
            DeleteTile();
        }
        
	}

    private void SpawnTile(int prefabIndex = -1){

        GameObject go;
        go = Instantiate(tilePrefabs[0]) as GameObject;

        //In Hierachy, set it as child for Tile Manager
        go.transform.SetParent((transform));
        go.transform.position = Vector3.forward * spawnZ;
        spawnZ += tileLength ; 

        activeTiles.Add(go);
    }

    private void DeleteTile(){ 
        Destroy(activeTiles[0]);

        activeTiles.RemoveAt(0);
    
    }
}
