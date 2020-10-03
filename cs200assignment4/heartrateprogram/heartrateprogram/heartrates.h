//
//  heartrates.h
//  heartrateprogram
//
//  Created by Hamza Kassem on 3/2/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <string>

using namespace std;

class heartrates
{
public:
    heartrates(string fname, string lname, int mm, int dd, int yy);
    void setfirstname(string fname);
    string getfirstname();
    void setlastname(string lname);
    string getlastname();
    void setmonthofbirth(int mm);
    int getmonthofbirth();
    void setdayofbirth(int dd);
    int getdayofbirth();
    void setyearofbirth(int yy);
    int getyearofbirth();
    int getage();
    int getmaxheartrate();
    string gettargetheartrate();
    
private:
    string firstName;
    string lastName;
    int monthofbirth;
    int dayofbirth;
    int yearofbirth;
};
    

