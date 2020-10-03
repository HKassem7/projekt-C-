//
//  main.cpp
//  card shuffler
//
//  Created by Hamza Kassem on 3/23/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "DeckOfCards.cpp"

using namespace std;

int main()
{
    DeckOfCards d;
    int count = 1;
    d.shuffle();
    
    while(d.moreCards() == true)
    {
        cout << d.dealCard().toString() << endl;
    }
    return 0;
}
