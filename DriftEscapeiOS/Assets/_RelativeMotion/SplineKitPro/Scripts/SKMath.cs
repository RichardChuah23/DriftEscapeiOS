//
// SKMath.cs
//
// Created by Ryan Graham on 12/21/15.
// Copyright (c) 2015 Ryan Graham. All rights reserved.
//

using UnityEngine;
using System.Collections;

namespace SplineKitPro
{
    public class SKMath
    {
        //--------------------------------------------------------------
        public static float Select(float a, float b, float c)
        {
            return (a < 0.0f) ? c : b;
        }

        //--------------------------------------------------------------
        public static float SmoothEasyIn(float currentValue, float targetValue, float percent, float tolerance)
        {
            float value = currentValue * (1.0f - percent) + targetValue * percent;
            if(System.Math.Abs(value - targetValue) < tolerance)
                value = targetValue;

            return value;
        }

        //--------------------------------------------------------------
        public static Vector3 SmoothEasyIn(Vector3 currentValue, Vector3 targetValue, float percent, float tolerance)
        {
            Vector3 result = new Vector3();
            result.x = SmoothEasyIn(currentValue.x, targetValue.x, percent, tolerance);
            result.y = SmoothEasyIn(currentValue.y, targetValue.y, percent, tolerance);
            result.z = SmoothEasyIn(currentValue.z, targetValue.z, percent, tolerance);
            return result;
        }

        //--------------------------------------------------------------
        public static float SmoothEasyInAngle(float currentValue, float targetValue, float percent, float tolerance)
        {
            float diffVal = targetValue - currentValue;
            float absDiff = System.Math.Abs(diffVal);	// The magnitude of the difference
            float sgnDiff = System.Math.Sign(diffVal);	// The sign (i.e. direction) of the difference

            // Decide if going around the opposite direction of the circle would be shorter.
            // If absDiff > PI, go the other way around.
            float reverse = (float)(absDiff - System.Math.PI);
            absDiff = Select(reverse, (float)(2.0f*System.Math.PI - absDiff), absDiff);
            sgnDiff = Select(reverse, -sgnDiff, sgnDiff);

            // Change by at least the minimum change but no more than the total difference
            float change = System.Math.Min(System.Math.Max(absDiff * percent, tolerance), absDiff);

            // Add or subtract the change amount depending on direction
            float smoothVal = Select(sgnDiff, currentValue + change, currentValue - change);

            // Return an equivalent angle between -PI and PI
            smoothVal = Select((float)(smoothVal - System.Math.PI), (float)(smoothVal - 2.0f*System.Math.PI), Select((float)(smoothVal + System.Math.PI), smoothVal, (float)(smoothVal + 2.0f*System.Math.PI)));

            return smoothVal;
        }

        //--------------------------------------------------------------
        public static Quaternion SmoothEasyInAngle(Quaternion currentValue, Quaternion targetValue, float percent, float tolerance)
        {
            Vector3 phr = Vector3.zero;
            phr.x = SmoothEasyInAngle(currentValue.eulerAngles.x, targetValue.eulerAngles.x, percent, tolerance);
            phr.y = SmoothEasyInAngle(currentValue.eulerAngles.y, targetValue.eulerAngles.y, percent, tolerance);
            phr.z = SmoothEasyInAngle(currentValue.eulerAngles.z, targetValue.eulerAngles.z, percent, tolerance);
            return Quaternion.Euler(phr);
        }
    }
}
