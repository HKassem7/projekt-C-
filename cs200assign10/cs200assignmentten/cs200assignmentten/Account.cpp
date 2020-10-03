//
//  Account.cpp
//  cs200assignmentten
//
//  Created by Hamza Kassem on 5/21/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>

using namespace std;
#include "Account.h"


Account::Account(double balance)
{
    if (balance > 0.0)
{
    this->balance = balance;
}
    else
{
    this->balance = 0.0;
    cout << "** Initial balance was invalid **" << endl;
}
}

//gets current balance//

double Account::getBalance()
{
    return this->balance;
}

void Account::credit(double amount)
{
    balance += amount;
}
void Account::debit(double amount)
{
    if (balance >= amount)
{
    balance -= amount;
}
else
{
    cout << "Debit amount exceded account balance" << endl;
}
}
