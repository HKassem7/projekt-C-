//
//  CargoShip.h
//  compsciassignment11
//
//  Created by Hamza Kassem on 5/24/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include<iostream>
#include<string>
#include "Ship.h"       //include the Ship header file

using namespace std;

class CargoShip :public Ship
{
private:
   int capacity;

public:
   CargoShip():
       Ship("",0)
   {
       capacity=0;
   }
   CargoShip(string name,int year,int cargo_capacity) :
           Ship(name,year)
   {
       capacity=cargo_capacity;
   }
    void setCapacity(int cargo_capacity)
   {
       capacity=cargo_capacity;
   }
   //Returns the capacity
   int getCapacity()
   {
       return capacity;
   }
   virtual void print()
   {
       cout<<"Cargo Ship Name : "<<getName()<<endl;
       cout<<"Capacity in tons : "<<capacity<<endl;
   }

};

#endif CARGOSHIP_H
