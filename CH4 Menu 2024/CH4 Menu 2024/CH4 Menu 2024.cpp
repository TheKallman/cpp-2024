
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
    //define blah balh
    int choice = 0;

    //dipslay meny
    cout << "Welcome to the CHapter 4 Exercise Menu\n";
    cout << "Please choose from the following choices:\n";
    cout << "1.\tExercise 4-11 - Math Tutor Revision\n";
    cout << "2.\tExercise 4-17 - Pole Vault Personal Best\n";
    cout << "3.\tExercise 4-23 - Geometry Calculator\n";
    cout << "4.\tExercise 4-27 - WiFi Diagnostic\n";
    cout << "5.\tExercise 4-28 - Restaurant Selector\n";
    cout << "6.\tQuit\n";

    //get input form useer
    cin >> choice;
    cout << "-------------------------------------------\n\n";

    if (choice >= 1 && choice <= 6)
    {
        if (choice == 1)
        {
            cout << "Exercise 4-11 - Math Tutor Revision\n\n";

            //define varaibles
            int value;

            //rn program
            cout << "Enter a value: ";
            cin >> value;
            cout << value++;
        }
        else if (choice == 2)
        {
            cout << "Exercise 4-17 - Pole Vault Personal Best\n\n";
        }
        else if (choice == 3)
        {
            cout << "Exercise 4-23 - Geometry Calculator\n\n";
        }
        else if (choice == 4)
        {
            cout << "Exercise 4-27 - WiFi Diagnostic\n\n";
        }
        else if (choice == 5)
        {
            cout << "Exercise 4-28 - Restaurant Selector\n\n";
        }
        else
        {
            cout << "Thank you for using the Exercise Selection System\n\n";
        }
    }
    // catch input errors
    else
    {
        cout << "\n\nInvalud choice, try again\n\n";
    }
}
