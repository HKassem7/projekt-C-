//
//  fuelgauge.h
//  fuelgauge
//
//  Created by Hamza Kassem on 3/8/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef fuelgauge_h
#define fuelgauge_h

class FuelGauge
{
public:
    FuelGauge();
    int getFuelAmt();
    void fillingupFuel();
    void burningupFuel();
    
    void setFuelAmt(int fuelAmt);
private:
    int fuel_amount;
    int capacity;
};
#endif /* fuelgauge_h */
