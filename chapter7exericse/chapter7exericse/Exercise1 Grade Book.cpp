#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

void Exercise1()
{
	const int STUDENTS = 5;
	const int TESTS = 4;
	const double GRADE[5] = { 89.5, 79.5, 69.5, 59.5, 0 };

	string s1, s2, s3, s4, s5;
	int t1s1, t2s1, t3s1, t4s1;
	int t1s2, t2s2, t3s2, t4s2;
	int t1s3, t2s3, t3s3, t4s3;
	int t1s4, t2s4, t3s4, t4s4;
	int t1s5, t2s5, t3s5, t4s5;

	cout << "Enter the data for student 1.";
	cout << "Student name: ";
	cin >> s1;
	cout << "Test score 1: ";
	cin >> t1s1;
}