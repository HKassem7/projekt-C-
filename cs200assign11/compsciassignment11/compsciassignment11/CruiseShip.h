//
//  CruiseShip.h
//  compsciassignment11
//
//  Created by Hamza Kassem on 5/24/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include<iostream>
#include<string>
#include "Ship.h"       //include the Ship header file
using namespace std;

class CruiseShip :public Ship
{
private:
   int passengers;

public:
   CruiseShip():
       Ship("",0)
   {
       passengers=0;
   }
   CruiseShip(string name,int year,int noOfPassengers):
    Ship(name,year)
   {
       passengers=noOfPassengers;
   }
    void setPassengers(int noOfPassengers)
   {
       passengers=noOfPassengers;
   }

   //returns the passengers
   int getPassengers()
   {
       return passengers;
   }
   //and number of passengers of the cruise ship
   virtual void print()
   {
       cout<<"Cruise Ship Name : "<<getName()<<endl;
       cout<<"Number of Passengers : "<<passengers<<endl;
   }
};

#endif CRUISESHIP_H
