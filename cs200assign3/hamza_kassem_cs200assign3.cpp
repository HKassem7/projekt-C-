//
//  hamza_kassem_cs200assign3.cpp
//  
//
//  Created by Hamza Kassem on 2/23/20.
//

#include "coin.h"
#include <iomanip>

int main(){
    srand(time(NULL));            //creating random numbers
    double playerbalance = 0, computerbalance = 0;
    coin quarter, dime, nickel;
    
    int round = 1;
    bool gameover = false;      //boolean loop for to repeat until given result
    
    cout << setprecision(2) << fixed;  //set decimal point to 2
    
    cout << "your starting balance is : $" << playerbalance << endl;        // display starting balance for players
    cout << "the computers starting balance is : $" << computerbalance << endl;
    
while(!gameover)
{                         //toss three coin functions
    quarter.toss();
    dime.toss();
    nickel.toss();
    
    if(quarter.getsideUp() == "heads")          //adding cash to player balance depending on conditions
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
    
    cout << "your balance after this round " << round << ": $" << playerbalance <<  endl;  // display balance after each round
    cout << "the computers balance after this round " << round << ": $" << computerbalance << endl;
    if(playerbalance >= 1 || computerbalance >= 1)
    {
        gameover = true;         //end boolean loop
    }
    round++
}
    cout << "your ending balance is : $" << playerbalance << endl;     //display final balances
    cout << "the computers ending balance is : $" << computerbalance << endl;
    
    if(playerbalance == computerbalance)     //determine winner
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
