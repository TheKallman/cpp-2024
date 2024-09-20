#include <iostream>
using namespace std;
int main()
{
	char choice;

	cout << "Choose from the following: A, B, or C: ";
	cin >> choice;

	// use the switch statement to report the selection
	switch (choice)
	{
	case 'A': cout << "You entered A.\n";
		break;
	case 'B': cout << "You entered B.\n";
		break;
	case 'C': cout << "You entered C.\n";
		break;
	default: cout << "You did not enter A, B, or C!\n";
	}
}