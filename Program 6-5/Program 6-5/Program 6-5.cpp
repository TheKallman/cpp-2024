// Program 6-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void first();
void second();

int main()
{
    cout << "Now calling function first...\n";
    first();
    cout << "Now calling function second...\n";
    second();
    cout << "Success!\n";
}

void first()
{
    cout << "first\n";
}

void second()
{
    cout << "second\n";
}