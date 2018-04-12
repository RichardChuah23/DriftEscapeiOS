///
/// <summary>
/// SKSignal_Internal
/// </summary> 
/// 
/// Created by Ryan Graham on 04/28/16.
/// Copyright (c) 2016 Ryan Graham. All rights reserved.
///

using System;
using System.Collections.Generic;
using System.Linq;

namespace SplineKitPro
{
    #region Spline Signal 0 Parameters
    public class SKSignal_Internal : ISKSignal_Internal
    {
        event Action m_listener = delegate {};
        event Action m_oneTimeListener = delegate {};

        //--------------------------------------------------------------
        public void AddListener(Action callback)
        {
            if(!m_listener.GetInvocationList().Contains(callback))
                m_listener += callback;
        }

        //--------------------------------------------------------------
        public void AddOneTimeListener(Action callback)
        {
            if(!m_oneTimeListener.GetInvocationList().Contains(callback))
                m_oneTimeListener += callback;
        }

        //--------------------------------------------------------------
        public bool IsCallbackRegistered(Action callback)
        {
            return m_listener.GetInvocationList().Contains(callback);
        }

        //--------------------------------------------------------------
        public void RemoveListener(Action callback)
        {
            if(m_listener.GetInvocationList().Contains(callback))
                m_listener -= callback;
        }

        //--------------------------------------------------------------
        public List<Type> GetTypes()
        {
            return new List<Type>();
        }

        //--------------------------------------------------------------
        public void Dispatch()
        {
            m_listener();
            m_oneTimeListener();
            m_oneTimeListener = delegate {};
        }
    }
    #endregion

    #region Spline Signal 1 Paramter
    public class SKSignal_Internal<T> : ISKSignal_Internal
    {
        event Action<T> m_listener = delegate {};
        event Action<T> m_oneTimeListener = delegate {};

        // Delayed emission args
        T m_arg1;

        //--------------------------------------------------------------
        public SKSignal_Internal()
        {
        }

        //--------------------------------------------------------------
        public SKSignal_Internal(T arg1)
        {
            m_arg1 = arg1;
        }

        //--------------------------------------------------------------
        public void AddListener(Action<T> callback)
        {
            if(!m_listener.GetInvocationList().Contains(callback))
                m_listener += callback;
        }

        //--------------------------------------------------------------
        public void AddOneTimeListener(Action<T> callback)
        {
            if(!m_oneTimeListener.GetInvocationList().Contains(callback))
                m_oneTimeListener += callback;
        }

        //--------------------------------------------------------------
        public bool IsCallbackRegistered(Action<T> callback)
        {
            return m_listener.GetInvocationList().Contains(callback);
        }

        //--------------------------------------------------------------
        public void RemoveListener(Action<T> callback)
        { 
            m_listener -= callback;
        }

        //--------------------------------------------------------------
        public List<Type> GetTypes()
        {
            List<Type> retv = new List<Type>();
            retv.Add(typeof(T));

            return retv;
        }

        //--------------------------------------------------------------
        public void Dispatch()
        {
            m_listener(m_arg1);
            m_oneTimeListener(m_arg1);
            m_oneTimeListener = delegate {};
        }

        //--------------------------------------------------------------
        public void Dispatch(T arg1)
        {
            m_listener(arg1);
            m_oneTimeListener(arg1);
            m_oneTimeListener = delegate {};
        }
    }
    #endregion

    #region Spline Signal 2 Parameters
    public class SKSignal_Internal<T, U> : ISKSignal_Internal
    {
        event Action<T, U> m_listener = delegate {};
        event Action<T, U> m_oneTimeListener = delegate {};

        // Delayed emission args
        T m_arg1;
        U m_arg2;

        //--------------------------------------------------------------
        public SKSignal_Internal()
        {
        }

        //--------------------------------------------------------------
        public SKSignal_Internal(T arg1, U arg2)
        {
            m_arg1 = arg1;
            m_arg2 = arg2;
        }

        //--------------------------------------------------------------
        public void AddListener(Action<T, U> callback)
        {
            if(!m_listener.GetInvocationList().Contains(callback))
                m_listener += callback;
        }

        //--------------------------------------------------------------
        public void AddOneTimeListener(Action<T, U> callback)
        {
            if(!m_oneTimeListener.GetInvocationList().Contains(callback))
                m_oneTimeListener += callback;
        }

        //--------------------------------------------------------------
        public bool IsCallbackRegistered(Action<T, U> callback)
        {
            return m_listener.GetInvocationList().Contains(callback);
        }

        //--------------------------------------------------------------
        public void RemoveListener(Action<T, U> callback)
        {
            m_listener -= callback;
        }

        //--------------------------------------------------------------
        public List<Type> GetTypes()
        {
            List<Type> retv = new List<Type>();
            retv.Add(typeof(T));
            retv.Add(typeof(U));

            return retv;
        }

