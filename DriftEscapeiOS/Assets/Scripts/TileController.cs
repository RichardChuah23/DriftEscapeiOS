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
    public List<GameObject> Type6;
    public List<GameObject> Type7;
    public List<GameObject> Type8;
    public List<GameObject> Type9;


}

public class TileController : MonoBehaviour {

    //public  List<GameObject> tilePrefabs;



    private Transform playerTransform;

    //Number of tiles on the screen 
    private List<GameObject> activeTilesRoad;
    private List<List<GameObject>> tilesPrefab;
    private List<GameObject> activeTileDrift;




    private GameController gameController;
    private bool restart;


    public ObjectList tileObjects ;
    public GameObject firstTile; 

    private Vector3 currentTilePos;
    public float driftTileLength;
    public float driftZoneLength; 


    private float t;
    private float t2;
    public int currentTileIndex;
    public string dirSpawn;

    private int newTileIndex;
    private int previousTileIndex;
    private int typeOfTileIndex;


	// Use this for initialization
	void Start () {

        //Set value for variables 
        t = Time.time;
        t2 = Time.time; 
        restart = false; 
        currentTileIndex = 1;


        //Declare List 
        tilesPrefab = new List<List<GameObject>>();
        activeTilesRoad =  new List<GameObject>();
        activeTileDrift = new List<GameObject>(); 

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

        spawnFirstTwoTiles(); 

	}

	
	// Update is called once per frame
	void Update () {


	}



    public void spawnFirstTwoTiles(){ 


         //Spawn the first two tile 



        //Find the direction of spawning 
        GameObject tileSpawn = tilesPrefab[1][0];  
        tileSpawn = Instantiate(tileSpawn) as GameObject;
        tileSpawn.name = "First Tile";
        //In Hierachy, set it as child for Tile Manager
        tileSpawn.transform.SetParent((transform));
        //Position  the new tile 
        tileSpawn.transform.position = new Vector3(0, 0, 0);
        currentTilePos = tileSpawn.transform.position;

        activeTilesRoad.Add(tileSpawn); 



        //Second tile 
        //Find the direction of spawning 
        tileSpawn = tilesPrefab[1][1];  
        tileSpawn = Instantiate(tileSpawn) as GameObject;
        tileSpawn.name = "Second Tile";
        //In Hierachy, set it as child for Tile Manager
        tileSpawn.transform.SetParent((transform));
        //Position  the new tile 
        tileSpawn.transform.position = new Vector3(0, 0, 1078);
        currentTilePos = tileSpawn.transform.position;

        activeTilesRoad.Add(tileSpawn);

        currentTileIndex = 1; 
    
    }


    void addIntoList(ObjectList objectlist)
    {
        
        tilesPrefab.Add(objectlist.enterDriftPlane);
        tilesPrefab.Add(objectlist.Type1);
        tilesPrefab.Add(objectlist.Type2);
        tilesPrefab.Add(objectlist.Type3);
        tilesPrefab.Add(objectlist.Type4);
        tilesPrefab.Add(objectlist.Type5);
        tilesPrefab.Add(objectlist.Type6);
        tilesPrefab.Add(objectlist.Type7);
        tilesPrefab.Add(objectlist.Type8);
        tilesPrefab.Add(objectlist.Type9);

    }


    public void nextTile(){

        //Find the direction of spawning 
        dirSpawn = findSpawnDirection(currentTileIndex);

        //Get next tile index  //Choose which tile to spawn 
        previousTileIndex = newTileIndex; 
        newTileIndex = nextTileIndex(); 


        GameObject tileRoadSpawn;

        if (previousTileIndex == 1 && newTileIndex == 1)
        {
            int index = Random.Range(1, 4);
            tileRoadSpawn = tilesPrefab[newTileIndex][index];
        }
        else
        {
            tileRoadSpawn = tilesPrefab[newTileIndex][0];
        }
       



        //Does it need a Drift Enter Zone? 
        bool requireDriftZone = needDriftZone(currentTileIndex, newTileIndex);

        //Find the position to spawn the tile 
        Vector3 newPos = findPosTile(dirSpawn, requireDriftZone);


        //Spawn the tile 
        tileRoadSpawn = Instantiate(tileRoadSpawn) as GameObject;
        //In Hierachy, set it as child for Tile Manager
        tileRoadSpawn.transform.SetParent((transform));
        //Position the new tile 
        tileRoadSpawn.transform.position = newPos;


        //Find the position to spawn the drift tile 
        Vector3 newDPos = findPosDriftZone(dirSpawn);

        //add tile into active tile list. So can destroy when dont need it. 
        activeTilesRoad.Add(tileRoadSpawn); 

        if (requireDriftZone == true){

            //Spawn the drift zone (if needed) 
            GameObject tileDriftSpawn = tilesPrefab[0][0];
            //Spawn Drift Enter Zone 
            tileDriftSpawn = Instantiate(tilesPrefab[0][0]) as GameObject;
            //In Hierachy, set it as child for Tile Manager
            tileDriftSpawn.transform.SetParent((transform));
            //Position the new Drift zone tile
            tileDriftSpawn.transform.position = newDPos;
            //rotate it if needed. 
            if(dirSpawn == "LEFT"){
                tileDriftSpawn.transform.Rotate(0, -90, 0); 

            }else if(dirSpawn == "RIGHT"){
                tileDriftSpawn.transform.Rotate(0, 90, 0); 

            }else if(dirSpawn == "DOWN"){
                tileDriftSpawn.transform.Rotate(0, -180, 0); 
            }



            activeTileDrift.Add(tileDriftSpawn); 


        }

        //Update current tile 
        currentTileIndex = newTileIndex;
        currentTilePos = tileRoadSpawn.transform.position; 

    }


