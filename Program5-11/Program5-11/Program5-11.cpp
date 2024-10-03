// Program5-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{

    const int KPH_MIN = 60, KPH_MAX = 130, INCREMENT = 10;
    const double CONV = 0.6214;

    int kph;
    double mph;

    cout << "KPH\t\tMPH\n"
        << "--------------------------------\n";
    cout << fixed << showpoint << setprecision(2);

    for (kph = KPH_MIN; kph <= KPH_MAX; kph += INCREMENT)
    {
        mph = kph * CONV;
        cout << kph << "\t\t" << mph << endl;
    }
    
    
}

