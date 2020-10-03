//
//  main.cpp
//  assignment02Nclone
//
//  Created by Hamza Kassem on 9/13/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>

#include <string>
#include "DynamicStringArray.h"

using namespace std;

int DynamicStringArray::getSize()
{
    return size;
}

void DynamicStringArray::addEntry(string element)
{
    string* new_dynamic_array = new string[size+1];
    int i;
    
    for (i=0; i < size; i++)
        new_dynamic_array[i] = dynamicArray[i];
        new_dynamic_array[i] = element;
    size++;
    delete[] dynamicArray;
    
    dynamicArray = new_dynamic_array;
}

bool DynamicStringArray::deleteEntry(string input)
{
    int i;
    for (i=0; i<size; i++)
        if(dynamicArray[i].compare(input)==0)
            break;
    if (i==size)
        return false;
    
    string *new_dynamic_array = new string[size-1];
    
    int index = 0;
    for (i=0; i<size; i++)
    {
        if(dynamicArray[i].compare(input) !=0)
            new_dynamic_array[index++] = dynamicArray[i];
    }
    
    delete[] dynamicArray;
    
    size--;
    
    dynamicArray = new_dynamic_array;
    
    return true;
}

string DynamicStringArray::getEntry(int k)
{
    if (k<0 || k > size)
    
        return NULL;
    return dynamicArray[k];
}

DynamicStringArray::DynamicStringArray(const DynamicStringArray& other)
{
    size = other.size;
    dynamicArray = new string[size];
    
    for(int i=0; i<size; i++)
        dynamicArray[i] = other.dynamicArray[i];
}

DynamicStringArray DynamicStringArray::operator==(const DynamicStringArray& other)
{
    size = other.size;
    dynamicArray = new string[size];
    
    for (int i=0; i<size; i++)
        dynamicArray[i] = other.dynamicArray[i];
    
    return *this;
}

DynamicStringArray::~DynamicStringArray()
{
    delete[] dynamicArray;
}
