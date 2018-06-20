﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Advertisements;
using TMPro;

public class MainMenuController : MonoBehaviour
{
<<<<<<< HEAD

    private GameObject carsSelection;

    private Transform mainMenuGameObject;
    private Transform carMenuGameObject;
    private Transform settingsGameObject;
    private Transform purchaseGameObject;
    private Transform shopGameObject;


    //Shop gameobjects 
    public GameObject shopMenuGameObject;
    public GameObject smallCoinsCanvas;
    public GameObject mediumCoinsCanvas;
    public GameObject LargeCoinsCanvas;
    public GameObject tutorialScrollView;


    public Camera mainMenuCamera;

    private Vector3 newPosition;
    Vector3 mainMenu = new Vector3(0, 0, 0);
    Vector3 carMenu = new Vector3(0, 0, -16);
    Vector3 settings = new Vector3(0, 0, 22);
    public float smooth = 3;

    private string mode;
    private string zoom;

    RectTransform drift;
    RectTransform escape;
    //The new position of the game title
    Vector3 driftPosition = new Vector3(0, 325, 0);
    Vector3 escapePosition = new Vector3(0, 225, 0);
    // Reference value used for the Smoothdamp method
    private Vector3 driftVelocity = Vector3.zero;
    private Vector3 escapeVelocity = Vector3.zero;
    // Smooth time
    private float smoothTime = 0.5f;


=======
	private float smooth = 3;
	private float smoothTime = 0.5f;
	private string mode;
	private string zoom;

	/*
	 * Camera
	 * */
	public Camera mainMenuCamera;

	/*
	 * Canvas
	 * */
	public Button musicToggleButton;
	public Button soundToggleButton;
	public Sprite musicOn;
	public Sprite soundOn;
	public Sprite musicOff;
	public Sprite soundOff;
	//public TextMeshProUGUI coinsText;

	/*
	 * GameObject
	 * */
	public GameObject carsSelection;
	public GameObject mainMenu;
	public GameObject carMenu;
	public GameObject settings;
	public GameObject shopMenu;
	public GameObject tutorialScreen;

	/*
	 * RectTransform
	 * */
	private RectTransform drift;
	private RectTransform escape;
    
	/* 
	 * Script
	 * */
>>>>>>> faed1457dc921b1fe66be6e3def4529191fd633c
    private SoundEffectController soundEffectController;

	/*
	 * Transform
	 * */
	private Transform mainMenuGameObject;
    
	/*
	 * Vector3
	 * */
	// The position for the camera in certain menu
	private Vector3 newPosition;
	private Vector3 mainMenuVector = new Vector3(0, 0, 0);
	private Vector3 carMenuVector = new Vector3(0, 0, -16);
	private Vector3 settingsVector = new Vector3(0, 0, 22);
	// The new position of the game title
	private Vector3 driftPosition = new Vector3(0, 325, 0);
	private Vector3 escapePosition = new Vector3(0, 225, 0);
	// Reference value used for the Smoothdamp method
	private Vector3 driftVelocity = Vector3.zero;
	private Vector3 escapeVelocity = Vector3.zero;

    /// <summary>
    /// Gets or sets the mode.
    /// </summary>
    /// <value>The mode.</value>
    public string Mode{
        get { return mode; }
        set { mode = value; }
    }

    /// <summary>
    /// Gets or sets the zoom.
    /// </summary>
    /// <value>The zoom.</value>
    public string Zoom{
        get { return zoom; }
        set { zoom = value; }
    }

    void Start(){
        mode = "Main";
        zoom = "mainMenu";

		//coinsText.text = CarsCreation.Instance.coins.ToString ();

		// Get the tranform of MainMenu
        mainMenuGameObject = GameObject.Find("Canvas").transform.GetChild(2);

        // Get the RectTransform component
        drift = mainMenuGameObject.transform.GetChild(1).GetComponent<RectTransform>();
        escape = mainMenuGameObject.transform.GetChild(2).GetComponent<RectTransform>();

        // Locate sound manager
        GameObject soundManager = GameObject.Find("SoundManager");
        soundEffectController = (SoundEffectController)soundManager.GetComponent(typeof(SoundEffectController));

        soundEffectController.playStartEngine();

        UpdateMusicToggle();
        UpdateSoundToggle();
    }

    void Update(){
        titleAnimation();
        clickCar();
        cameraZooming();
    }

    /// <summary>
    /// Titles the animation.
    /// Update the localPosition towards the new Position
    /// </summary>
    public void titleAnimation() {
        drift.localPosition = Vector3.SmoothDamp(drift.localPosition, driftPosition, ref driftVelocity, smoothTime);
        escape.localPosition = Vector3.SmoothDamp(escape.localPosition, escapePosition, ref escapeVelocity, smoothTime);
    }

    /// <summary>
    /// Changes the scene.
    /// Main scene build index is 1.
    /// </summary>
    /// <param name="sceneBuildIndex">Scene build index.</param>
    public void ChangeScene(int sceneBuildIndex){
        soundEffectController.playPop();
        SceneManager.LoadScene(sceneBuildIndex);
    }

