//
//  string array.cpp
//  assignment02N
//
//  Created by Hamza Kassem on 9/12/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <string>
#include "Header.h"

using namespace std;

int StringArray::getsize()
{
    return size;
}

void StringArray::addentry(string element)
{
    string* new_string_array = new string[size+1];
    int i;
    
    for (i=0; i < size; i++)
        new_string_array[i] = stringArray[i];
        new_string_array[i] = element;
    size++;
    delete[] stringArray;
    
    stringArray = new_string_array;
}

bool StringArray::deleteentry(string input)
{
    int i;
    for (i=0; i<size; i++)
        if(stringArray[i].compare(input)==0)
            break;
    if (i==size)
        return false;
    
    string *new_string_array = new string[size-1];
    
    int index = 0;
    for (i=0; i<size; i++)
    {
        if(stringArray[i].compare(input) !=0)
            new_string_array[index++] = stringArray[i];
    }
    
    delete[] stringArray;
    
    size--;
    
    stringArray = new_string_array;
    
    return true;
}

string StringArray::getentry(int k)
{
    if (k<0 || k > size)
    
        return NULL;
    return stringArray[k];
}

StringArray::StringArray(const StringArray& other)
{
    size = other.size;
    stringArray = new string[size];
    
    for(int i=0; i<size; i++)
        stringArray[i] = other.stringArray[i];
}

StringArray StringArray::operator==(const StringArray& other)
{
    size = other.size;
    stringArray = new string[size];
    
    for (int i=0; i<size; i++)
        stringArray[i] = other.stringArray[i];
    
    return *this;
}

StringArray::~StringArray()
{
    delete[] stringArray;
}
