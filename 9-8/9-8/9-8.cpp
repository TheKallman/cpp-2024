// 9-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 5;
	int numbers[SIZE];
	int count;
	int* ptr = numbers; // use a pointer to refer to numbers

	// get values and store them in the array
	// using pointer notation instaed of indexes
	for (count = 0; count < SIZE; count++)
	{
		cout << "Enter a number: ";
		cin >> *(numbers + count);
	}
	//output the array using pointer notatino
	cout << "Here ar ethe numbers you entered:\n";
	for (count = 0; count < SIZE; count++)
	{
		cout << *(numbers + count) << endl;
	}
	cout << "press any keyt.....\n";
	cin.get();
	//output the array using pointer notation
	// for each element
	cout << "Here, finally, are the numbers you entered:\b";

	for (count = 0; count < SIZE; count++)
	{
		ptr = &numbers[count];
		cout << *ptr << endl;
	}
}