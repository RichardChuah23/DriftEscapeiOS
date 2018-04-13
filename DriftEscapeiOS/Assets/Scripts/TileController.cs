using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class ObjectList // helper class to ensure we can edit the nested lists inside the unity editor
{
    public List<GameObject> enterDriftPlane;
    public List<GameObject> Type1;
    public List<GameObject> Type2; 
    public List<GameObject> Type3;
    public List<GameObject> Type4;
    public List<GameObject> Type5;


    public List<GameObject> Type2r;
    public List<GameObject> Type3r;
    public List<GameObject> Type4r;
    public List<GameObject> Type5r;


}

public class TileController : MonoBehaviour {

    //public  List<GameObject> tilePrefabs;



    private Transform playerTransform;
    //Where to spawn the Z ? 
    private float spawnZ = -787.0f;
    //Length of the tiles
    private float tileLength =787.0f ;
    //Number of tiles on the screen 
    private int numOfTilesOnScreen = 2;
    private List<GameObject> activeTiles;
    private float safeZone = 700.0f;
    private int lastPrefabIndex = 0; 
    private GameController gameController;
    private bool restart;


    private string mode;
    public ObjectList tileObjects ;
    private List<List<GameObject>> tilesPrefab;
    private Vector3 currentTilePos;


    public float t;
    public int currentTileIndex; 

 

	// Use this for initialization
	void Start () {

        //Set value for variables 
        t = Time.time;
        restart = false; 
        mode = "Straight";
        currentTileIndex = 1; 

        //Declare List 
        tilesPrefab = new List<List<GameObject>>();

        //Add tiles into the nested-list 
        addIntoList(tileObjects);

        //Locate game controller 
        GameObject gameControllerObject = GameObject.FindWithTag("GameController");
        if (gameControllerObject != null)
        {
            gameController = gameControllerObject.GetComponent<GameController>();
        }else{
            Debug.Log("Cannot find GameController script");
        }


        //find Player object 
        GameObject playerObj = GameObject.FindGameObjectWithTag("Player");


        //Spawn the first tile 
        //Find the direction of spawning 
        GameObject tileSpawn = tilesPrefab[1][0]; 
        tileSpawn = Instantiate(tileSpawn) as GameObject;
        //In Hierachy, set it as child for Tile Manager
        tileSpawn.transform.SetParent((transform));
        //Position  the new tile 
        tileSpawn.transform.position = new Vector3(0, 0, 0);
        currentTilePos = tileSpawn.transform.position;




	}

	
	// Update is called once per frame
	void Update () {
        
        if(Time.time - t > 1){
            
            nextTile();
            t = Time.time; 
        }

	}


    void addIntoList(ObjectList objectlist)
    {
        
        tilesPrefab.Add(objectlist.enterDriftPlane);
        tilesPrefab.Add(objectlist.Type1);
        tilesPrefab.Add(objectlist.Type2);
        tilesPrefab.Add(objectlist.Type3);
        tilesPrefab.Add(objectlist.Type4);
        tilesPrefab.Add(objectlist.Type5);
        tilesPrefab.Add(objectlist.Type2r);
        tilesPrefab.Add(objectlist.Type3r);
        tilesPrefab.Add(objectlist.Type4r);
        tilesPrefab.Add(objectlist.Type5r);

    }


    void nextTile(){


        //Find the direction of spawning 
        string dirSpawn = findSpawnDirection(currentTileIndex); 
         
        //Get next tile index  //Choose which tile to spawn 
        int newTileIndex = nextTileIndex(); 
        GameObject tileSpawn = tilesPrefab[newTileIndex][0];

        //Does it need a Drift Enter Zone? 
        bool driftZone = needDriftZone(currentTileIndex, newTileIndex);

        //Find the position to spawn the tile 
        Vector3 newPos = findPosTile(dirSpawn, driftZone);

        //Find the position to spawn the drift tile 
        Vector3 newDPos = findPosDriftZone(dirSpawn); 

        //Spawn the tile 
        tileSpawn = Instantiate(tileSpawn) as GameObject;
        //In Hierachy, set it as child for Tile Manager
        tileSpawn.transform.SetParent((transform));
        //Position the new tile 
        tileSpawn.transform.position = newPos;

        //Spawn the drift zone (if needed) 
        GameObject DriftZone = tilesPrefab[0][0]; 
        //Spawn Drift Enter Zone 
        DriftZone = Instantiate(tilesPrefab[0][0]) as GameObject;
        //In Hierachy, set it as child for Tile Manager
        DriftZone.transform.SetParent((transform));
        //Find Direction
        DriftZone.transform.position = newDPos;


        //Update current tile 
        currentTileIndex = newTileIndex;
        currentTilePos = tileSpawn.transform.position; 

    }


