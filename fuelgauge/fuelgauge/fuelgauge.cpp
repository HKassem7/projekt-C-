//
//  main.cpp
//  fuelgauge
//
//  Created by Hamza Kassem on 3/8/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>
#include "fuelgauge.h"
using namespace std;

FuelGauge::FuelGauge()
{
    this->capacity = 15;
    this->fuel_amount = 0;
}

int FuelGauge::getFuelAmt()
{
    return fuel_amount;
}

void FuelGauge::fillingupFuel()
{
    while (getFuelAmt() < capacity)
    {
        setFuelAmt(getFuelAmt()+1);
    }
}

void FuelGauge::burningupFuel()
{
    if (getFuelAmt() > 0)
    {
        setFuelAmt(getFuelAmt()-1);
    }
}

void FuelGauge::setFuelAmt(int fuelAmt)
{
    this->fuel_amount = fuelAmt;
}
