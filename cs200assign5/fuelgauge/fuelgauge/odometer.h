//
//  odometer.h
//  fuelgauge
//
//  Created by Hamza Kassem on 3/8/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef odometer_h
#define odometer_h
#include "fuelgauge.h"

class Odometer
{
public:
    Odometer();
    Odometer(FuelGauge fg);
    void runOdometer();

private:
FuelGauge fg;

};
#endif /* odometer_h */
