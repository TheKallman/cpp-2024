// 9-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int x = 25;

    //output the memory location size and value
    cout << "The variable x is stored at: " << &x << endl;
    cout << "The size of variable x is: " << sizeof(x) << endl;
    cout << "The value stored in x is: " << x << endl;
}