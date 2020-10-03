//
//  Card_hamza_kassem_cs200.cpp
//  card shuffler
//
//  Created by Hamza Kassem on 3/23/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <cstring>
#include "cardheader_hamza_kassem_cs200.h"

using namespace std;

Card::Card(int f, int s)
{
    face = f;
    suit = s;
}

string Card::faces[13] = { "Ace", "Two", "Three", "Four", "five", "Six", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
string Card::suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

string Card::toString()
{
    return faces[face] + " of" + suits[suit];
};

