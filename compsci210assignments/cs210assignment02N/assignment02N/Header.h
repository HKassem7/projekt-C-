//
//  Header.h
//  assignment02N
//
//  Created by Hamza Kassem on 9/12/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <string>

using namespace std;

class StringArray
{
private:
    string* stringArray;
    int size;
    
public:
    StringArray()
    {
        stringArray = NULL;
        size = 0;
    }
    
    int getsize();
    
    void addentry(string element);
    
    bool deleteentry(string input);
    
    string getentry(int k);
    
    StringArray(const StringArray& other);
    
    StringArray operator==(const StringArray& other);
    
    ~StringArray();
};


#endif /* Header_h */
