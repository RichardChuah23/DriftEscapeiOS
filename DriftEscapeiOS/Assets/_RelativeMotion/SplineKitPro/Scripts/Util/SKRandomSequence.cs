//
// SKRandomSequence.cs
//
// Generates a random unique integer sequence.
// The sequnece contains each number between min(inclusive) and max(exclusive)
// in a random order. It is also guarenteed that for each shuffle, the first
// number in the sequence will not be the same as the last number of the previous
// sequence; so you will never have the same number twice in a row. 

// Created by Ryan Graham on 01/29/16.
// Copyright (c) 2016 Ryan Graham, all rights reserved.
//

using UnityEngine;
using System.Collections.Generic;
using System.Text;

namespace SplineKitPro
{
    public class SKRandomSequence
    {
        List<int> m_sequence;
        List<int> m_deck;
        int m_currIdx;
        int m_min;
        int m_max;
        
        //--------------------------------------------------------------
        public SKRandomSequence(int min, int max)
        {
            m_min = min;
            m_max = max;
            m_sequence = new List<int>(max-min);
            m_deck = new List<int>(max-min);
            Shuffle();
        }
		
        //--------------------------------------------------------------
        public int Count
        {
            get { return m_max - m_min; } 
        }

        //--------------------------------------------------------------
        public int GetNext()
        {
            int currValue = m_sequence[m_currIdx];
            m_currIdx++;
            if(m_currIdx >= m_sequence.Count)
                Shuffle();

            return currValue;
        }

        //--------------------------------------------------------------
        public void Shuffle()
        {
            int cantBeFirst = -1;
            if(m_sequence != null && m_sequence.Count > 0)
                cantBeFirst = m_sequence[m_sequence.Count-1];

            // Generate a unique sequence to ensure no entry is given twice in a row
            m_deck.Clear();
            for(int i=m_min; i<m_max; i++)
                m_deck.Add(i);

            m_sequence.Clear();
            while(m_deck.Count > 0)
            {
                int randCard = UnityEngine.Random.Range(0, m_deck.Count);
                if(m_deck.Count == (m_max-m_min) && m_deck[randCard] == cantBeFirst)
                {
                    randCard++;
                    if(randCard >= m_deck.Count)
                        randCard = 0;
                }

                m_sequence.Add(m_deck[randCard]);
                m_deck.RemoveAt(randCard);
            }

            m_currIdx = 0;
        }
    }
}
