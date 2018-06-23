using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SoundEffectController : MonoBehaviour {


    public AudioSource efxSource, coinFXSource, multiplierSource, knockSoundSource;                   //Drag a reference to the audio source which will play the sound effects.
    public AudioSource musicSource;                 //Drag a reference to the audio source which will play the music.
    public AudioSource MenuMusicSource; 
    public static SoundEffectController instance = null;     //Allows other scripts to call functions from SoundManager.             
    public float lowPitchRange = .95f;              //The lowest a sound effect will be randomly pitched.
    public float highPitchRange = 1.05f;            //The highest a sound effect will be randomly pitched.


    public AudioClip pop1,pop2,pop3, lSwoosh1, lSwoosh2, lSwoosh3, lSwoosh4, Coin, hSwoosh1, hSwoosh2, hSwoosh3, hon, startEngine, hit1, hit2, accelerate, purchased, skid, multiplier, lostCombo, knock;

    private AudioClip[] wooshList;
    private AudioClip[] popList; 
    private AudioClip[] hWooshList;
    private AudioClip[] hitList; 

    private bool musicOn;
    private bool fxOn;

    private int musicOnOff;
    private int soundOnOff; 

	// Use this for initialization
    void Awake(){
		/*if (instance != null) {
			Destroy (gameObject);
		} else {
			instance = this;
			GameObject.DontDestroyOnLoad (gameObject);
		}*/
 		
		DontDestroyOnLoad (gameObject);

        wooshList = new AudioClip[]{lSwoosh1, lSwoosh2, lSwoosh3, lSwoosh4};
        popList = new AudioClip[] { pop1, pop2, pop3 };
        hWooshList = new AudioClip[] {hSwoosh1, hSwoosh2, hSwoosh3 };
        hitList = new AudioClip[] { hit1, hit2 };

        //On FX 
        fxOn = true;

		setMusicOnOff (PlayerPrefs.GetInt ("Music", 1));
		soundOnOff = PlayerPrefs.GetInt("Sound",1);
      }

	private void Update() {


		if (PlayerPrefs.GetInt ("Music", 1) == 1){
			if (SceneManager.GetActiveScene ().buildIndex == 1) {
				MenuMusicSource.mute = true;
				musicSource.mute = false;
			} else {
				MenuMusicSource.mute = false;
				musicSource.mute = true;
			}

            //If music if off 
        }else if (PlayerPrefs.GetInt ("Music", 0) == 1 ){
            if (SceneManager.GetActiveScene().buildIndex == 1)
            {
                MenuMusicSource.mute = true;
                musicSource.mute = true;
            }
            else
            {
                MenuMusicSource.mute = true;
                musicSource.mute = true;
            }

        }
	}

	/// <summary>
	/// Toggles music.
	/// </summary>
	public void toggleMusic(){
		if(PlayerPrefs.GetInt("Music",1) == 1){
			PlayerPrefs.SetInt("Music",0);
			setMusicOnOff (PlayerPrefs.GetInt ("Music", 1));
		}else {
			PlayerPrefs.SetInt("Music",1);
			setMusicOnOff (PlayerPrefs.GetInt ("Music", 1));
		}
	}

	/// <summary>
	/// Toggles sound.
	/// </summary>
	public void toggleSound(){
		if(PlayerPrefs.GetInt("Sound",1) == 1){
			PlayerPrefs.SetInt("Sound",0);
			setSoundOnOff (PlayerPrefs.GetInt ("Sound", 1));
		}else {
			PlayerPrefs.SetInt("Sound",1);
			setSoundOnOff (PlayerPrefs.GetInt ("Sound", 1));
		}
	}

	/// <summary>
	/// Sets music on off.
	/// </summary>
	/// <param name="input">Input.</param>
    public void setMusicOnOff(int input){
        this.musicOnOff = input;
		if(musicOnOff == 0){
			musicSource.mute = true;
			MenuMusicSource.mute = true; 
		} else if (musicOnOff == 1){
			if(SceneManager.GetActiveScene().buildIndex == 1 ){
				MenuMusicSource.mute = true;
				musicSource.mute = false;
			} else{
				MenuMusicSource.mute = false;
				musicSource.mute = true;
			}
		}
    }

	/// <summary>
	/// Sets sound on off.
	/// </summary>
	/// <param name="input">Input.</param>
    public void setSoundOnOff(int input){
        this.soundOnOff = input; 
    }

	/// <summary>
	/// play single sound clips.
	/// </summary>
	/// <param name="clip">Clip.</param>
    public void PlaySingle(AudioClip clip){
        if(soundOnOff== 1){
			//Set the clip of our efxSource audio source to the clip passed in as a parameter.
			efxSource.clip = clip;
			//Play the clip.
			efxSource.Play();
		}
    }

	/// <summary>
	/// Pop sound effect.
	/// </summary>
    public void playPop(){
        PlaySingle(popList[Random.Range(0, popList.Length)]);
    }

	/// <summary>
	/// Swoosh sound effect.
	/// </summary>
    public void playSwoosh(){
        PlaySingle(wooshList[Random.Range(0,wooshList.Length)]);
    }

	/// <summary>
	/// Heavy swoosh sound effect.
	/// </summary>
    public void playHeaySwoosh(){
        PlaySingle(hWooshList[Random.Range(0, hWooshList.Length)]);
    }

	/// <summary>
	/// Coins sound effect.
	/// </summary>
    public void playCoins(){
        //PlaySingle(Coin);
        if (fxOn == true){
            //Set the clip of our efxSource audio source to the clip passed in as a parameter.
            coinFXSource.clip = Coin;
            //Play the clip.
            coinFXSource.Play();
        }
    }



	/// <summary>
	/// Accelerate sound effect.
	/// </summary>
    public void playAccelerate(){
        PlaySingle(accelerate);
    }

	/// <summary>
	/// Start engine sound effect.
	/// </summary>
    public void playStartEngine(){
        PlaySingle(startEngine);
    }

	/// <summary>
	/// Hon sound effect.
	/// </summary>
    public void playHon(){
        PlaySingle(hon);
    }

	/// <summary>
	/// Purchase sound effect.
	/// </summary>
    public void playPurchased(){
        PlaySingle(purchased);
    }

	/// <summary>
	/// Skid sound effect.
	/// </summary>
    public void playSkid(){
        efxSource.volume = 0.5f;
        PlaySingle(skid);
        efxSource.volume = 1f;
    }

	/// <summary>
	/// Hit sound effect.
	/// </summary>
    public void playHit(){
        PlaySingle(hitList[Random.Range(0,hitList.Length)]); 
    }

    public void playMultiplier(int pitch){
        //PlaySingle(Coin);
        if (fxOn == true)
        {
            //Set the clip of our efxSource audio source to the clip passed in as a parameter.
            multiplierSource.clip = multiplier;

            //Set the pitch of the audio source to the randomly chosen pitch.
            multiplierSource.pitch = pitch;

            //Play the clip.
            multiplierSource.Play();

           
        }
    }


    public void playKnock()
    {
        //PlaySingle(Coin);
        if (fxOn == true)
        {


            //Play the clip.
            knockSoundSource.Play();


        }
    }


    public void playLostMultiplier()
    {
        //PlaySingle(Coin);
        if (fxOn == true)
        {


            float randomPitch = Random.Range(-1, 3);
        
            knockSoundSource.pitch = randomPitch; 

            //Play the clip.
            knockSoundSource.Play();


        }
    }





	/// <summary>
	/// Randomizes the sfx.
	/// </summary>
	/// <param name="clips">Clips.</param>
    public void RandomizeSfx(params AudioClip[] clips){
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