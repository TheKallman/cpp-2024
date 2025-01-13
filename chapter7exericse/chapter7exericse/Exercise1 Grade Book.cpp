#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// finished

void Exercise1()
{
	// set variables and what not
	const int STUDENTS = 5;
	const int TESTS = 4;
	const char GRADE[5] = { 'A', 'B', 'C', 'D', 'F'};

	string s1, s2, s3, s4, s5;
	int t1s1, t2s1, t3s1, t4s1;
	int t1s2, t2s2, t3s2, t4s2;
	int t1s3, t2s3, t3s3, t4s3;
	int t1s4, t2s4, t3s4, t4s4;
	int t1s5, t2s5, t3s5, t4s5;

	// get student information

	cout << "\nEnter the data for student 1.\n";
	cout << "Student name: ";
	cin >> s1;
	cout << "Test score 1: ";
	cin >> t1s1;
	cout << "Test score 2: ";
	cin >> t2s1;
	cout << "Test score 3: ";
	cin >> t3s1;
	cout << "Test score 4: ";
	cin >> t4s1;

	cout << "Enter the data for student 2.\n";
	cout << "Student name: ";
	cin >> s2;
	cout << "Test score 1: ";
	cin >> t1s2;
	cout << "Test score 2: ";
	cin >> t2s2;
	cout << "Test score 3: ";
	cin >> t3s2;
	cout << "Test score 4: ";
	cin >> t4s2;

	cout << "Enter the data for student 3.\n";
	cout << "Student name: ";
	cin >> s3;
	cout << "Test score 1: ";
	cin >> t1s3;
	cout << "Test score 2: ";
	cin >> t2s3;
	cout << "Test score 3: ";
	cin >> t3s3;
	cout << "Test score 4: ";
	cin >> t4s3;

	cout << "Enter the data for student 4.\n";
	cout << "Student name: ";
	cin >> s4;
	cout << "Test score 1: ";
	cin >> t1s4;
	cout << "Test score 2: ";
	cin >> t2s4;
	cout << "Test score 3: ";
	cin >> t3s4;
	cout << "Test score 4: ";
	cin >> t4s4;

	cout << "Enter the data for student 5.\n";
	cout << "Student name: ";
	cin >> s5;
	cout << "Test score 1: ";
	cin >> t1s5;
	cout << "Test score 2: ";
	cin >> t2s5;
	cout << "Test score 3: ";
	cin >> t3s5;
	cout << "Test score 4: ";
	cin >> t4s5;

	//make array things

	const string NAMES[STUDENTS] = { s1, s2, s3, s4, s5 };
	const int SCORES[STUDENTS][TESTS] =
	{ {t1s1, t2s1, t3s1, t4s1},
	{t1s2, t2s2, t3s2, t4s2},
	{t1s3, t2s3, t3s3, t4s3},
	{t1s4, t2s4, t3s4, t4s4},
	{t1s5, t2s5, t3s5, t4s5} };

	// caluclate averages

	double avg1 = ((SCORES[0][0] + SCORES[0][1] + SCORES[0][2] + SCORES[0][3]) / TESTS);
	double avg2 = ((SCORES[1][0] + SCORES[1][1] + SCORES[1][2] + SCORES[1][3]) / TESTS);
	double avg3 = ((SCORES[2][0] + SCORES[2][1] + SCORES[2][2] + SCORES[2][3]) / TESTS);
	double avg4 = ((SCORES[3][0] + SCORES[3][1] + SCORES[3][2] + SCORES[3][3]) / TESTS);
	double avg5 = ((SCORES[4][0] + SCORES[4][1] + SCORES[4][2] + SCORES[4][3]) / TESTS);

	// first student

	cout << "Name: " << s1 << endl;
	cout << "Test 1: " << SCORES[0][0] << endl;
	cout << "Test 2: " << SCORES[0][1] << endl;
	cout << "Test 3: " << SCORES[0][2] << endl;
	cout << "Test 4: " << SCORES[0][3] << endl;
	cout << "Average: " << avg1 << endl << endl;
	if (avg1 >= 89.5)
	{
		cout << "Grade: A";
	}

	else if (avg1 < 89.5 && avg1 >= 79.5)
	{
		cout << "Grade: B";
	}

	else if (avg1 < 79.5 && avg1 >= 69.5)
	{
		cout << "Grade: C";
	}

	else if (avg1 < 69.5 && avg1 >= 59.5)
	{
		cout << "Grade: D";
	}

	else if (avg1 < 59.5)
	{
		cout << "Grade: F";
	}

	// second student

	cout << "Name: " << s2 << endl;
	cout << "Test 1: " << SCORES[1][0] << endl;
	cout << "Test 2: " << SCORES[1][1] << endl;
	cout << "Test 3: " << SCORES[1][2] << endl;
	cout << "Test 4: " << SCORES[1][3] << endl;
	cout << "Average: " << avg2 << endl << endl;
	if (avg2 >= 89.5)
	{
		cout << "Grade: A";
	}

	else if (avg2 < 89.5 && avg2 >= 79.5)
	{
		cout << "Grade: B";
	}

	else if (avg2< 79.5 && avg2 >= 69.5)
	{
		cout << "Grade: C";
	}

	else if (avg2 < 69.5 && avg2 >= 59.5)
	{
		cout << "Grade: D";
	}

	else if (avg2 < 59.5)
	{
		cout << "Grade: F";
	}
	
	// third student

	cout << "Name: " << s3 << endl;
	cout << "Test 1: " << SCORES[2][0] << endl;
	cout << "Test 2: " << SCORES[2][1] << endl;
	cout << "Test 3: " << SCORES[2][2] << endl;
	cout << "Test 4: " << SCORES[2][3] << endl;
	cout << "Average: " << avg3 << endl << endl;
	if (avg3 >= 89.5)
	{
		cout << "Grade: A";
	}

	else if (avg3 < 89.5 && avg3 >= 79.5)
	{
		cout << "Grade: B";
	}

	else if (avg3 < 79.5 && avg3 >= 69.5)
	{
		cout << "Grade: C";
	}

	else if (avg3 < 69.5 && avg3 >= 59.5)
	{
		cout << "Grade: D";
	}

	else if (avg3 < 59.5)
	{
		cout << "Grade: F";
	}

	// fourth sutdnet

	cout << "Name: " << s4 << endl;
	cout << "Test 1: " << SCORES[3][0] << endl;
	cout << "Test 2: " << SCORES[3][1] << endl;
	cout << "Test 3: " << SCORES[3][2] << endl;
	cout << "Test 4: " << SCORES[3][3] << endl;
	cout << "Average: " << avg4 << endl << endl;
	if (avg4 >= 89.5)
	{
		cout << "Grade: A";
	}

	else if (avg4 < 89.5 && avg4 >= 79.5)
	{
		cout << "Grade: B";
	}

	else if (avg4 < 79.5 && avg4 >= 69.5)
	{
		cout << "Grade: C";
	}

	else if (avg4 < 69.5 && avg4 >= 59.5)
	{
		cout << "Grade: D";
	}

	else if (avg4 < 59.5)
	{
		cout << "Grade: F";
	}

	// fifth student

	cout << "Name: " << s5 << endl;
	cout << "Test 1: " << SCORES[4][0] << endl;
	cout << "Test 2: " << SCORES[4][1] << endl;
	cout << "Test 3: " << SCORES[4][2] << endl;
	cout << "Test 4: " << SCORES[4][3] << endl;
	cout << "Average: " << avg5 << endl << endl;
	if (avg5 >= 89.5)
	{
		cout << "Grade: A";
	}

	else if (avg5 < 89.5 && avg5 >= 79.5)
	{
		cout << "Grade: B";
	}

	else if (avg5 < 79.5 && avg5 >= 69.5)
	{
		cout << "Grade: C";
	}

	else if (avg5 < 69.5 && avg5 >= 59.5)
	{
		cout << "Grade: D";
	}

	else if (avg5 < 59.5)
	{
		cout << "Grade: F";
	}
}