//
//  main.cpp
//  cs210assignment04N
//
//  Created by Hamza Kassem on 9/27/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct NodeType;
typedef NodeType * NodePtr;
struct RecType

{
    long id;
    string fname;
    string lname;
    
    double amount;
};

struct NodeType

{
    long id;
    string fname;
    string lname;
    double amount;
    NodePtr flink;
    NodePtr blink;
};

class AccountList

{

private:
    NodePtr head;
    NodePtr cursor;

public:
    AccountList ( );
    void addAccountSorted (RecType rec);
    void updateAccount (RecType rec);
    void display(ofstream &lfstream);
};

AccountList::AccountList ( )

{
    head = new NodeType;

    head->id = -1;

    head->fname = "";
    head->lname = "";

    head->amount= -999.999;

    head->flink=head;
    head->blink=head;

    cursor = head;
}

void AccountList::addAccountSorted(RecType rec)

{
    NodePtr newPtr = new NodeType;

    newPtr->id = rec.id;
    newPtr->fname = rec.fname;
    newPtr->lname = rec.lname;
    newPtr->amount = rec.amount;
    newPtr->flink = NULL;
    newPtr->blink = NULL;
    
    NodePtr cur, prev;
    
    for (cur=head->flink; cur!=head; cur=cur->flink)
    {
        if (rec.id < cur->id)
            break;
    }
    
    prev = cur->blink;
    newPtr->flink=prev->flink;
    
    prev->flink = newPtr;
    newPtr->blink = cur->blink;
    
    cur->blink = newPtr;
    
}

void AccountList::updateAccount(RecType rec)

{
    if (cursor == head)
        cursor = cursor->flink;
    if (cursor->id == rec.id)
    {
        cursor->fname = rec.fname;
        cursor->lname = rec.lname;
        
        if(rec.amount > 0)
        {
            cursor->amount += rec.amount;
        }
        
        else
        {
            cursor->amount += rec.amount;
        }
        
        if(cursor->amount <=0)
        {
            NodePtr temp = cursor;
            cursor->blink->flink = cursor->flink;
            cursor->flink->blink = cursor->blink;
            cursor = cursor->flink;
            
            delete(temp);
        }
    }
    
    else if (cursor->id < rec.id)
    {
        while (cursor != head)
        {
            if (cursor->id >= rec.id)
                break;
            cursor = cursor->flink;
        }
        
        if (cursor->id == rec.id)
        {
            cursor->fname = rec.fname;
            cursor->lname = rec.lname;
            
            if(rec.amount > 0)
            {
                cursor->amount += rec.amount;
            }
            
            else
            {
                cursor->amount += rec.amount;
            }
            
            if(cursor->amount <=0)
            {
                NodePtr temp = cursor;
                cursor->blink->flink = cursor->flink;
                cursor->flink->blink = cursor->blink;
                cursor = cursor->flink;
                
                delete(temp);
            }
        }
        
        else
        {
            NodePtr newPtr = new NodeType;
            
            newPtr->id = rec.id;
            newPtr->fname = rec.fname;
            newPtr->lname = rec.lname;
            newPtr->amount = rec.amount;
            newPtr->flink = NULL;
            newPtr->blink = NULL;
            newPtr->blink = cursor->blink;
            newPtr->flink = cursor;
            
            cursor->blink->flink = newPtr;
            cursor->flink->blink = newPtr;
        }
    }
    
    else
    {
        while (cursor != head )
        {
            if (cursor->id <= rec.id)
                break;
            
            cursor = cursor->blink;
        }
        
        if (cursor->id == rec.id)
        {
            cursor->fname = rec.fname;
            cursor->lname = rec.lname;
            
            if(rec.amount > 0)
            {
                cursor->amount += rec.amount;
            }
            
            else
            {
                cursor->amount += rec.amount;
            }
            
            if(cursor->amount <=0)
            {
                NodePtr temp = cursor;
                
                cursor->blink->flink = cursor->flink;
                cursor->flink->blink = cursor->blink;
                cursor = cursor->flink;
                
                delete(temp);
            }
        }
        
        else
        {
            NodePtr newPtr = new NodeType;
            
            newPtr->id = rec.id;
            newPtr->fname = rec.fname;
            newPtr->lname = rec.lname;
            newPtr->amount = rec.amount;
            newPtr->flink = NULL;
            newPtr->blink = NULL;
            
            cursor = cursor->flink;
            
            newPtr->blink = cursor->blink;
            newPtr->flink = cursor;
                    
            cursor->blink->flink = newPtr;
            cursor->flink->blink = newPtr;
        }
    }
}

void AccountList::display(ofstream & lfout)

{
    for(NodePtr cur = head->flink; cur!=head; cur=cur->flink)
        lfout << cur->id << " " << cur->fname << " " << " " << cur->lname << " "
        << cur->amount << endl;
}

void main()
{
    RecType recType;
    AccountList accounts;

    ofstream lfout ("log.txt");
    string master_file,transaction_file;

    cout<<" Enter the master file :";
    cin>>master_file;
    cout<<" Enter the transaction file :";
    cin>>transaction_file;
    
    ifstream master_fin(master_file.c_str());
    ifstream transaction_fin(transaction_file.c_str());
    
    if(master_fin.is_open())
    {
        while(!master_fin.eof())
        {
            master_fin>>recType.id;
            master_fin>>recType.fname;
            master_fin>>recType.lname;
            master_fin>>recType.amount;
            
            accounts.addAccountSorted(recType);
        }
        
        accounts.display(lfout);
        
        if(transaction_fin.is_open())
        {
            while(!transaction_fin.eof())
            {
                transaction_fin>>recType.id;
                transaction_fin>>recType.fname;
                transaction_fin>>recType.lname;
                transaction_fin>>recType.amount;
                
                accounts.updateAccount(recType);
            }
            
            accounts.display(lfout);
        }
        
        else
        {
            cout<<" Unable to open "<<transaction_file;
        }
    }
    
    else
        cout<<" Unable to open "<<master_file;
    master_fin.close();
    transaction_fin.close();
    lfout.close();
}
