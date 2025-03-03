// 9-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int x = 25;
    int* ptr = nullptr;

    //point to the address of x
    ptr = &x;

    // ouput the address size and value of x
    cout << "The variable x is stored at: " << ptr << endl;
    cout << "The variable x has a size of: " << sizeof(x) << endl;
    cout << "The variable x has a value of: " << x << endl;
}