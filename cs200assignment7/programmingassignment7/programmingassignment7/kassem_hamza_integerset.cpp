//
//  kassem_hamza_integerset.cpp
//  programmingassignment7
//
//  Created by Hamza Kassem on 4/8/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>
using std::cout;
using std::cin;
using std::cerr;

#include <iomanip>
using std::setw;

IntegerSet::IntegerSet(int array[], int size)
{
    emptySet();
    
    for (int i = 0; i < size; i++)
        insertElement(array[i]);
}

void IntegerSet::inputSet()
{
    int number;
    do
    {
        cout << "enter an element (-1 to end): ";
        cin >> number;
        
        if (validEntry(number))
            set[number] = 1;
        else if (number != -1)
            cerr << "invalid Element\n";
    }
    while (number != -1);
    cout << "Entry complete\n";
    }

void IntegerSet::printSet() const
{
