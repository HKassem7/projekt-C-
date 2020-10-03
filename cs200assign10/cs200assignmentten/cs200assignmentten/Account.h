//
//  Account.h
//  cs200assignmentten
//
//  Created by Hamza Kassem on 5/21/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
// Declaring variables //
    double balance;

public:
    Account(double balance);
    void credit(double amount);
    void debit(double amount);
    double getBalance();
};
#endif