    int nextTileIndex(){


        int index = Random.Range(0, 2);


        if (currentTileIndex == 1 ){ 

            //Declare a list of two possible tiles 
            List<int> a_list = new List<int>(){1,7};
            return a_list[index];

        }
        if (currentTileIndex == 2)
        {

            //Declare a list of two possible tiles 
            List<int> a_list = new List<int>() { 3, 9 };
            return a_list[index];

        }
        if (currentTileIndex == 3)
        {

            //Declare a list of two possible tiles 
            List<int> a_list = new List<int>() { 5, 8 };
            return a_list[index];
        }
        if (currentTileIndex == 4)
        {

            //Declare a list of two possible tiles 
            List<int> a_list = new List<int>() { 2, 7,1 };
            index = a_list[Random.Range(0, 3)];


        }
        if (currentTileIndex == 5)
        {

            //Declare a list of two possible tiles 
            List<int> a_list = new List<int>() { 4, 6 };
            return a_list[index];
        }
        if (currentTileIndex == 6)
        {

            //Declare a list of two possible tiles 
            List<int> a_list = new List<int>() { 8, 5 };
            return a_list[index];
        }
        if (currentTileIndex == 7)
        {

            //Declare a list of two possible tiles 
            List<int> a_list = new List<int>() { 6, 4 };
            index = a_list[Random.Range(0, 1)];

        }
        if (currentTileIndex == 8)
        {

            //Declare a list of two possible tiles 
            List<int> a_list = new List<int>() { 3, 9 };
            return a_list[index];
        }
        if (currentTileIndex == 9)
        {

            //Declare a list of two possible tiles 
            List<int> a_list = new List<int>() { 2, 7,1 };
            index = a_list[Random.Range(0, 3)];

        }


        return index;



    }


    string findSpawnDirection(int tileIndex)
    {
        string direction = "NA";

        if (tileIndex == 2 || tileIndex == 8)
        {
            direction = "RIGHT";
        }
        else if (tileIndex == 3 || tileIndex == 6)
        {
            direction = "DOWN";
        }
        else if (tileIndex == 5 || tileIndex == 7)
        {
            direction = "LEFT";
        }
        else if (tileIndex == 4 || tileIndex == 9 || tileIndex == 1)
        {
            direction = "UP";
        }

        return direction;
    }

     

    bool needDriftZone(int tileIndexA, int tileIndexB){

        if(tileIndexA == 2 && tileIndexB == 3){
            return true; 
        }else if (tileIndexA == 3 && tileIndexB == 5)
        {
            return true;
        }
        else if (tileIndexA == 4 && tileIndexB == 2)
        {
            return true;
        }else if (tileIndexA == 3 && tileIndexB == 4)
        {
            return true;
        }
        else if (tileIndexA == 2 && tileIndexB == 8)
        {
            return true;
        }else if (tileIndexA == 3 && tileIndexB == 6)
        {
            return true;
        }else if (tileIndexA == 4 && tileIndexB == 9)
        {
            return true;
        }else if (tileIndexA == 5 && tileIndexB == 7)
        {
            return true;
        }else{
            return false; 
        }

    }



    Vector3 findPosTile(string dir, bool needDriftZ ){

        Vector3 newPos = new Vector3  (0, 0, 0);

        if(dir == "UP"){
            newPos = currentTilePos + new Vector3(0, 0, 1078) ;
            if(needDriftZ){
                newPos += new Vector3(0, 0, 85);
            }

        }

        if (dir == "DOWN")
        {
            newPos = currentTilePos + new Vector3(0, 0, -1078);
            if (needDriftZ)
            {
                newPos += new Vector3(0, 0, -85);
            }

        }

        if (dir == "RIGHT")
        {
            newPos = currentTilePos + new Vector3(1078, 0, 0);
            if (needDriftZ)
            {
                newPos += new Vector3(85, 0, 0);
            }

        }

        if (dir == "LEFT")
        {
            newPos = currentTilePos + new Vector3(-1078, 0, 0);
            if (needDriftZ)
            {
                newPos += new Vector3(-85, 0, 0);
            }

        }

        return newPos; 
    }

    Vector3 findPosDriftZone(string dir){ 

        Vector3 newPos = new Vector3(0, 0, 0); 

        if(dir == "UP"){
            
            newPos = currentTilePos + new Vector3(0, 0,(1078/2)+(85/2)); 
        }

        if (dir == "DOWN")
        {

            newPos = currentTilePos + new Vector3(0, 0, -((1078 / 2) + (85 / 2)));
        }

        if (dir == "RIGHT")
        {

            newPos = currentTilePos + new Vector3((1078 / 2) + (85 / 2), 0, 0);
        }

        if (dir == "LEFT")
        {

            newPos = currentTilePos + new Vector3(-((1078 / 2) + (85 / 2)), 0, 0);
        }


        return newPos;
    
    }



    /*
     * 
     * 
    private void SpawnTile(int prefabIndex = -1){

        //GameObject go;
        //go = Instantiate(tilePrefabs[RandomPrefabIndex()]) as GameObject;

        //In Hierachy, set it as child for Tile Manager
        //go.transform.SetParent((transform));
        //go.transform.position = Vector3.forward * spawnZ;
        spawnZ += tileLength ; 

        //activeTiles.Add(go);
    }

    private void DeleteTile(){ 
        Destroy(activeTiles[0]);
        activeTiles.RemoveAt(0);
    
    }

    public void DeleteAllTile(){

        for (int i = 0; i > activeTiles.Count; i++){


            Destroy(activeTiles[i]);
            activeTiles.RemoveAt(i);
        }

        //Reset spawnZ value;
        spawnZ = -117.0f;
        
    }

    private int RandomPrefabIndex(){ 

        if (tilePrefabs.Count <= 1) {
            return 0; 
        }

        int randomIndex = lastPrefabIndex; 

        //Ensure it doesnt repeat
        while(randomIndex == lastPrefabIndex){
            randomIndex = Random.Range(0, tilePrefabs.Count);
        }

        lastPrefabIndex = randomIndex;
        return randomIndex; 

    }   

    */




}

