//
//  main.cpp
//  cs210assignment01N
//
//  Created by Hamza Kassem on 8/30/20.
//  Copyright © 2020 Hamza Kassem. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
#define Days_Worked 5
#define Num_Employees 4
struct Employee
{
    string lastname;
    double hour_worked[Days_Worked];
    double hourly_rate;
    double weekly_pay;
};

void initialize(Employee[]);
void compute(Employee&);
void result(Employee);
int main()
{
    Employee emps[Num_Employees];
    initialize(emps);
    for (int i = 0; i < Num_Employees; i++)
    {
        compute(emps[i]);
    }
    for (int i = 0; i < Num_Employees; i++)
    {
        result(emps[i]);
    }
    system("pause");
    return 1;
}
void initialize(Employee emps[])
{
    string week_days[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    for (int i = 0; i < Num_Employees; i++)
    {
        cout << "Please enter the last name of the Employee: ";
        cin >> emps[i].lastname;
        for (int j=0; j < Days_Worked; j++)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter the working hours for the " << week_days[j] << ": ";
            cin >> emps[i].hour_worked[j];
    }
        cout << "Please enter the hourly rate: ";
        cin >> emps[i].hourly_rate;
        cout << endl;
    }
}
void compute(Employee& emp)
{
    int sum_hour = 0;
    double pay = 0;
    for (int i = 0; i < Days_Worked; i++)
        sum_hour += emp.hour_worked[i];
    if (sum_hour > 40)
    {
        pay = (40 * emp.hourly_rate) + (sum_hour - 40) * 1.5 * emp.hourly_rate;
    }
    else
        pay = emp.hourly_rate * sum_hour;
    emp.weekly_pay = pay;
}
void result(Employee emp)
{
    cout << "Lastname: " << emp.lastname << endl;;
    cout << "Weekly pay: " << emp.weekly_pay << endl << endl;
}
