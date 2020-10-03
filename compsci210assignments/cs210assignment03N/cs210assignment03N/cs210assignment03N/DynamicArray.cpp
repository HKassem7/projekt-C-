//
//  DynamicArray.cpp
//  cs210assignment03N
//
//  Created by Hamza Kassem on 9/19/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <cstdlib>
#include <iostream>

using namespace std;
template<class T>
class DynamicArray
{
public:

    DynamicArray();
    DynamicArray(const DynamicArray& otherObj);
    ~DynamicArray();
    DynamicArray& operator =(const DynamicArray& rightSide);
    
    void addEntry(T newEntry);
    bool deleteEntry(T newEntry);
    T getEntry(int index);
    int getSize();

private:
   T *dynamicArray;
   int size;
};
template<class T>
DynamicArray<T>::DynamicArray()
{
    dynamicArray = NULL;
    size = 0;
}

template<class T>
DynamicArray<T>::DynamicArray(const DynamicArray& otherObj)

{
    size = otherObj.size;
    if (size == 0)
    {
    dynamicArray = NULL;
    }
    else
    {
        dynamicArray = new T[size];
        for (int i = 0; i < size; i++)
        {
        dynamicArray[i] = otherObj.dynamicArray[i];
        }
}

}

// Overloaded assignment
template<class T>
DynamicArray<T>& DynamicArray<T>::operator =(const DynamicArray& rightSide)
{
    if (dynamicArray != NULL)
    {
        delete[] dynamicArray;
        
    }
    if (rightSide.size == 0)

    {
        size = 0;
        dynamicArray = NULL;
        
    }
    else
    {
        size = rightSide.size;
        dynamicArray = new T[size];
        for (int i = 0; i < size; i++)
        {
            dynamicArray[i] = rightSide.dynamicArray[i];
            
        }
        
    }
    return *this;
    
}

template<class T>
DynamicArray<T>::~DynamicArray()

{
    if (dynamicArray != NULL)
        delete[] dynamicArray;
}

template<class T>
int DynamicArray<T>::getSize()
{
    return size;
    
}

template<class T>
void DynamicArray<T>::addEntry(T newEntry)

{

// Create a new array, copy the contents of the old array, then

// delete it

T *newArray = new T[size + 1];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = dynamicArray[i];
        
    }
    
    delete[] dynamicArray;
    dynamicArray = newArray;

// Add the new entry and increment the size
    newArray[size++] = newEntry;

}

// Removes an entry from the dynamic array. If the entry is not

// found in the array, the array is unmodified.
template<class T>
bool DynamicArray<T>::deleteEntry(T entry)
{
    T *result = NULL;
    int pos = -1;

// First see if the entry is in the array
    for (int i = 0; (i < size) && (pos == -1); i++)
    {
        if (dynamicArray[i] == entry)
        {
            pos = i;
        }
}

    // If entry not found, exit
    if (pos == -1)
    {
        return false;
    }
    
    if (size > 1)
    {
        result = new T[size - 1];
    }
    
    for (int i = 0, j = 0; i < size; i++)
    {
// Skip over the deleted element
        if (i != pos)
        {
            result[j++] = dynamicArray[i];
        }
    }
    
    size--;
    delete[] dynamicArray;
    dynamicArray = result;
    return true;
}

// Retrieve the string at a given index
template<class T>
T DynamicArray<T>::getEntry(int index)
{
    if ((index < 0) || (index >= size))
        return 0;
    return dynamicArray[index];
}

