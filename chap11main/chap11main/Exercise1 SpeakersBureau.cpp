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
int index;

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
		cout << "\nEnter your choice: ";
		cin >> choice;
	}
}

void create(Speaker& speaker)
{

	for (index = 0; index < 10; index++)
	{
		cout << "Speaker name: ";
		cin.ignore();
		getline(cin, speakerArray[index].Name);

		cout << "Telephone: ";
		cin >> speakerArray[index].telephone;

		cout << "Speaking topic: ";
		cin.ignore();
		getline(cin, speakerArray[index].topic);

		cout << "Fee required: ";
		cin >> speaker.fee;

		if (speaker.fee < 0)
		{
			cout << "Do not make the fee negative.";
			cout << "Fee required: ";
			cin >> speakerArray[index].fee;
		}
	}
	cout << "You have entered information for speaker number " << index;
}

void change(Speaker& speaker)
{
	cout << "Speaker name: ";
	cin.ignore();
	getline(cin, speaker.Name);

	cout << "Telephone: ";
	cin >> speaker.telephone;

	cout << "Speaking topic: ";
	cin.ignore();
	getline(cin, speaker.topic);

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