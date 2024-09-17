#include <iostream>
using namespace std;
int main()
{
	char employed,
		recentGrad;

	cout << "Answer the following questions with either\n"
		<< "Y for yes or N for no";
	cout << "\nAre you currently employed?\n> ";
	cin >> employed;
	cout << "Have you graduated from college in the past two years?\n> ";
	cin >> recentGrad;

	if (employed == 'Y')
	{
		if (recentGrad == 'Y')
		{
			cout << "Congratulations!\n";
			cout << "You qualify for a special interest rate.\n";
		}
		else
		{
			cout << "\nYou must have graduated from a college";
			cout << " in the past two years\nTo qualify for the special";
		}
	}
	else
	{
		cout << "\nYou must be currently employed to qualify for the loan.\n";
		cout << "Get a job and try again.\n";
	}

}