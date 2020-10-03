//
//  main.cpp
//  cs210Assignment01NpartB
//
//  Created by Hamza Kassem on 8/30/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>

using namespace std;

class Cylinder
{
private:
    int radius;
    int height;
    
public:
    void init(int r, int h);
    double getVolume();
};

void Cylinder::init(int r, int h)
{
    radius = r;
    height = h;
}

double Cylinder::getVolume()
{
    const double pi = 3.1415926535;
    double vol = pi * radius * height;
    return vol;
}

int main()
{
    Cylinder c;
    c.init(10, 20);
    double v = c.getVolume();
    
    cout << "the volume is: " << v;
    
    
}
