//
//  main.cpp
//  cs200assign1
//
//  Created by Hamza Kassem on 2/8/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>
#include <string>

#define ROWS 4
#define COLS 5

using namespace std;

int getTotal(int[][COLS], int, int);
float getAverage(int[][COLS], int, int);
int getRowTotal(int[][COLS], int, int);
int getColumnTotal(int[][COLS], int, int);
int getHighestInRow(int[][COLS], int, int);
int getLowestInRow(int[][COLS], int, int);

int main() {
        int testArray[ROWS][COLS] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15},
            {16, 17, 18, 19, 20}
        };
        
    cout << "The total of array elements is "
        << getTotal(testArray, ROWS, COLS)
        << endl;
        
    cout << "The average value of an element is " << getAverage(testArray, ROWS, COLS) << endl;
        
    cout << "The total of row 0 is " << getRowTotal(testArray, 0, COLS) << endl;
        
    cout << "the total of col 2 is " << getColumnTotal(testArray, 2, ROWS) << endl;
        
    cout << "The highest value in row 2 is " << getHighestInRow(testArray, 2, COLS) << endl;
        
    cout << "The lowest value in row 2 is " << getLowestInRow(testArray, 2, COLS) << endl;
        
        return 0;
    }

int getTotal(int array[][COLS], int rows, int cols)
{
    int sum = 0;
    for(int i = 0;i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            sum = sum + array[i][j];
        }
    }
    return sum;
}

float getAverage(int array[][COLS], int rows, int cols)
{
    int count = rows*cols;
    int sum = getTotal(array, rows, cols);
    float average = (float)sum/(float)count;
    return average;
}

int getRowTotal(int array[][COLS], int the_row, int cols)
{
    int sum=0;
    for(int i = 0; i < cols; i++)
    {
        sum = sum + array[the_row][i];
    }
    return sum;
}

int getColumnTotal(int array[][COLS], int the_col, int rows)
{
    int sum=0;
    for(int i = 0; i < rows; i++)
    {
        sum = sum + array[i][the_col];
    }
    return sum;
}

int getHighestInRow(int array[][COLS], int the_row, int cols)
{
    int highest = array[the_row][0];
    for(int i = 0; i < cols; i++)
    {
        if(array[the_row][i] > highest)
        {
            highest = array[the_row][i];
        }
    }
    return highest;
}

int getLowestInRow(int array[][COLS], int the_row, int cols)
{
        int lowest = array[the_row][0];
        for(int i=0; i < cols; i++)
        {if(array[the_row][i] < lowest)
        {
            lowest = array[the_row][i];
        }
        }
        return lowest;
    }





