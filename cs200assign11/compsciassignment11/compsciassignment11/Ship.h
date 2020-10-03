//
//  Ship.h
//  compsciassignment11
//
//  Created by Hamza Kassem on 5/24/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef SHIP_H
#define SHIP_H
#include<iostream>
#include<string>    //include header files

using namespace std;
class Ship          //Defintion of Ship class
{
private:
   string name;
   int year;

public:
    Ship()
   {
       name="";
       year=0;
   }
   Ship(string shipName,int buildYear)
   {
       name=shipName;
       year=buildYear;
   }

   //set name of ship
   void setName(string shipName)
   {
       name=shipName;
   }
   //set build year of ship
   void setYear(int buildYear)
   {
       year=buildYear;
   }

   //Returns the name of ship
   string getName()
   {
       return name;
   }

   //returns build year of ship
   int getYear(int buildYear)
   {
       return year;
   }

   //prints the name and year of the ship
   virtual void print()
   {
       cout<<"Name : "<<name<<endl;
       cout<<"year : "<<year<<endl;
   }
};

#endif SHIP_H
