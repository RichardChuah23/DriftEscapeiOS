///
/// <summary>
/// SKSignalManager_Internal - Add, subscribe, and emit signals (todo add remove).
/// </summary> 
/// 
/// Created by Ryan Graham on 05/19/15.
/// Copyright (c) 2015 Ryan Graham. All rights reserved.
///

using System;
using System.Timers;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SplineKitPro
{
    public class SKSignalManager_Internal
    {
        class SKDelayedSignal_Internal
        {
            ISKSignal_Internal m_signal;
            public ISKSignal_Internal Signal
            {
                get { return m_signal; }
                set { m_signal = value; }
            }

            double m_remainingTime;
            public double RemainingTime
            {
                get { return m_remainingTime; }
                set { m_remainingTime = value; }
            }

            public SKDelayedSignal_Internal(ISKSignal_Internal signal, float delay)
            {
                Signal = signal;
                RemainingTime = delay;
            }
        }
        List<SKDelayedSignal_Internal> m_delayedSignals = new List<SKDelayedSignal_Internal>();

        Dictionary<string, object> m_signalDictionary = new Dictionary<string, object>();
        Timer m_updateTimer;
        DateTime m_lastUpdateTime;

        //--------------------------------------------------------------
        public void EnableDelayedSignalTimer()
        {
            m_updateTimer = new Timer();
            m_updateTimer.Elapsed += new ElapsedEventHandler(TimerUpdate);
            m_updateTimer.Interval = 33.333f;
            m_updateTimer.Enabled = true;
            m_lastUpdateTime = DateTime.Now;
        }

        //--------------------------------------------------------------
        // Auto Timer update, so your game doesn't have to call GameUpdate. Less secure.
        //--------------------------------------------------------------
        void TimerUpdate(object source, ElapsedEventArgs e)
        {
            TimeSpan timeSpan = e.SignalTime - m_lastUpdateTime;
            for(int i=m_delayedSignals.Count-1; i>=0; i--)
            {
                SKDelayedSignal_Internal ds = m_delayedSignals[i];
                if(ds.RemainingTime > 0.0f)
                {
                    ds.RemainingTime -= timeSpan.TotalSeconds;
                    if(ds.RemainingTime <= 0.0f)
                    {
                        ds.Signal.Dispatch();
                        m_delayedSignals.RemoveAt(i);
                    }
                }
            }

            m_lastUpdateTime = DateTime.Now;
        }

        //--------------------------------------------------------------
        // Called by you game to update delayed commands.
        //--------------------------------------------------------------
        public void GameUpdate(double deltaTime)
        {
            if(m_updateTimer == null)
            {
                for(int i=m_delayedSignals.Count-1; i>=0; i--)
                {
                    SKDelayedSignal_Internal ds = m_delayedSignals[i];
                    if(ds.RemainingTime > 0.0f)
                    {
                        ds.RemainingTime -= deltaTime;
                        if(ds.RemainingTime <= 0.0f)
                        {
                            ds.Signal.Dispatch();
                            m_delayedSignals.RemoveAt(i);
                        }
                    }
                }
            }
            else
                UnityEngine.Debug.LogError("Your application is calling SKSignalManager_Internal_Internal::GameUpdate, but it's already using timer based updates!!");
        }

        //--------------------------------------------------------------
        public bool IsCallbackRegistered(string signalName, Action callback)
        {
            if(m_signalDictionary.Count > 0)
            {
                SKSignal_Internal signal = m_signalDictionary[signalName] as SKSignal_Internal;
                if(signal != null)
                    return signal.IsCallbackRegistered(callback);
            }

            return false;
        }

        //--------------------------------------------------------------
        public bool IsCallbackRegistered<T>(string signalName, Action<T> callback)
        {
            if(m_signalDictionary.Count > 0)
            {
                SKSignal_Internal<T> signal = m_signalDictionary[signalName] as SKSignal_Internal<T>;
                if(signal != null)
                    return signal.IsCallbackRegistered(callback);
            }

            return false;
        }

        //--------------------------------------------------------------
        public bool IsCallbackRegistered<T, U>(string signalName, Action<T, U> callback)
        {
            SKSignal_Internal<T, U> signal = m_signalDictionary[signalName] as SKSignal_Internal<T, U>;
            if(signal != null)
                return signal.IsCallbackRegistered(callback);

            return false;
        }

        //--------------------------------------------------------------
        public bool IsCallbackRegistered<T, U, V>(string signalName, Action<T, U, V> callback)
        {
            SKSignal_Internal<T, U, V> signal = m_signalDictionary[signalName] as SKSignal_Internal<T, U, V>;
            if(signal != null)
                return signal.IsCallbackRegistered(callback);

            return false;
        }

        public bool IsCallbackRegistered<T, U, V, W>(string signalName, Action<T, U, V, W> callback)
        {
            SKSignal_Internal<T, U, V, W> signal = m_signalDictionary[signalName] as SKSignal_Internal<T, U, V, W>;
            if(signal != null)
                return signal.IsCallbackRegistered(callback);

            return false;
        }


        //
        // Add methods
        //
        //--------------------------------------------------------------
        public void AddSignal(string signalName, SKSignal_Internal signal)
        {
            m_signalDictionary[signalName] = signal;
        }

        //--------------------------------------------------------------
        public void AddSignal<T>(string signalName, SKSignal_Internal<T> signal)
        {
            m_signalDictionary[signalName] = signal;
        }

        //--------------------------------------------------------------
        public void AddSignal<T, U>(string signalName, SKSignal_Internal<T, U> signal)
        {
            m_signalDictionary[signalName] = signal;
        }

        //--------------------------------------------------------------
        public void AddSignal<T, U, V>(string signalName, SKSignal_Internal<T, U, V> signal)
        {
            m_signalDictionary[signalName] = signal;
        }

        //--------------------------------------------------------------
        public void AddSignal<T, U, V, W>(string signalName, SKSignal_Internal<T, U, V, W> signal)
        {
            m_signalDictionary[signalName] = signal;
        }


        //
        // Subscribe methods
        //
        //--------------------------------------------------------------
        public void SubscribeToSignal(string signalName, Action callback)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                SKSignal_Internal signal = m_signalDictionary[signalName] as SKSignal_Internal;
                if(signal != null)
                    signal.AddListener(callback);
            }
            else
                Debug.LogError("SubscribeToSignal : SKSignal_Internal " + signalName + " Not Found!");
        }

        //--------------------------------------------------------------
        public void SubscribeToSignal<T>(string signalName, Action<T> callback)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                SKSignal_Internal<T> signal = m_signalDictionary[signalName] as SKSignal_Internal<T>;
                if(signal != null)
                    signal.AddListener(callback);
            }
            else
                Debug.LogError("SubscribeToSignal<T> : SKSignal_Internal " + signalName + " Not Found!");
        }

        //--------------------------------------------------------------
        public void SubscribeToSignal<T, U>(string signalName, Action<T, U> callback)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                SKSignal_Internal<T, U> signal = m_signalDictionary[signalName] as SKSignal_Internal<T, U>;
                if(signal != null)
                    signal.AddListener(callback);
            }
            else
                Debug.LogError("SubscribeToSignal<T, U> : SKSignal_Internal " + signalName + " Not Found!");
        }

        //--------------------------------------------------------------
        public void SubscribeToSignal<T, U, V>(string signalName, Action<T, U, V> callback)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                SKSignal_Internal<T, U, V> signal = m_signalDictionary[signalName] as SKSignal_Internal<T, U, V>;
                if(signal != null)
                    signal.AddListener(callback);
            }
            else
                Debug.LogError("SubscribeToSignal<T, U, V> : SKSignal_Internal " + signalName + " Not Found!");
        }

        //--------------------------------------------------------------
        public void SubscribeToSignal<T, U, V, W>(string signalName, Action<T, U, V, W> callback)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                SKSignal_Internal<T, U, V, W> signal = m_signalDictionary[signalName] as SKSignal_Internal<T, U, V, W>;
                if(signal != null)
                    signal.AddListener(callback);
            }
            else
                Debug.LogError("SubscribeToSignal<T, U, V, W> : SKSignal_Internal " + signalName + " Not Found!");
        }

        //
        // Unsubscribe methods
        //
        //--------------------------------------------------------------
        public void UnsubscribeToSignal(string signalName, Action callback)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                SKSignal_Internal signal = m_signalDictionary[signalName] as SKSignal_Internal;
                if(signal != null)
                    signal.RemoveListener(callback);
            }
            else
                Debug.LogError("SubscribeToSignal : SKSignal_Internal " + signalName + " Not Found!");
        }

        //--------------------------------------------------------------
        public void UnsubscribeToSignal<T>(string signalName, Action<T> callback)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                SKSignal_Internal<T> signal = m_signalDictionary[signalName] as SKSignal_Internal<T>;
                if(signal != null)
                    signal.RemoveListener(callback);
            }
            else
                Debug.LogError("SubscribeToSignal<T> : SKSignal_Internal " + signalName + " Not Found!");
        }

        //--------------------------------------------------------------
        public void UnsubscribeToSignal<T, U>(string signalName, Action<T, U> callback)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                SKSignal_Internal<T, U> signal = m_signalDictionary[signalName] as SKSignal_Internal<T, U>;
                if(signal != null)
                    signal.RemoveListener(callback);
            }
            else
                Debug.LogError("SubscribeToSignal<T, U> : SKSignal_Internal " + signalName + " Not Found!");
        }

        //--------------------------------------------------------------
        public void UnsubscribeToSignal<T, U, V>(string signalName, Action<T, U, V> callback)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                SKSignal_Internal<T, U, V> signal = m_signalDictionary[signalName] as SKSignal_Internal<T, U, V>;
                if(signal != null)
                    signal.RemoveListener(callback);
            }
            else
                Debug.LogError("SubscribeToSignal<T, U, V> : SKSignal_Internal " + signalName + " Not Found!");
        }

        //--------------------------------------------------------------
        public void UnsubscribeToSignal<T, U, V, W>(string signalName, Action<T, U, V, W> callback)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                SKSignal_Internal<T, U, V, W> signal = m_signalDictionary[signalName] as SKSignal_Internal<T, U, V, W>;
                if(signal != null)
                    signal.RemoveListener(callback);
            }
            else
                Debug.LogError("SubscribeToSignal<T, U, V, W> : SKSignal_Internal " + signalName + " Not Found!");
        }

        //
        // Emit methods
        //
        //--------------------------------------------------------------
        public void EmitSignal(string signalName)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                //Debug.Log("Emitting SKSignal_Internal " + signalName);
                SKSignal_Internal signal = m_signalDictionary[signalName] as SKSignal_Internal;
                if(signal != null)
                {
                	try
                    {
                    	signal.Dispatch();
                   	}
                   	catch (MissingReferenceException e)
                   	{
                   		Debug.LogError ("Failed trying to dispatch signal " + signalName + ": " + e);
                   	}
                }
            }
            else
                Debug.LogError("EmitSignal : SKSignal_Internal " + signalName + " Not Found!");
        }

        //--------------------------------------------------------------
        public void EmitSignal<T>(string signalName, T arg1)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                //Debug.Log("Emitting SKSignal_Internal " + signalName);
                SKSignal_Internal<T> signal = m_signalDictionary[signalName] as SKSignal_Internal<T>;
                if(signal != null)
                {
                	try
                	{
                    	signal.Dispatch(arg1);
					}
					catch (MissingReferenceException e)
					{
						Debug.LogError ("Failed trying to dispatch signal " + signalName + ": " + e);
					}
				}
			}
			else
				Debug.LogError("EmitSignal<T> : SKSignal_Internal " + signalName + " Not Found!");
        }

        //--------------------------------------------------------------
        public void EmitSignal<T, U>(string signalName, T arg1, U arg2)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                //Debug.Log("Emitting SKSignal_Internal " + signalName);
                SKSignal_Internal<T, U> signal = m_signalDictionary[signalName] as SKSignal_Internal<T, U>;
                if(signal != null)
                {
                	try
                	{
                    	signal.Dispatch(arg1, arg2);
					}
					catch (MissingReferenceException e)
					{
						Debug.LogError ("Failed trying to dispatch signal " + signalName + ": " + e);
					}
				}
			}
			else
				Debug.LogError("EmitSignal<T, U> : SKSignal_Internal " + signalName + " Not Found!");
        }

        //--------------------------------------------------------------
        public void EmitSignal<T, U, V>(string signalName, T arg1, U arg2, V arg3)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                //Debug.Log("Emitting SKSignal_Internal " + signalName);
                SKSignal_Internal<T, U, V> signal = m_signalDictionary[signalName] as SKSignal_Internal<T, U, V>;
                if(signal != null)
                {
                	try
                	{
                    	signal.Dispatch(arg1, arg2, arg3);
					}
					catch (MissingReferenceException e)
					{
						Debug.LogError ("Failed trying to dispatch signal " + signalName + ": " + e);
					}
				}
				else
					Debug.LogError("EmitSignal<T, U, V> : SKSignal_Internal " + signalName + " Not Found!");
			}
        }

        //--------------------------------------------------------------
        public void EmitSignal<T, U, V, W>(string signalName, T arg1, U arg2, V arg3, W arg4)
        {
            if(m_signalDictionary.ContainsKey(signalName))
            {
                //Debug.Log("Emitting SKSignal_Internal " + signalName);
                SKSignal_Internal<T, U, V, W> signal = m_signalDictionary[signalName] as SKSignal_Internal<T, U, V, W>;
                if(signal != null)
                {
                	try
                	{
                    	signal.Dispatch(arg1, arg2, arg3, arg4);
					}
					catch (MissingReferenceException e)
					{
						Debug.LogError ("Failed trying to dispatch signal " + signalName + ": " + e);
					}
				}
				else
					Debug.LogError("EmitSignal<T, U, V, W> : SKSignal_Internal " + signalName + " Not Found!");
			}
        }

        //
        // Emit with delay methods
        //
        //--------------------------------------------------------------
        public void EmitSignalDelayed(string signalName, float delay)
        {
            SKDelayedSignal_Internal delayedSignal = new SKDelayedSignal_Internal(new SKSignal_Internal(), delay);
            m_delayedSignals.Add(delayedSignal);
        }

        //--------------------------------------------------------------
        public void EmitSignalDelayed<T>(string signalName, T arg1, float delay)
        {
            SKDelayedSignal_Internal delayedSignal = new SKDelayedSignal_Internal(new SKSignal_Internal<T>(arg1), delay);
            m_delayedSignals.Add(delayedSignal);
        }

        //--------------------------------------------------------------
        public void EmitSignalDelayed<T, U>(string signalName, T arg1, U arg2, float delay)
        {
            SKDelayedSignal_Internal delayedSignal = new SKDelayedSignal_Internal(new SKSignal_Internal<T, U>(arg1, arg2), delay);
            m_delayedSignals.Add(delayedSignal);
        }

        //--------------------------------------------------------------
        public void EmitSignalDelayed<T, U, V>(string signalName, T arg1, U arg2, V arg3, float delay)
        {
            SKDelayedSignal_Internal delayedSignal = new SKDelayedSignal_Internal(new SKSignal_Internal<T, U, V>(arg1, arg2, arg3), delay);
            m_delayedSignals.Add(delayedSignal);
        }

        //--------------------------------------------------------------
        public void EmitSignalDelayed<T, U, V, W>(string signalName, T arg1, U arg2, V arg3, W arg4, float delay)
        {
            SKDelayedSignal_Internal delayedSignal = new SKDelayedSignal_Internal(new SKSignal_Internal<T, U, V, W>(arg1, arg2, arg3, arg4), delay);
            m_delayedSignals.Add(delayedSignal);
        }
    }
}
