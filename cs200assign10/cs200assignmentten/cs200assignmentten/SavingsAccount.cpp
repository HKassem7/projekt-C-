//
//  SavingsAccount.cpp
//  cs200assignmentten
//
//  Created by Hamza Kassem on 5/21/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;
#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(double balance, double rate): Account(balance)
{
    this->rate = rate;
}
  
double SavingsAccount::calculateInterest()
{
return getBalance() * (rate);
}
