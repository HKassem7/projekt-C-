//
//  heartrates.cpp
//  heartrateprogram
//
//  Created by Hamza Kassem on 3/2/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include "heartrates.h"

using namespace std;

template <typename T>
std::string tostring(T val)
{
    std::ostringstream oss;
    oss << val;
    return oss.str();
}

heartrates::heartrates(string fname, string lname, int mm, int dd, int yy)
{
    setfirstname(fname);
    setlastname(lname);
    setmonthofbirth(mm);
    setdayofbirth(dd);
    setyearofbirth(yy);
}

void heartrates::setfirstname(string fname)
{
    firstName = fname;
}

string heartrates::getfirstname()
{
    return firstName;
}

void heartrates::setlastname(string lname)
{
    lastName = lname;
}
string heartrates::getlastname()
{
    return lastName;
}

void heartrates::setmonthofbirth(int mm)
{
    monthofbirth = mm;
}

int heartrates::getmonthofbirth()
{
    return monthofbirth;
}

void heartrates::setdayofbirth(int dd)
{
    dayofbirth = dd;
}

int heartrates::getdayofbirth()
{
    return dayofbirth;
}

void heartrates::setyearofbirth(int yy)
{
    yearofbirth = yy;
}

int heartrates::getyearofbirth()
{
    return yearofbirth;
}

int heartrates::getage()
{
    int delta = 0;
    int month, day, year;
    cout << "enter todays date: ";
    cin >> month >> day >> year;
    if(getmonthofbirth() > month)
        delta = -1;
    if((getmonthofbirth() == month) && (getdayofbirth()> day)) delta = -1;
    return (year - getyearofbirth() + delta);
}

int heartrates::getmaxheartrate()
{
    return (220-getage());
}

string heartrates::gettargetheartrate()
{
    int max;
    max = getmaxheartrate();
    string lowrate, highrate;
    lowrate = tostring(max * 50 / 100);
    highrate = tostring(max * 85 / 100);
    
    return (lowrate + "-" + highrate);
    
}
