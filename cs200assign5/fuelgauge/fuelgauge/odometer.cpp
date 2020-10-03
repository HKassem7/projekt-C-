//
//  odometer.cpp
//  fuelgauge
//
//  Created by Hamza Kassem on 3/8/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>
#include "odometer.h"
using namespace std;

Odometer::Odometer()
{
}

Odometer::Odometer(FuelGauge fg)
{
    this->fg = fg;
}

void Odometer::runOdometer()
{
    int mileage = 0;
    
    while (fg.getFuelAmt()>0)
    {
        for (int i = 1; i <= 24; i++)
        {
            if(mileage == 99999)
            {
                mileage = 0;
            }
            mileage++;
            cout << "mileage: " << mileage << endl;
            if (i == 24)
            {
                fg.burningupFuel();
            }
            cout << "fuel level: " << fg.getFuelAmt() << endl;
        }
    }
}

