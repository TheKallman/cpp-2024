// 9-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    short numbers[] = { 10, 20, 30, 40, 50 };

    cout << "The first element of the array is: ";
    cout << *numbers;
    // *numbers refers to the address, which is also
    // the first element of an array
    cout << "\nThe second element of the array is: ";
    cout << *(numbers + 1);

    
}
