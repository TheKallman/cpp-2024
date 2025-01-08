#include <iostream>
using namespace std;

int menu()
{
    // define variable for menu choice
    int choice = 0;

    do
    {
        // Display the menu for the user
        cout << "\nWelcome to the Chapter 7 Exercise Menu\n";
        cout << "Please choose from the following choices.\n";
        cout << "1.\tExercise 7-12 Grade Book\n";
        cout << "2.\tExercie 7-16 World Series Winners\n";
        cout << "3.\tExercise 7-18 Tic-Tac-Toe\n";
        cout << "4.\tExercie 7-19 Magic 8 Ball\n";
        cout << "5.\tExercise 7-20 1994 Gas Prices\n";
        cout << "6.\tQuit\n";
        cout << "Choice: > ";
        cin >> choice;
    } while (choice < 1 || choice > 6);

    cout << "------------------------------------";
    return choice;
}