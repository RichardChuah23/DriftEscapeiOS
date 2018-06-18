using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Advertisements;

public class MainMenuController : MonoBehaviour
{

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


    private SoundEffectController soundEffectController;
    public Button musicToggleButton;
    public Button soundToggleButton;
    public Sprite musicOn;
    public Sprite soundOn;
    public Sprite musicOff;
    public Sprite soundOff;

    /// <summary>
    /// Gets or sets the mode.
    /// </summary>
    /// <value>The mode.</value>
    public string Mode
    {
        get { return mode; }
        set { mode = value; }
    }

    /// <summary>
    /// Gets or sets the zoom.
    /// </summary>
    /// <value>The zoom.</value>
    public string Zoom
    {
        get { return zoom; }
        set { zoom = value; }
    }

    void Start()
    {
        mode = "Main";
        zoom = "mainMenu";

        mainMenuGameObject = GameObject.Find("Canvas").transform.GetChild(0);
        carMenuGameObject = GameObject.Find("Canvas").transform.GetChild(1);
        settingsGameObject = GameObject.Find("Canvas").transform.GetChild(2);
        purchaseGameObject = GameObject.Find("Canvas").transform.GetChild(3);
        shopGameObject = GameObject.Find("Canvas").transform.GetChild(4);
        carsSelection = GameObject.Find("CarsSelection");

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

    void Update()
    {
        titleAnimation();
        clickCar();
        cameraZooming();
    }


    /// <summary>
    /// Titles the animation.
    /// Update the localPosition towards the new Position
    /// </summary>
    public void titleAnimation()
    {
        drift.localPosition = Vector3.SmoothDamp(drift.localPosition, driftPosition, ref driftVelocity, smoothTime);
        escape.localPosition = Vector3.SmoothDamp(escape.localPosition, escapePosition, ref escapeVelocity, smoothTime);
    }

    /// <summary>
    /// Changes the scene.
    /// Main scene build index is 1.
    /// </summary>
    /// <param name="sceneBuildIndex">Scene build index.</param>
    public void ChangeScene(int sceneBuildIndex)
    {
        soundEffectController.playPop();
        SceneManager.LoadScene(sceneBuildIndex);
    }


    /// <summary>
    /// Openfacebook this instance.
    /// Opens the url in a browser.
    /// </summary>
    public void openfacebook()
    {
        Application.OpenURL("https://www.facebook.com");
    }

    /// <summary>
    /// Clicks the car.
    /// Left button mouse down
    /// Use Physics.Raycast to find which object is being clicked 
    /// Allow to click any object in scene, since a single script attached to the camera does the job
    /// </summary>
    public void clickCar()
    {

        Debug.Log(gameObject.name + mode );
        if (mode == "Main")
        {
            if (Input.GetMouseButtonDown(0))
            {
                
                RaycastHit hitInfo = new RaycastHit();



                if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hitInfo) &&
                    hitInfo.transform.gameObject.tag == "Player")
                {
				


                    Debug.Log(hitInfo.transform.gameObject.tag);
                    
                    soundEffectController.playPop();
                    activeCarMenu();
                    deactiveMainMenu();
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
    public void cameraZooming()
    {
        if (zoom == "carMenu")
        {
            newPosition = carMenu;
        }
        else if (zoom == "settings")
        {
            newPosition = settings;
        }
        else
        {
            newPosition = mainMenu;
        }
        mainMenuCamera.transform.position = Vector3.Lerp(mainMenuCamera.transform.position, newPosition, Time.deltaTime * smooth);
    }

    /// <summary>
    /// Shows the ad.
    /// </summary>
    public void ShowAd()
    {
        Advertisement.Show();
    }

    /// <summary>
    /// Music button.
    /// </summary>
    public void musicButton()
    {
        soundEffectController.toggleMusic();
        UpdateMusicToggle();
    }

    /// <summary>
    /// Sound button.
    /// </summary>
    public void soundButton()
    {
        soundEffectController.toggleSound();
        UpdateSoundToggle();
    }

    /// <summary>
    /// Updates the music toggle.
    /// </summary>
    void UpdateMusicToggle()
    {
        if (PlayerPrefs.GetInt("Music", 1) == 1)
        {
            musicToggleButton.GetComponent<Image>().sprite = musicOn;
            musicToggleButton.GetComponent<Image>().color = new Color32(0, 204, 0, 255);
        }
        else
        {
            musicToggleButton.GetComponent<Image>().sprite = musicOff;
            musicToggleButton.GetComponent<Image>().color = new Color32(229, 0, 0, 255);
        }
    }

    /// <summary>
    /// Updates the sound toggle.
    /// </summary>
    void UpdateSoundToggle()
    {
        if (PlayerPrefs.GetInt("Sound", 1) == 1)
        {
            soundToggleButton.GetComponent<Image>().sprite = soundOn;
            soundToggleButton.GetComponent<Image>().color = new Color32(0, 204, 0, 255);
        }
        else
        {
            soundToggleButton.GetComponent<Image>().sprite = soundOff;
            soundToggleButton.GetComponent<Image>().color = new Color32(229, 0, 0, 255);
        }
    }

    /// <summary>
    /// Actives the main menu.
    /// </summary>
    public void activeMainMenu()
    {
        mainMenuGameObject.gameObject.SetActive(true);
    }

    /// <summary>
    /// Deactives the main menu.
    /// </summary>
    public void deactiveMainMenu()
    {
        mainMenuGameObject.gameObject.SetActive(false);
    }

    /// <summary>
    /// Actives the car menu.
    /// </summary>
    public void activeCarMenu()
    {
        carMenuGameObject.gameObject.SetActive(true);
    }

    /// <summary>
    /// Deactives the car menu.
    /// </summary>
    public void deactiveCarMenu()
    {
        carMenuGameObject.gameObject.SetActive(false);
        soundEffectController.playStartEngine();
    }

    /// <summary>
    /// Actives the settings.
    /// </summary>
    public void activeSettings()
    {
        soundEffectController.playPop();
        carsSelection.SetActive(false);
        settingsGameObject.gameObject.SetActive(true);
        zoom = "settings";
    }

    /// <summary>
    /// Deactives the settings.
    /// </summary>
    public void deactiveSettings()
    {
        carsSelection.SetActive(true);
        settingsGameObject.gameObject.SetActive(false);
        zoom = "mainMenu";
        soundEffectController.playStartEngine();
    }


    public void activeShop()
    {
        purchaseGameObject.gameObject.SetActive(false);
        shopGameObject.gameObject.SetActive(true);
    }

    public void deactiveShop()
    {

        purchaseGameObject.gameObject.SetActive(true);
        shopGameObject.gameObject.SetActive(false);
    }

    public void activeShopMenu()
    {
        shopMenuGameObject.SetActive(true);
    }

    public void deactiveShopMenu()
    {
        shopMenuGameObject.SetActive(false);

    }

    public void activeSmallCoinsCanvas()
    {
        smallCoinsCanvas.SetActive(true);
    }

    public void deactiveSmallCoinsCanvas()
    {
        smallCoinsCanvas.SetActive(false);
    }

    public void activeMediumCoinsCanvas()
    {
        mediumCoinsCanvas.SetActive(true);
    }

    public void deactiveMediumCoinsCanvas()
    {
        mediumCoinsCanvas.SetActive(false);
    }

    public void activeLargeCoinsCanvas()
    {
        LargeCoinsCanvas.SetActive(true);
    }

    public void deactiveLargeCoinsCanvas()
    {
        LargeCoinsCanvas.SetActive(false);
    }

    public void activeTutorialScrollView()
    {
        tutorialScrollView.SetActive(true);
    }

    public void deactiveTutorialScrollView()
    {

        tutorialScrollView.SetActive(false);
    }
}