    //Find the next possible tile to spawn, generate a random number, use it as index and find the tile. 
    //Return an index 
    int nextTileIndex(){


        int index = Random.Range(0, 2);


        if (currentTileIndex == 1 ){ 

            //Declare a list of two possible tiles  
            //List<int> a_list = new List<int>(){1,7};   //FOR DEBGGGING  ! 

            //List<int> a_list = new List<int>(){7,7};
            List<int> a_list = new List<int>() { 1, 1 };
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
            //index = a_list[2]; //For Debuggin

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
            List<int> a_list = new List<int>() { 6, 4 }; //FOR DEBUGGING
            //List<int> a_list = new List<int>() { 4, 4 };
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


    //Return new tile spawning direction 
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


    bool needDriftZone(int tileIndexA, int tileIndexB)
    {

        if (tileIndexA == 1 && tileIndexB == 1)
        {
            return false;
        }
        else if (tileIndexA == 2 && tileIndexB == 3)
        {
            return false;
        }
        else if (tileIndexA == 3 && tileIndexB == 5)
        {
            return false;
        }
        else if (tileIndexA == 4 && tileIndexB == 2)
        {
            return false;
        }
        else if (tileIndexA == 5 && tileIndexB == 4)
        {
            return false;
        }
        else if (tileIndexA == 6 && tileIndexB == 8)
        {
            return false;
        }
        else if (tileIndexA == 7 && tileIndexB == 6)
        {
            return false;
        }
        else if (tileIndexA == 8 && tileIndexB == 9)
        {
            return false;
        }
        else if (tileIndexA == 9 && tileIndexB == 7)
        {
            return false;
        }
        else
        {
            return true;
        }
    }


    Vector3 findPosTile(string dir, bool needDriftZ ){

        Vector3 newPos = new Vector3  (0, 0, 0);


        if(dir == "UP"){
            newPos = currentTilePos + new Vector3(0, 0, driftTileLength) ;
            if(needDriftZ){
                newPos += new Vector3(0, 0, driftZoneLength);
            }
        }

        if (dir == "DOWN")
        {
            newPos = currentTilePos + new Vector3(0, 0, -driftTileLength);
            if (needDriftZ)
            {
                newPos += new Vector3(0, 0, -driftZoneLength);
            }

        }

        if (dir == "RIGHT")
        {
            newPos = currentTilePos + new Vector3(driftTileLength, 0, 0);
            if (needDriftZ)
            {
                newPos += new Vector3(driftZoneLength, 0, 0);
            }

        }

        if (dir == "LEFT")
        {
            newPos = currentTilePos + new Vector3(-driftTileLength, 0, 0);
            if (needDriftZ)
            {
                newPos += new Vector3(-driftZoneLength, 0, 0);
            }

        }

        return newPos; 
    }


    Vector3 findPosDriftZone(string dir)
    {

        Vector3 newPos = new Vector3(0, 0, 0);

        if (dir == "UP")
        {

            newPos = currentTilePos + new Vector3(0, 0, (driftTileLength / 2) + (driftZoneLength / 2));
        }

        if (dir == "DOWN")
        {

            newPos = currentTilePos + new Vector3(0, 0, -((driftTileLength / 2) + (driftZoneLength / 2)));
        }

        if (dir == "RIGHT")
        {

            newPos = currentTilePos + new Vector3((driftTileLength / 2) + (driftZoneLength / 2), 0, 0);
        }

        if (dir == "LEFT")
        {

            newPos = currentTilePos + new Vector3(-((driftTileLength / 2) + (driftZoneLength / 2)), 0, 0);
        }


        return newPos;


    }


    public void DestroyTileRoad(){
        
        Destroy(activeTilesRoad[0]);
        activeTilesRoad.RemoveAt(0);


    }


	public void DestroyTileDriftZone(){ 
        Destroy(activeTileDrift[0]);
        activeTileDrift.RemoveAt(0);

    
    }

	public void DestroyAllTiles()
	{

       


        for (int i = 0; i < activeTilesRoad.Count; i++)
        {
            
            Destroy(activeTilesRoad[i]);
            activeTilesRoad.RemoveAt(i);

        }

        //Remove all Drift Tile 
        for (int i = 0; i < activeTileDrift.Count; i++)
        {


            Destroy(activeTileDrift[i]);
            activeTileDrift.RemoveAt(i);
        }
	}


    //Returns Drift Direction 
    public string getDriftDirection(){

        if(newTileIndex == 2 ||newTileIndex ==3 || newTileIndex == 4 || newTileIndex == 5 ){
            return "RIGHT"; 
        }else if (newTileIndex == 6 || newTileIndex == 7 || newTileIndex == 8 || newTileIndex == 9)
        {
            return "LEFT"; 

        }else if (newTileIndex == 1)
        {
            return "FORWARD"; 
        }
        else 
        {
            return "NA";
        }
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