    /// <summary>
    /// Openfacebook this instance.
    /// Opens the url in a browser.
    /// </summary>
    public void openfacebook(){
        Application.OpenURL("https://www.facebook.com");
    }

    /// <summary>
    /// Clicks the car.
    /// Left button mouse down
    /// Use Physics.Raycast to find which object is being clicked 
    /// Allow to click any object in scene, since a single script attached to the camera does the job
    /// </summary>
    public void clickCar(){
        if (mode == "Main"){
            if (Input.GetMouseButtonDown(0)){
                RaycastHit hitInfo = new RaycastHit();
                if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hitInfo) &&
                    hitInfo.transform.gameObject.tag == "Player"){
                    soundEffectController.playPop();
                    openCarMenu();
                    zoom = "carMenu";
                    cameraZooming();
                    mode = "Car";
                }
            }
        }
    }

    /// <summary>
    /// Cameras the zooming.
    /// </summary>
    public void cameraZooming() {
        if (zoom == "carMenu"){
            newPosition = carMenuVector;
        } else if (zoom == "settings"){
            newPosition = settingsVector;
        } else{
            newPosition = mainMenuVector;
        }
        mainMenuCamera.transform.position = Vector3.Lerp(mainMenuCamera.transform.position, newPosition, Time.deltaTime * smooth);
    }

    /// <summary>
    /// Music button.
    /// </summary>
    public void musicButton(){
        soundEffectController.toggleMusic();
        UpdateMusicToggle();
    }

    /// <summary>
    /// Sound button.
    /// </summary>
    public void soundButton() {
        soundEffectController.toggleSound();
        UpdateSoundToggle();
    }

    /// <summary>
    /// Updates the music toggle.
    /// </summary>
    void UpdateMusicToggle() {
        if (PlayerPrefs.GetInt("Music", 1) == 1){
            musicToggleButton.GetComponent<Image>().sprite = musicOn;
            musicToggleButton.GetComponent<Image>().color = new Color32(0, 204, 0, 255);
        } else {
            musicToggleButton.GetComponent<Image>().sprite = musicOff;
            musicToggleButton.GetComponent<Image>().color = new Color32(229, 0, 0, 255);
        }
    }

    /// <summary>
    /// Updates the sound toggle.
    /// </summary>
    void UpdateSoundToggle(){
        if (PlayerPrefs.GetInt("Sound", 1) == 1) {
            soundToggleButton.GetComponent<Image>().sprite = soundOn;
            soundToggleButton.GetComponent<Image>().color = new Color32(0, 204, 0, 255);
        } else{
            soundToggleButton.GetComponent<Image>().sprite = soundOff;
            soundToggleButton.GetComponent<Image>().color = new Color32(229, 0, 0, 255);
        }
    }

    /// <summary>
    /// Opens main menu.
    /// </summary>
	public void openMainMenu(){
		mainMenu.SetActive(true);
    }

    /// <summary>
    /// Opens car menu.
    /// </summary>
    public void openCarMenu(){
		carMenu.SetActive (true);
		mainMenu.SetActive (false);
    }

    /// <summary>
    /// Deactives the car menu.
    /// </summary>
	public void closeCarMenu(){
		carMenu.SetActive (false);
		mainMenu.SetActive (true);
        soundEffectController.playStartEngine();

    }

   	/// <summary>
   	/// Opens settings.
   	/// </summary>
    public void openSettings(){
        soundEffectController.playPop();
        carsSelection.SetActive(false);
		mainMenu.SetActive(false);
		settings.SetActive(true);
        zoom = "settings";
    }

    /// <summary>
    /// Closes settings.
    /// </summary>
    public void closeSettings(){
		carsSelection.SetActive (true);
		mainMenu.SetActive (true);
		settings.SetActive (false);
        zoom = "mainMenu";
        soundEffectController.playStartEngine();
    }

	/// <summary>
	/// Opens shop.
	/// </summary>
    public void openShop(){
		if (mode == "Main") 
			mainMenu.SetActive (false);
		
		if (mode == "Car") 
			carMenu.SetActive (false);
		

		shopMenu.SetActive(true);
    }

	/// <summary>
	/// Closes shop.
	/// </summary>
    public void closeShop(){
		if (mode == "Main")
			mainMenu.SetActive (true);
		
		if (mode == "Car") 
			carMenu.SetActive (true);
		
		shopMenu.SetActive(false);
    }

	/// <summary>
	/// Shows the ad.
	/// </summary>
	public void ShowAd() {
		Advertisement.Show();
	}

	/// <summary>
	/// Opens tutorial screen.
	/// </summary>
    public void openTutorialScreen(){
		tutorialScreen.SetActive(true);
    }

	/// <summary>
	/// Closes the tutorial screen.
	/// </summary>
	public void closeTutorialScreen(){
		tutorialScreen.SetActive(false);
    }
}
