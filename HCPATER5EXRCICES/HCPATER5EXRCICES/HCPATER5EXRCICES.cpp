#include <iostream>
using namespace std;
int main()
{
    int choice = 0;
    while (choice != 5)
    {
        do
        {
            cout << "\nWelcome to my Chapter 5 Exercises.\n";
            cout << "Choose an exercise to run.\n";
            cout << "1. Exercise 1\n";
            cout << "2. Exercise 2\n";
            cout << "3. Exercise 3\n";
            cout << "4. Exercise 4\n";
            cout << "5. Exercise 5\n";
            cout << "6 Quit\n";
            cout << "Enter your selection: ";
            cin >> choice;
        } while (choice < 1 || choice > 5);

        switch (choice)
        {
        case 1:
        {
            cout << "A";
            break;
        }
        case 2:
        {
            cout << "B";
            break;
        }
        case 3:
        {
            cout << "C";
            break;
        }
        case 4:
        {
            cout << "D";
            break;
        } 
        case 5:
        {
            cout << "E";
            break;
        }
        case 6:
        {
            cout << "Bye bye bye bey bey eyb bey bey.........";
        }
            
        }
    }
}
