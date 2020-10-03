//
//  main.cpp
//  coin.h
//
//  Created by Hamza Kassem on 2/23/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef coin_h
#define coin_h
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

class coin
{
    string sideUp;
    public:
    coin();
    void toss();
    string getsideUp();
};

#endif


    
    

