// Program 6-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// function prototype
int sum(int, int);

int main()
{
    int value1 = 20,
        value2 = 40,
        total;

    // call sum function, passing contents of value 1 and 2 as arguments.
    // assign the return value to the total variable
    total = sum(value1, value2);

    // display the sum of the values.
    cout << "The sum of " << value1 << " and " << value2
        << " is " << total << endl;
    // return 0; idk if needed so test it out cuh
}

int sum(int num1, int num2)
{
    return num1 + num2;
}
