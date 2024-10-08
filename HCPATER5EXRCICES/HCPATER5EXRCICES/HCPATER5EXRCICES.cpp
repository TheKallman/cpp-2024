
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
#include <ctime>

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
            cout << "1. Random Number Guessing Game\n";
            cout << "2. Numeric Processing\n";
            cout << "3. Triangle Patterns\n";
            cout << "4. Web Page\n";
            cout << "5. Average Steps\n";
            cout << "6 Quit\n";
            cout << "Enter your selection: ";
            cin >> choice;
        } while (choice < 1 || choice > 6);

        switch (choice)
        {
        case 1:
        {
            //init named constants
            const int MAX_VALUE = 1000, MIN_VALUE = 1;

            //defnie varialbes
            int randomNum;
            int guess;

            //make "random"
            unsigned seed = time(0);
            srand(seed);

            //make num from 1 to 1000
            randomNum = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

            //make stuff to get user to guess
            cout << "A number between 1 and 1000 has been chosen.\n"
                << "Guess it and I will tell you if your guess is "
                << "too high or too low\n\n";

            
            do
            {
                cout << "\nGuess: ";
                cin >> guess;

                if (guess > randomNum)
                {
                    cout << "\nToo high, try again.";
                }
                else
                {
                    cout << "\nToo low, try again.";
                }
            } while (guess != randomNum);
       

            cout << "\nYou have guessed the number: " << randomNum;
            











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
