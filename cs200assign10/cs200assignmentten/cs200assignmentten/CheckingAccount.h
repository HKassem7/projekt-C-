//
//  CheckingAccount.h
//  cs200assignmentten
//
//  Created by Hamza Kassem on 5/21/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "Account.h" 

class CheckingAccount : public Account
{
public:
    CheckingAccount(double balance, double feePerTx);
    void credit(double amount);
    void debit(double amount);

private:
    double feePerTx;
};
#endif





