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

		//check if jump is inbetween 2 and 5 meters
		if (!(jump1 >= 2 && jump1 <= 5))
		{
			cout << "ur hops need to be inbetween 2 and 5 meters sir";
			break;
		}


		cout << "Enter the date of the second pole vault: ";
		getline(cin, date2);
		cout << "Enter the height of the second pole vault: ";
		cin >> jump2;
		cin.ignore();

		//check if jump is inbetween 2 and 5 meters
		if (!(jump2 >= 2 && jump2 <= 5))
		{
			cout << "ur hops need to be inbetween 2 and 5 meters sir";
			break;
		}

		cout << "Enter the date of the third pole vault: ";
		getline(cin, date3);
		cout << "Enter the height of the third pole vault: ";
		cin >> jump3;
		cin.ignore();

		//check if jump is inbetween 2 and 5 meters
		if (!(jump3 >= 2 && jump3 <= 5))
		{
			cout << "ur hops need to be inbetween 2 and 5 meters sir";
			break;
		}

		//find top jumps

		if ((jump1 >= jump2) && (jump1 >= jump3))
		{
			if (jump2 >= jump3)
			{
				cout << jumperName << "'s personal best:\n";
				cout << "The best vault took place on " << date1 <<
					" with a height of " << jump1 << ".\n";
				cout << "The 2nd best vault took place on " << date2 <<
					" with a height of " << jump2 << ".\n";
				cout << "The 3rd best vault took place on " << date3 <<
					" with a height of " << jump3 << ".\n";
			}
			else
			{
				cout << jumperName << "'s personal best:\n";
				cout << "The best vault took place on " << date1 <<
					" with a height of " << jump1 << ".\n";
				cout << "The 2nd best vault took place on " << date3 <<
					" with a height of " << jump3 << ".\n";
				cout << "The 3rd best vault took place on " << date2 <<
					" with a height of " << jump2 << ".\n";
			}
		}

		if ((jump2 >= jump1) && (jump2 >= jump3))
		{
			if (jump1 >= jump3)
			{
				cout << jumperName << "'s personal best:\n";
				cout << "The best vault took place on " << date2 <<
					" with a height of " << jump2 << ".\n";
				cout << "The 2nd best vault took place on " << date1 <<
					" with a height of " << jump1 << ".\n";
				cout << "The 3rd best vault took place on " << date3 <<
					" with a height of " << jump3 << ".\n";
			}
			else
			{
				cout << jumperName << "'s personal best:\n";
				cout << "The best vault took place on " << date2 <<
					" with a height of " << jump2 << ".\n";
				cout << "The 2nd best vault took place on " << date3 <<
					" with a height of " << jump3 << ".\n";
				cout << "The 3rd best vault took place on " << date1 <<
					" with a height of " << jump1 << ".\n";
			}
		}

		if ((jump3 >= jump2) && (jump3 >= jump1))
		{
			if (jump2 >= jump1)
			{
				cout << jumperName << "'s personal best:\n";
				cout << "The best vault took place on " << date3 <<
					" with a height of " << jump3 << ".\n";
				cout << "The 2nd best vault took place on " << date2 <<
					" with a height of " << jump2 << ".\n";
				cout << "The 3rd best vault took place on " << date1 <<
					" with a height of " << jump1 << ".\n";

			}
			else
			{
				cout << jumperName << "'s personal best:\n";
				cout << "The best vault took place on " << date3 <<
					" with a height of " << jump3 << ".\n";
				cout << "The 2nd best vault took place on " << date1 <<
					" with a height of " << jump1 << ".\n";
				cout << "The 3rd best vault took place on " << date2 <<
					" with a height of " << jump2 << ".\n";
			}
		}
		break;
	}
	case 3: // gemoetry calcuators
	{
		int geoChoice = 0;

		cout << "\nGeometry Calculator\n\n";
		cout << "1. Calculate the area of a Circle\n";
		cout << "2. Calculate the area of a Rectangle\n";
		cout << "3. Calculate the area of a Triangle\n";
		cout << "4. Quit\n\n";

		cout << "Enter your choice (1-4): ";
		cin >> geoChoice;

		switch (geoChoice)
		{
		case 1:
		{
			double radius;
			double PI = 3.141592653;

			//get input frmo user
			cout << "\nEnter the circle's radius: ";
			cin >> radius;

			// calculate area
			double area = PI * (pow(radius, 2));

			//output area
			cout << "\nThe area is " << area;

			break;
		}
		case 2:
		{
			double length, width;

			//get input from user
			cout << "\nEnter the rectangle's length: ";
			cin >> length;
			cout << "Enter the rectangle's width: ";
			cin >> width;

			// calculate area
			double area = length * width;

			//output area
			cout << "\nThe area is " << area;

			break;
		}
		case 3:
		{
			double base, height;

			//get input from user
			cout << "\nEnter the length of the base: ";
			cin >> base;
			cout << "Enter the triangle's height: ";
			cin >> height;

			// calclautela area
			double area = base * height * 0.5;

			cout << "\nThe area is " << area;

			break;
		}
		case 4:
		{
			cout << "\nThank you for something bye bye";

			break;
		}
		}
		break;
	}

	case 4: // wifi
	{
		string fix1, fix2, fix3, fix4;
		cout << "This is wifi hhelp hotline. "
			<< "Reboot computer and try to connect. "
			<< "Did that fix the problem? (YES or NO) ";

		cin >> fix1;
	
		if (fix1 == "NO" || fix1 == "no")
		{
			cout << "Reboot router and try to connect. "
				<< "Did that fix the problem? (YES or NO) ";

			cin >> fix2;
		}
		else
		{
			cout << "Netflix and chill";
		}

		if (fix2 == "NO" || fix2 == "no")
		{
			cout << "Verify cables are firmly attached. "
				<< "Did that fix the problem? (YES or NO) ";

			cin >> fix3;
		}
		else
		{
			cout << "Netflix and chill";
		}

		if (fix3 == "NO" || fix3 == "no")
		{
			cout << "Move router to better location. "
				<< "Did that fix the problem? (YES or NO) ";

			cin >> fix4;
		}
		else
		{
			cout << "Netflix and chill";
		}

		if (fix4 == "NO" || fix4 == "no")
		{
			cout << "Get a new router.";
		}
		else
		{
			cout << "Netflix and chill";
		}
			
		break;
	}

	case 5: //restauratn
	{
		cout << "d";

		break;
	}

	case 6: //quit that john
	{
		cout << "e";
		break;
	}
	default:
	{
		cout << "Invalid choice. Only enter values 1-6";
		break;
	}
	}
}