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
        cout << "1.\tExercise 2 Test Scores\n";
        cout << "2.\tExercie 5 Pointer Rewrite\n";
        cout << "3.\tExercise 8 Mode Function\n";
        cout << "4.\tExercie 12 Element Shifter\n";
        cout << "5.\tQuit\n";
        cout << "Choice: > ";
        cin >> choice;
    } while (choice < 1 || choice > 5);

    cout << "------------------------------------";
    return choice;
}