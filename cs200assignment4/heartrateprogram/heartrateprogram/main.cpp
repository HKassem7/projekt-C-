//
//  main.cpp
//  heartrateprogram
//
//  Created by Hamza Kassem on 3/2/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>
#include <string>
#include "heartrates.h"

using namespace std;

int main()
{
    string fname, lname;
    int mm, dd, yy;
    cout << "Please enter your name, and date of birth (mm, dd, yy): " << endl;
    cin >> fname >> lname >> mm >> dd >> yy;
    heartrates person1(fname, lname, mm, dd, yy);
    cout << "your name is " << person1.getfirstname() << " " <<  person1.getlastname() << ". your birthday is " << person1.getmonthofbirth() << "/" << person1.getdayofbirth() << "/" << person1.getyearofbirth() << endl;
    
    cout << "Your age is " << person1.getage() << " years old" << endl;
    cout << "your max heart rate is " << person1.getmaxheartrate() << " bps." << endl;
    cout << "your target heart rate is " << person1.gettargetheartrate() << " bps" << endl;
}
