using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationController : MonoBehaviour
{
    public Animator anim;
    public Transform target; 
    // Use this for initialization
    void Start()
    {

    }

    public bool isZeroRotation(){
        Debug.Log(target.rotation.y);
        if(target.rotation.y > -1 && target.rotation.y < 1){
            return true; 
        }else{
            return false;
        }
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




}

