using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationController : MonoBehaviour
{
    public Animator anim; 
    // Use this for initialization
    void Start()
    {

    }


    public void playSwitchLeft()
    {
        anim.Play("SwitchLeft"); 
    }

    public void playSwitchRight()
    {


    }

    public void playDriftLeft(){ 
    
    }

    public void playDriftRight(){ 
    
    }
}

