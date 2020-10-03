//
//  main.cpp
//  compsciassignment11
//
//  Created by Hamza Kassem on 5/24/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include<iostream>
#include<string>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"          //include user defined header files
using namespace std;

int main()
{
    //Create an array of pointers
   Ship *ship[3];
   ship[0]=new Ship("SHIP",2010);
    //CruiseShip object
   ship[1]=new CruiseShip("CRUISE SHIP",2010,250);
    //CargoShip object
   ship[2]=new CargoShip("CARGO SHIP",2010,1000);
   for(int index=0;index<3;index++)
       ship[index]->print();

   system("pause");
   return 0;
}

