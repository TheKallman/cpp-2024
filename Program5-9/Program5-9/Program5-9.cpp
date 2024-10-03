// Program5-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    const int MAX_VALUE = 10;
    int counter;

    cout << "Number\t\tNumber Squared\n"
        << "--------------------------------------\n";

    for (int counter = 1; counter <= MAX_VALUE; counter++)
    {
        cout << counter << "\t\t" << pow(counter, 2) << endl;
    }
}