        //--------------------------------------------------------------
        public void Dispatch()
        {
            m_listener(m_arg1, m_arg2);
            m_oneTimeListener(m_arg1, m_arg2);
            m_oneTimeListener = delegate {};
        }

        //--------------------------------------------------------------
        public void Dispatch(T arg1, U arg2)
        {
            m_listener(arg1, arg2);
            m_oneTimeListener(arg1, arg2);
            m_oneTimeListener = delegate { };
        }
    }
    #endregion

    #region Spline Signal 3 Parameters
    public class SKSignal_Internal<T, U, V> : ISKSignal_Internal
    {
        event Action<T, U, V> m_listener = delegate {};
        event Action<T, U, V> m_oneTimeListener = delegate {};

        // Delayed emission args
        T m_arg1;
        U m_arg2;
        V m_arg3;

        //--------------------------------------------------------------
        public SKSignal_Internal()
        {
        }

        //--------------------------------------------------------------
        public SKSignal_Internal(T arg1, U arg2, V arg3)
        {
            m_arg1 = arg1;
            m_arg2 = arg2;
            m_arg3 = arg3;
        }

        //--------------------------------------------------------------
        public void AddListener(Action<T, U, V> callback)
        {
            if(!m_listener.GetInvocationList().Contains(callback))
                m_listener += callback;
        }

        //--------------------------------------------------------------
        public void AddOneTimeListener(Action<T, U, V> callback)
        {
            if(!m_oneTimeListener.GetInvocationList().Contains(callback))
                m_oneTimeListener += callback;
        }

        //--------------------------------------------------------------
        public bool IsCallbackRegistered(Action<T, U, V> callback)
        {
            return m_listener.GetInvocationList().Contains(callback);
        }

        //--------------------------------------------------------------
        public void RemoveListener(Action<T, U, V> callback)
        { 
            m_listener -= callback; 
        }

        //--------------------------------------------------------------
        public List<Type> GetTypes()
        {
            List<Type> retv = new List<Type>();
            retv.Add(typeof(T));
            retv.Add(typeof(U));
            retv.Add(typeof(V));

            return retv;
        }

        //--------------------------------------------------------------
        public void Dispatch()
        {
            m_listener(m_arg1, m_arg2, m_arg3);
            m_oneTimeListener(m_arg1, m_arg2, m_arg3);
            m_oneTimeListener = delegate {};
        }

        //--------------------------------------------------------------
        public void Dispatch(T arg1, U arg2, V arg3)
        {
            m_listener(arg1, arg2, arg3);
            m_oneTimeListener(arg1, arg2, arg3);
            m_oneTimeListener = delegate {};
        }
    }
    #endregion

    #region Spline Signal 4 Parameters
    public class SKSignal_Internal<T, U, V, W> : ISKSignal_Internal
    {
        event Action<T, U, V, W> m_listener = delegate {};
        event Action<T, U, V, W> m_oneTimeListener = delegate {};

        // Delayed emission args
        T m_arg1;
        U m_arg2;
        V m_arg3;
        W m_arg4;

        //--------------------------------------------------------------
        public SKSignal_Internal()
        {
        }

        //--------------------------------------------------------------
        public SKSignal_Internal(T arg1, U arg2, V arg3, W arg4)
        {
            m_arg1 = arg1;
            m_arg2 = arg2;
            m_arg3 = arg3;
            m_arg4 = arg4;
        }

        //--------------------------------------------------------------
        public void AddListener(Action<T, U, V, W> callback)
        {
            if(!m_listener.GetInvocationList().Contains(callback))
                m_listener += callback;
        }

        //--------------------------------------------------------------
        public void AddOneTimeListener(Action<T, U, V, W> callback)
        {
            if(!m_oneTimeListener.GetInvocationList().Contains(callback))
                m_oneTimeListener += callback;
        }

        //--------------------------------------------------------------
        public bool IsCallbackRegistered(Action<T, U, V, W> callback)
        {
            return m_listener.GetInvocationList().Contains(callback);
        }

        //--------------------------------------------------------------
        public void RemoveListener(Action<T, U, V, W> callback) 
        { 
            m_listener -= callback; 
        }

        //--------------------------------------------------------------
        public List<Type> GetTypes()
        {
            List<Type> retv = new List<Type>();
            retv.Add(typeof(T));
            retv.Add(typeof(U));
            retv.Add(typeof(V));
            retv.Add(typeof(W));

            return retv;
        }

        //--------------------------------------------------------------
        public void Dispatch()
        {
            m_listener(m_arg1, m_arg2, m_arg3, m_arg4);
            m_oneTimeListener(m_arg1, m_arg2, m_arg3, m_arg4);
            m_oneTimeListener = delegate {};
        }

        //--------------------------------------------------------------
        public void Dispatch(T arg1, U arg2, V arg3, W arg4)
        {
            m_listener(arg1, arg2, arg3, arg4);
            m_oneTimeListener(arg1, arg2, arg3, arg4);
            m_oneTimeListener = delegate {};
        }
    }
    #endregion
}
