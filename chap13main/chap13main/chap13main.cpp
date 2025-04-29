#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// declare function prototypes
int menu();
void Shopper();



void quit();

int main()
{
	int choice = menu();
	while (choice != 2)
	{
		switch (choice)
		{
		case 1:
			Shopper();
			break;
		case 2:
			quit();
			break;			
		}
		choice = menu();
	}
}

void quit()
{
	cout << "Thank you for using the Exercise Menu System.";

}