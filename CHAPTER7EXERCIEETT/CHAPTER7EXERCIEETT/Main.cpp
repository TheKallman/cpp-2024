#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// declare function prototypes
int menu();
void Exercise1();
void Exercise2();
void Exercise3();
void Exercise4();
void Exercise5();
void quit();

int main()
{
	int choice = menu();
	while (choice != 6)
	{
		switch (choice)
		{
		case 1:
			Exercise1();
			break;
		case 2:
			Exercise2();
			break;
		case 3:
			Exercise3();
			break;
		case 4:
			Exercise4();
			break;
		case 5:
			quit();
		}
		choice = menu();
	}
}

void Exercise4()
{
	cout << "Yo4";
	
}

void Exercise5()
{
	cout << "Yo5";
	
}

void quit()
{
	cout << "Thank you for using the Exercise Menu System.";
	
}