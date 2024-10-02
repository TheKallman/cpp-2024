// Program5-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int choice = 0;
    while (choice != 5)
    {
        do
        {
            cout << "\nWelcome to the Coffee Kraze Kiosk.\n"
                << "Please make a selection from the options below:\n";
            cout << "1. Coffee ala Americana\n";
            cout << "2. Caramel Machiato\n";
            cout << "3. Mocha Frappa\n";
            cout << "4. Cappucino\n";
            cout << "5. Quit\n";
            cout << "Enter your selection: ";
            cin >> choice;                
        } while (choice < 1 || choice > 5);

        switch (choice)
        {
        case 1:
            cout << "Here is your Coffee ala Americana. Enjoy!\n";
            break;
        case 2:
            cout << "Here is your Caramel Machiato. Enjoy!\n";
            break;
        case 3:
            cout << "Here is your Mocha Frappa. Enjoy!\n";
            break;
        case 4:
            cout << "Here is your Cappucino. Enjoy!\n";
            break;
        case 5:
            cout << "Thank you for stopping by. Have a groovy day!\n";
        }
    }
}

