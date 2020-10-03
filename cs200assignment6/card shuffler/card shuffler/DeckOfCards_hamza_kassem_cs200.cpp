//
//  DeckOfCards_hamza_kassem_cs200.cpp
//  card shuffler
//
//  Created by Hamza Kassem on 3/23/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <vector>
#include <cstdlib>
#include "DeckOfCards_hamza_kassem_cs200.h"

using namespace std;

DeckOfCards::DeckOfCards()
{
    for(int i=0; i<13; i++)
    {
        for(int j=0; j<4; j++)
        {
            Card c(i, j);
            deck.push_back(c);
        }
    }
    currentCard = 0;
    
    for(int i=0; i<52; i++)
        available[i] = 0;
}

void DeckOfCards::shuffle()
{
    for(int i=0; i<52; i++)
    {
        Card temp = deck[i];
        int random;
        while(true)
        {
            random = rand()%52;
            if(available[random] == 0)
                break;
        }
        deck[i] = deck[random];
        deck[random] = deck[i];
        available[random] = 1;
    }
}

Card DeckOfCards::dealCard()
{
    return deck[currentCard ++];
}
bool DeckOfCards::moreCards()
{
    if(currentCard < 51)
        return true;
    
        return false;
}
