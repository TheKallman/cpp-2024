// Program5-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int temp;

    cout << "Enter the substance temperature in Celsius: ";
    cin >> temp;

    while (temp > 102.5)
    {
        cout << "The temperature is too high! Turn the thermostat down " <<
            endl << "and check the temperature again 5 minutes.";
        cout << "\nPress enter to record the temp again.";
        cin.ignore();
        cin.get();
        cout << "\nEnter the substance temperature in Celsius: ";
        cin >> temp;
    }
    
    cout << "The temperature is below the maximum allowed. Check again in 15 minutes.";

}

