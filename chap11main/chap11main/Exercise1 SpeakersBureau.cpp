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
	double fee;
};

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
		cout << "Enter your choice: ";
		cin >> choice;
	}
}

void create(Speaker& speaker)
{
	cout << "Speaker name: ";
	cin >> speaker.Name;

	cout << "Telephone: ";
	cin >> speaker.telephone;
	
	cout << "Speaking topic: ";
	cin >> speaker.topic;

	cout << "Fee required: ";
	cin >> speaker.fee;

	if (speaker.fee < 0)
	{
		cout << "Do not make the fee negative.";
		cout << "Fee required: ";
		cin >> speaker.fee;
	}
}

void change(Speaker& speaker)
{
	cout << "Speaker name: ";
	cin >> speaker.Name;

	cout << "Telephone: ";
	cin >> speaker.telephone;

	cout << "Speaking topic: ";
	cin >> speaker.topic;

	cout << "Fee required: ";
	cin >> speaker.fee;

	if (speaker.fee < 0)
	{
		cout << "Do not make the fee negative.";
		cout << "Fee required: ";
		cin >> speaker.fee;
	}
}

void display(Speaker& speaker)
{
	cout << endl << speaker.Name;
	cout << speaker.telephone;
	cout << speaker.topic;
	cout << speaker.fee << endl;
}