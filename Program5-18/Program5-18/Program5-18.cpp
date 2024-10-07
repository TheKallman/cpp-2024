// Program5-18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
int main()
{

    string friend1, friend2, friend3;

    ofstream outFile("C:\\Users\\2012325\\Desktop\\cpp-2024\\datafiles\\demofriends.txt");

    if (!outFile)
        cout << "File not found.";
    else
    {
        cout << "Enter a friend's first name: ";
        cin >> friend1;
        cout << "Enter a second friend's first name: ";
        cin >> friend2;
        cout << "Enter a third friend's first name: ";
        cin >> friend3;

        outFile << friend1 << endl;
        outFile << friend2 << endl;
        outFile << friend3 << endl;

        cout << "All names saved to demofriends.txt.";
    }
}
