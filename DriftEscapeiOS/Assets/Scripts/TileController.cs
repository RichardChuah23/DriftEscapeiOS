using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class TileController : MonoBehaviour {

    public GameObject[] tilePrefabs;

    private Transform playerTransform;

    //Where to spawn the Z ? 
    private float spawnZ = -117.0f;

    //Length of the tiles
    private float tileLength =234.0f ;

    //Number of tiles on the screen 
    private int numOfTilesOnScreen = 10;

    private List<GameObject> activeTiles;

    private float safeZone = 300.0f;


    private int lastPrefabIndex = 0; 

	// Use this for initialization
	void Start () {

        //Declare array that hold list of gameObject
        activeTiles = new List<GameObject>();

        //find Player object 
        GameObject playerObj = GameObject.FindGameObjectWithTag("Player");

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
        go = Instantiate(tilePrefabs[RandomPrefabIndex()]) as GameObject;

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

    private int RandomPrefabIndex(){ 

        if (tilePrefabs.Length <= 1) {
            return 0; 
        }

        int randomIndex = lastPrefabIndex; 

        //Ensure it doesnt repeat
        while(randomIndex == lastPrefabIndex){
            randomIndex = Random.Range(0, tilePrefabs.Length);
        }

        lastPrefabIndex = randomIndex;
        return randomIndex; 

    }   



}

