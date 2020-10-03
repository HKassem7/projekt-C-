//
//  DeckOfCards_hamza_kassem_cs200.h
//  card shuffler
//
//  Created by Hamza Kassem on 3/23/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef DeckOfCards_hamza_kassem_cs200_h
#define DeckOfCards_hamza_kassem_cs200_h
#include <vector>

using namespace std;

class DeckOfCards
{
private:
    vector<Card> deck;
    
    int currentCard;
    int available[52];
public:
    DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards();
};

#endif /* DeckOfCards_hamza_kassem_cs200_h */
