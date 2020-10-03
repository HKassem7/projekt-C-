//
//  main.cpp
//  projectassignment3
//
//  Created by Hamza Kassem on 2/23/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include "coin.h"
#include <iomanip>

int main(){
    srand(time(NULL));
    double playerbalance = 0, computerbalance = 0;
    coin quarter, dime, nickel;
    
    int round = 1;
    bool gameover = false;
    
    cout << setprecision(2) << fixed;
    
    cout << "your starting balance is : $" << playerbalance << endl;
    cout << "the computers starting balance is : $" << computerbalance << endl;
    
while(!gameover)
{
    quarter.toss();
    dime.toss();
    nickel.toss();
    
    if(quarter.getsideUp() == "heads")
    {
        playerbalance += 0.25;
    }
    if(dime.getsideUp() == "heads")
    {
        playerbalance += 0.10;
    }
    if(nickel.getsideUp() == "heads")
    {
        playerbalance += 0.05;
    }
    if(quarter.getsideUp() == "heads")
    {
        computerbalance += 0.25;
    }
    if(dime.getsideUp() == "heads")
    {
        computerbalance += 0.10;
    }
    if(nickel.getsideUp() == "heads")
    {
        computerbalance += 0.05;
    }
    
    cout << "your balance after this round " << round << ": $" << playerbalance << endl;
    cout << "the computers balance after this round " << round << ": $" << computerbalance << endl;
    if(playerbalance >= 1 || computerbalance >= 1)
    {
        gameover = true;
    }
    round++;
}
    cout << "your ending balance is : $" << playerbalance << endl;
    cout << "the computers ending balance is : $" << computerbalance << endl;
    
    if(playerbalance == computerbalance)
    {
        cout << "its a draw!" << endl;
    }
    else if(playerbalance > computerbalance)
    {
        cout << "congratulations, you win!" << endl;
    }
    else
    {
        cout << "computer wins :(" << endl;
    }
}
