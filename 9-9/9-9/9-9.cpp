// 9-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 8;
	int set[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };
	// pointers can be initialed with an existin object
	int* numPtr = set;
	int count;
	// use the pointer to output the array ascending
	cout << "The numbers ascending are: \n";
	for (count = 0; count < SIZE; count++)
	{
		cout << *numPtr << " ";
		numPtr++;
	}
	// use the pointer to output the array descending
	cout << "\nThe numbers descending (reverse order) are: \n";
	for (count = 0; count < SIZE; count++)
	{
		numPtr--;
		cout << *numPtr << " ";
	}
}
