#include <iostream>
using namespace std;

int menu()
{
    // define variable for menu choice
    int choice = 0;

    do
    {
        // Display the menu for the user
        cout << "\nWelcome to the Chapter 11 Exercise Menu\n";
        cout << "Please choose from the following choices.\n";
        cout << "1.\tExercise 9 Speakers' Bureau\n";
        cout << "2.\tExercie 13 Drink Machine Simulator \n";
        cout << "3.\tQuit\n";
        cout << "Choice: > ";
        cin >> choice;
    } while (choice < 1 || choice > 3);

    cout << "------------------------------------";
    return choice;
}