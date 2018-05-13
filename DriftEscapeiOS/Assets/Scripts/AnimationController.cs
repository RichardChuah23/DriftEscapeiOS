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

    public void playIdle()
    {
        anim.Play("Idle");
    }


    public void playSwitchLeft()
    {
        anim.Play("SwitchLeft"); 
    }

    public void playSwitchRight()
    {
        anim.Play("SwitchRight"); 

    }

    public void playDriftLeft(){ 
        anim.Play("DriftLeft"); 
    }

    public void playDriftRight(){ 
        anim.Play("DriftRight"); 
    
    }

    public void playDriftLeftToRight()
    {

        anim.Play("DriftLeftToRight");

    }


    public void playDriftRightToLeft()
    {

        anim.Play("DriftRightToLeft");

    }

    public void playDriftLeftToIdle()
    {

  
        anim.Play("DriftLeftToIdle");

    }

    public void playDriftRightToIdle()
    {


        anim.Play("DriftRightToIdle");

    }


    public void playLeftSpin()
    {


        anim.Play("LeftSpin");

    }

}

