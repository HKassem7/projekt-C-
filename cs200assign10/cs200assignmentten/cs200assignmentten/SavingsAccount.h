//
//  SavingsAccount.h
//  cs200assignmentten
//
//  Created by Hamza Kassem on 5/21/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h"

class SavingsAccount : public Account
{
private:
    double rate;
public:
    SavingsAccount(double balance, double rate);
    double calculateInterest();
};
#endif


