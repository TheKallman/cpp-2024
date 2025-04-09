#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

struct Speaker
{
	string Name;
	int telephone;
	string topic;
	double fee = 0;
};

Speaker speakerArray[10];
int index = -1;

void create(Speaker& speaker);
void change(Speaker& speaker);
void display(Speaker& speaker);

void exit()
{
	cout << "Thank you for using the speaker bureau thing. Goodbye.";
}
void Exercise1()
{
	Speaker speaker;
	int choice = 0;

	do
	{
		// Display the menu for the user
		cout << "\nWelcome to the Speakers' Bureau\n";
		cout << "Please choose from the following choices.\n";
		cout << "1.\tEnter new speaker information\n";
		cout << "2.\tChange speaker information\n";
		cout << "3.\tDisplay all speaker information\n";
		cout << "4.\tQuit\n";
		cout << "Choice: > ";
		cin >> choice;
	} while (choice < 1 || choice > 4);

	cout << endl;

	while (choice != 4)
	{
		switch (choice)
		{
		case 1:
			create(speaker);
			break;
		case 2:
			change(speaker);
			break;
		case 3:
			display(speaker);
			break;
		case 4:
			exit();
		}
		cout << "\nEnter your choice: ";
		cin >> choice;
	}
}

void create(Speaker& speaker)
{
	index++;
	cout << "Speaker name: ";
	cin.ignore();
	getline(cin, speakerArray[index].Name);

	cout << "Telephone: ";
	cin >> speakerArray[index].telephone;

	cout << "Speaking topic: ";
	cin.ignore();
	getline(cin, speakerArray[index].topic);

	cout << "Fee required: ";
	cin >> speakerArray[index].fee;

	while (speakerArray[index].fee < 0)
	{
		cout << "Do not make the fee negative.\n";
		cout << "Fee required: ";
		cin >> speakerArray[index].fee;
	}
	
	cout << "You have entered information for speaker number " << index << endl;
	
}

void change(Speaker& speaker)
{
	//get speaker from array
	cout << "Which speaker number would you like to change? ";
	cin >> index;

	//output the speaker
	cout << "Speaker name: " << speakerArray[index].Name << endl;
	cout << "Telephone: " << speakerArray[index].telephone << endl;
	cout << "Speaking topic: " << speakerArray[index].topic << endl;
	cout << "Fee required: $" << speakerArray[index].fee << endl;
	cout << endl << endl;

	cout << "Speaker name: ";
	cin.ignore();
	getline(cin, speakerArray[index].Name);

	cout << "Telephone: ";
	cin >> speakerArray[index].telephone;

	cout << "Speaking topic: ";
	cin.ignore();
	getline(cin, speakerArray[index].topic);

	cout << "Fee required: ";
	cin >> speakerArray[index].fee;

	if (speakerArray[index].fee < 0)
	{
		cout << "Do not make the fee negative.";
		cout << "Fee required: ";
		cin >> speakerArray[index].fee;
	}
}

void display(Speaker& speaker)
{
	cout << endl << "Speaker name: " << speakerArray[index].Name << endl;
	cout << "Telephone: " << speakerArray[index].telephone << endl;
	cout << "Speaking topic: " << speakerArray[index].topic << endl;
	cout << "Fee required: $" << speakerArray[index].fee << endl;
}