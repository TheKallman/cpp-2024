#include <iostream>
using namespace std;

int menu()
{
    // define variable for menu choice
    int choice = 0;

    do
    {
        // Display the menu for the user
        cout << "\nWelcome to the Chapter 9 Exercise Menu\n";
        cout << "Please choose from the following choices.\n";
        cout << "1.\tExercise 11 Case Manipulator\n";
        cout << "2.\tExercie 12 Password Verifier\n";
        cout << "3.\tExercise 15 Character Analysis\n";
        cout << "4.\tQuit\n";
        cout << "Choice: > ";
        cin >> choice;
    } while (choice < 1 || choice > 4);

    cout << "------------------------------------";
    return choice;
}