//
//  Header.h
//  assignment02Nclone
//
//  Created by Hamza Kassem on 9/13/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef DynamicStringArray_H
#define DynamicStringArray_H

#include <string>

using namespace std;

class DynamicStringArray
{
private:
    string* dynamicArray;
    int size;
    
public:
    DynamicStringArray::DynamicStringArray()
    {
        dynamicArray = NULL;
        size = 0;
    }
    
    int getSize();
    
    void addEntry(string element);
    
    bool deleteEntry(string input);
    
    string getEntry(int k);
    
    DynamicStringArray(const DynamicStringArray& other);
    
    DynamicStringArray operator==(const DynamicStringArray& other);
    
    ~DynamicStringArray();
};


#endif /* DynamicStringArray_H */
