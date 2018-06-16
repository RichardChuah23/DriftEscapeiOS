using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SoundEffectController : MonoBehaviour {


    public AudioSource efxSource, coinFXSource;                   //Drag a reference to the audio source which will play the sound effects.
    public AudioSource musicSource;                 //Drag a reference to the audio source which will play the music.
    public AudioSource MenuMusicSource; 
    public static SoundEffectController instance = null;     //Allows other scripts to call functions from SoundManager.             
    public float lowPitchRange = .95f;              //The lowest a sound effect will be randomly pitched.
    public float highPitchRange = 1.05f;            //The highest a sound effect will be randomly pitched.


    public AudioClip pop1,pop2,pop3, lSwoosh1, lSwoosh2, lSwoosh3, lSwoosh4, Coin, hSwoosh1, hSwoosh2, hSwoosh3, hon, startEngine, hit1, hit2, accelerate, purchased, skid;

    private AudioClip[] wooshList;
    private AudioClip[] popList; 
    private AudioClip[] hWooshList;
    private AudioClip[] hitList; 

    private bool musicOn;
    private bool fxOn;

    private int musicOnOff;
    private int soundOnOff; 

	// Use this for initialization
    void Awake()
    {
        //Check if there is already an instance of SoundManager
        if (instance == null)
            //if not, set it to this.
            instance = this;
        //If instance already exists:
        else if (instance != this)
            //Destroy this, this enforces our singleton pattern so there can only be one instance of SoundManager.
            Destroy(gameObject);

        //Set SoundManager to DontDestroyOnLoad so that it won't be destroyed when reloading our scene.
        //DontDestroyOnLoad(gameObject);

        wooshList = new AudioClip[]{lSwoosh1, lSwoosh2, lSwoosh3, lSwoosh4};
        popList = new AudioClip[] { pop1, pop2, pop3 };
        hWooshList = new AudioClip[] {hSwoosh1, hSwoosh2, hSwoosh3 };
        hitList = new AudioClip[] { hit1, hit2 };

        //On FX 
        fxOn = true;


    
        musicSource.mute = true;
        MenuMusicSource.mute = true;


        musicOnOff = PlayerPrefs.GetInt("Music",1);
        soundOnOff = PlayerPrefs.GetInt("Sound",1);

        if (musicOnOff == 0)
        {
            musicSource.mute = true;
            MenuMusicSource.mute = true;
           
        }
        else if (musicOnOff == 1)
        {


            if (SceneManager.GetActiveScene().buildIndex == 1)
            {
                musicSource.mute = false;
            }
            else
            {
                MenuMusicSource.mute = false;
            }


        }



    }

	private void Update()
	{
		
        if(musicOnOff == 0){
            musicSource.mute = true;
            MenuMusicSource.mute = true; 
        }else if (musicOnOff == 1){

		
			if(SceneManager.GetActiveScene().buildIndex == 1 ){
                musicSource.mute = false;
			}else{
                MenuMusicSource.mute = false;
			}
			

        }

	}


    /*

    public void setFxOn(bool fxOn){
        this.fxOn = fxOn;
        
    }

    public void setMusicOn(bool input){
        this.musicOn = input; 
    }

    public void playMusic(){
        musicSource.Play();
        musicSource.loop = true;
    }


    public void stopMusic()
    {
        musicSource.Stop();
       
    }
	*/


    public void setMusicOnOff(int input){
        this.musicOnOff = input;        
    }

    public void setSoundOnOff(int input){
        this.soundOnOff = input; 
    }


    //Used to play single sound clips.
    public void PlaySingle(AudioClip clip)
    {

        if(soundOnOff== 1){

			//Set the clip of our efxSource audio source to the clip passed in as a parameter.
			efxSource.clip = clip;
			
			//Play the clip.
			efxSource.Play();
		}

    }


    public void playPop(){
        
        PlaySingle(popList[Random.Range(0, popList.Length)]);
    }

    public void playSwoosh(){
        
        PlaySingle(wooshList[Random.Range(0,wooshList.Length)]);
    }

    public void playHeaySwoosh(){
        PlaySingle(hWooshList[Random.Range(0, hWooshList.Length)]);
    }

    public void playCoins(){
        //PlaySingle(Coin);

        if (fxOn == true)
        {

            //Set the clip of our efxSource audio source to the clip passed in as a parameter.
            coinFXSource.clip = Coin;

            //Play the clip.
            coinFXSource.Play();
        }

    }

    public void playAccelerate(){

        PlaySingle(accelerate);
    }

    public void playStartEngine(){
        PlaySingle(startEngine);
    }

    public void playHon(){
        PlaySingle(hon);
    }
	
    public void playPurchased(){
        PlaySingle(purchased);
    }

    public void playSkid(){
        efxSource.volume = 0.5f;
        PlaySingle(skid);
        efxSource.volume = 1f;

    }

    public void playHit(){
        PlaySingle(hitList[Random.Range(0,hitList.Length)]); 
    }

    public void RandomizeSfx(params AudioClip[] clips)
    {
        //Generate a random number between 0 and the length of our array of clips passed in.
        int randomIndex = Random.Range(0, clips.Length);

        //Choose a random pitch to play back our clip at between our high and low pitch ranges.
        float randomPitch = Random.Range(lowPitchRange, highPitchRange);

        //Set the pitch of the audio source to the randomly chosen pitch.
        efxSource.pitch = randomPitch;

        //Set the clip to the clip at our randomly chosen index.
        efxSource.clip = clips[randomIndex];

        //Play the clip.
        efxSource.Play();

    }
}


