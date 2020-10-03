//
//  main.cpp
//  coin.cpp
//
//  Created by Hamza Kassem on 2/23/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>
#include "coin.h"

coin::coin()
{
    toss();
}

void coin::toss()
{
    int i = rand()%2;
    
    if(i == 0)
       {
           sideUp = "heads";
       }
    else
    {
        sideUp = "tails";
    }
}
        string coin::getsideUp()
{
    return sideUp;
}
