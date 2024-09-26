#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
	//hahahahahahahahaha

	int choice = 0;

	cout << "Chapter 4 Exercises Menu\n";
	cout << "1.\tMath Tutor\n";
	cout << "2.\tPersonal Best\n";
	cout << "3.\tGeometry Calculator\n";
	cout << "4.\tWiFi Diagnostic Tree\n";
	cout << "5.\tRestaurant Selector\n";
	cout << "6.\tQuit\n";

	cout << endl << "Enter your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1: // math tutor
	{
		//set min and max range
		int const maxValue = 500;
		int const minValue = 0;

		//make it actually random
		unsigned seed = time(0);
		srand(seed);

		//make 2 numbers to add together
		int num1, num2, userAnswer;

		num1 = (rand() % (maxValue - minValue + 1)) + minValue;
		num2 = (rand() % (maxValue - minValue + 1)) + minValue;

		cout << "  " << num1 << endl;
		cout << "+ " << num2 << endl;
		cout << "-------" << endl << endl;

		//add the numbers
		int answer = num1 + num2;

		cin >> userAnswer;

		if (userAnswer == answer)
		{
			cout << "Genius!";
		}

		else
		{
			cout << "That's wrong. Here is the correct answer.";
			cout << "  " << num1 << endl;
			cout << "+ " << num2 << endl;
			cout << "-------" << endl;
			cout << "  " << answer;
		}

		break;
	}
	case 2: // personal best
	{
		string jumperName, date1, date2, date3;
		float jump1, jump2, jump3;

		//ask for the month and amount of rain in that month
		cout << "Enter the pole vaulter's name: ";
		cin >> jumperName;
		cin.ignore();
		cout << "Enter the date of the first pole vault: ";
		getline(cin, date1);
		cout << "Enter the height of the first pole vault: ";
		cin >> jump1;
		cin.ignore();

		cout << "Enter the date of the second pole vault: ";
		getline(cin, date2);
		cout << "Enter the height of the second pole vault: ";
		cin >> jump2;
		cin.ignore();

		cout << "Enter the date of the third pole vault: ";
		getline(cin, date3);
		cout << "Enter the height of the third pole vault: ";
		cin >> jump3;
		cin.ignore();

		//find top jumps

		if ((jump1 >= jump2) && (jump1 >= jump3))
		{
			if (jump2 >= jump3)
			{

			}
			else
			{

			}
		}
		/*if ((jump1 >= jump2) && (jump1 >= jump3) && (jump2 >= jump3))
		{

			cout << jumperName << "'s personal best:\n";
			cout << "The best vault took place on " << date1 <<
				" with a height of " << jump1 << ".\n";
			cout << "The 2nd best vault took place on " << date2 <<
				" with a height of " << jump2 << ".\n";
			cout << "The 3rd best vault took place on " << date3 <<
				" with a height of " << jump3 << ".\n";
		}
		else if ((jump1 >= jump3) && (jump1 >= jump2) && (jump3 >= jump2))
		{

			cout << jumperName << "'s personal best:\n";
			cout << "The best vault took place on " << date1 <<
				" with a height of " << jump1 << ".\n";
			cout << "The 2nd best vault took place on " << date3 <<
				" with a height of " << jump3 << ".\n";
			cout << "The 3rd best vault took place on " << date3 <<
				" with a height of " << jump2 << ".\n";
		}
		else if ((jump2 >= jump1) && (jump2 >= jump3) && (jump1 >= jump3))
		{

			cout << jumperName << "'s personal best:\n";
			cout << "The best vault took place on " << date2 <<
				" with a height of " << jump2 << ".\n";
			cout << "The 2nd best vault took place on " << date1 <<
				" with a height of " << jump1 << ".\n";
			cout << "The 3rd best vault took place on " << date3 <<
				" with a height of " << jump3 << ".\n";
		}
		else if ((jump2 >= jump3) && (jump2 >= jump1) && (jump3 >= jump1))
		{

			cout << jumperName << "'s personal best:\n";
			cout << "The best vault took place on " << date2 <<
				" with a height of " << jump2 << ".\n";
			cout << "The 2nd best vault took place on " << date3 <<
				" with a height of " << jump3 << ".\n";
			cout << "The 3rd best vault took place on " << date1 <<
				" with a height of " << jump1 << ".\n";
		}
		else if ((jump3 >= jump1) && (jump3 >= jump2) && (jump1 >= jump2))
		{

			cout << jumperName << "'s personal best:\n";
			cout << "The best vault took place on " << date3 <<
				" with a height of " << jump3 << ".\n";
			cout << "The 2nd best vault took place on " << date1 <<
				" with a height of " << jump1 << ".\n";
			cout << "The 3rd best vault took place on " << date2 <<
				" with a height of " << jump2 << ".\n";
		}
		else ((jump3 >= jump2) && (jump3 >= jump1) && (jump2 >= jump1));
		{

			cout << jumperName << "'s personal best:\n";
			cout << "The best vault took place on " << date3 <<
				" with a height of " << jump3 << ".\n";
			cout << "The 2nd best vault took place on " << date2 <<
				" with a height of " << jump2 << ".\n";
			cout << "The 3rd best vault took place on " << date1 <<
				" with a height of " << jump1 << ".\n";
		}

		break;*/
	}
	case 3: // gemoetry calcuators
		cout << "b";

		break;

	case 4: // wifi
		cout << "c";

		break;

	case 5: //restauratn
		cout << "d";

		break;

	case 6: //quit that john

		cout << "e";
		break;

	default:
		cout << "Invalid choice. Only enter values 1-6";
		break;
	}
}