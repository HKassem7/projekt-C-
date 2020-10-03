//
//  main.cpp
//  fuelgauge
//
//  Created by Hamza Kassem on 3/8/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>
#include "fuelgauge.h"
#include "odometer.h"

int main(int argc, char **argv)
{
    FuelGauge fg;
    fg.fillingupFuel();
    Odometer o(fg);
    
    o.runOdometer();
    return 0;
}
