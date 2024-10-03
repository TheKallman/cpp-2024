// Program 5-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int daysCounter, days;
    double sales, total = 0;
    
    cout << "How many days do you want to enter sales for? : ";
    cin >> days;

    for (daysCounter = 1; daysCounter <= days; daysCounter++)
    {
        cout << "Enter sales for day " << daysCounter << ": ";
        cin >> sales;
        total += sales;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "The total sales for " << days << " days is: " << total << endl;
}

