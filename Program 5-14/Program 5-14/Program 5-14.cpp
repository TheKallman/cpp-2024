// Program 5-14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	int numStudents, numTests;
	double total = 0, average = 0;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the number of students to collect scores for: ";
	cin >> numStudents;
	cout << "Enter the number of test scores per student: ";
	cin >> numTests;

	for (int studentCount = 1; studentCount != numStudents; studentCount++)
	{
		cout << "\nEnter scores for Student " << studentCount << "." << endl;
		for (int testCount = 1, score = 0; testCount != numTests; testCount++)
		{
			cout << "Test " << testCount << ": ";
			cin >> score;
			total += score;
		}

		average = total / numTests;
		cout << "Student " << studentCount << " averaged: " << average << endl;
		cout << "---------------------\n";
		total = average = 0;
	}
}