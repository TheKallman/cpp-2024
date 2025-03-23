// 9-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int x = 25;
    int y = 50;
    int z = 75;

    cout << "Here are the values of x, y, and z:\n"
        << x << " " << y << " " << z << endl;

    int* ptr = &x;
    *ptr += 100;

    int* intptr2 = &y;
    *intptr2 += 100;

    int* intptr3 = &z;
    *intptr3 += 100;

    
    cout << "Here are the valuse of x, y, and z again:\n"
        << x << " " << y << " " << z << endl;
}
