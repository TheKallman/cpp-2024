// Program5-19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	string name;

	ifstream inFile("C:\\Users\\2012325\\Desktop\\cpp-2024\\datafiles\\demofriends.txt");
	
	if (!inFile)
		cout << "File not found.";
	else
	{
		inFile >> name;
		cout << name << endl;

		inFile >> name;
		cout << name << endl;

		inFile >> name;
		cout << name << endl;

		inFile.close();
		cout << "All names read.\n";
	}
}
