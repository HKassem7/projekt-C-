//
//  CheckingAccount.cpp
//  cs200assignmentten
//
//  Created by Hamza Kassem on 5/21/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>

using namespace std;
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double balance, double feePerTx): Account(balance)
{
    this->feePerTx = feePerTx;
}

//adds money to the current balance//
void CheckingAccount::credit(double amount)
{
    Account::credit(amount - feePerTx);
}
//subtract money to the current balance//
void CheckingAccount::debit(double amount)
{
    double amt = (amount + feePerTx);
    if (getBalance()<amt)
{
    cout << "Debit amount exceeded account balance." << endl;
}
else
{
    Account::debit(amt);
}
}
