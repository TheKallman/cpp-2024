#include <iostream>
using namespace std;
int main()
{
	int grade;
	int const A_SCORE = 90, B_SCORE = 80, C_SCORE = 70, D_SCORE = 60, F_SCORE = 0;

	cout << "What is your grade? ";
	cin >> grade;

	if (grade >= A_SCORE)
	{
		cout << "You have an A!";
	}
	else if (grade >= B_SCORE)
	{
		cout << "You have a B!";
	}
	else if (grade >= C_SCORE)
	{
		cout << "You have a C!";
	}
	else if (grade >= D_SCORE)
	{
		cout << "You have a D!";
	}
	else if (grade >= F_SCORE)
	{
		cout << "You have a F!";
	}
}