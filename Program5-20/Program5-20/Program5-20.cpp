// Program5-20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;

    ifstream inFile("C:\\Users\\2012325\\Desktop\\cpp-2024\\datafiles\\NumericData.txt");

    if (!inFile)
        cout << "Failed to find file.";
    else
    {
        inFile >> number;
        sum += number;

        inFile >> number;
        sum += number;

        inFile >> number;
        sum += number;

        cout << "The sum of the numbers are " << sum << ".";

        inFile.close();

    }

}

