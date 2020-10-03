//
//  cardheader_hamza_kassem_cs200.h
//  card shuffler
//
//  Created by Hamza Kassem on 3/23/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef cardheader_hamza_kassem_cs200_h
#define cardheader_hamza_kassem_cs200_h

#include <cstring>

using namespace std;

class Card
{
private:
    int face, suit;
public:
    Card(int f, int s);
    static string faces[13];
    static string suits[4];
    string toString();
};

#endif /* cardheader_hamza_kassem_cs200_h */
