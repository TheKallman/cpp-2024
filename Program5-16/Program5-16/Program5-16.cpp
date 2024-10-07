// Program5-16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <iostream>
using namespace std;
int main()
{

	ofstream outFile("C:\\Users\\2012325\\Desktop\\cpp-2024\\datafiles\\numbersdemo.txt");
	
	if (!outFile)
		cout << "File not found.";
	else
	{
		int number1, number2, number3;

		cout << "Enter a number: ";
		cin >> number1;
		cout << "Enter a second number: ";
		cin >> number2;
		cout << "Enter a third number: ";
		cin >> number3;

		outFile << number1 << endl;
		outFile << number2 << endl;
		outFile << number3 << endl;

		outFile.close();
		cout << "Numbers successfully written to numbersdemo.txt\n";
	}
	
}