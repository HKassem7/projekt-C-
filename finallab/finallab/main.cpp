//
//  main.cpp
//  finallab
//
//  Created by Hamza Kassem on 11/4/19.
//  Copyright © 2019 Hamza Kassem. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
class Books
{
public:
    string GenreName;
    void PrintName();
};

void main()
{
    using namespace std;
    ifstream infile;
    infile.open ("SciFi.txt");
    while (!infile.eof)
    {
        getline(infile, string)
        cout << string;
    }
    
    infile.close();
    system ("pause");
        
    
}

void3 main()
{
    using namespace std;
    ifstream infile;
    infile.open ("Novels.txt");
    while (!infile.eof)
    {
        getline(infile, string)
        cout << string;
    }
    
    infile.close();
    system ("pause");
        
    
}
