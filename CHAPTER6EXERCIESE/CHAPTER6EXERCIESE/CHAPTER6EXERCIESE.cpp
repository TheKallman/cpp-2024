// CHAPTER6EXERCIESE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

void exercise1();
void exercise2();
void exercise3();
void exercise4();

// exercise 1 voids
void getScore(int score);
void calcAverage();
//int findLowest();


void quit();
int main()
{
    int choice = 0;
    while (choice != 5)
    {
        do
        {
            cout << "\nWelcome to my Chapter 5 Exercises.\n";
            cout << "Choose an exercise to run.\n";
            cout << "1. Lowest Score Drop\n";
            cout << "2. Overloaded Hospital\n";
            cout << "3. Population\n";
            cout << "4. Rock, Paper, Scissors, Lizard, Spock\n";
            cout << "5. Quit\n";
            cout << "Enter your selection: ";
            cin >> choice;
        } while (choice < 1 || choice > 5);

        switch (choice)
        {
        case 1:
        {
            exercise1();
            break;
        }
            
        case 2:
        {
            exercise2();
            break;
        }
        case 3:
        {
            exercise3();
            break;
        }
        case 4:
        {
            exercise4();
            break;
        }
        case 5:
        {
            cout << "Thank you for using whatever this is!!!! bye.";
        }
        }
    }
}

// exercise 1 items

void exercise1()
{
    getScore(int &score);

    
}

void getScore(int &score)
{
    //gets a score and stores it
    cout << "Gimme your test score: ";
    cin >> score;

    return;
}

void calcAverage()
{
    cout << "hello";
}

//int findLowest()
//{
 //   cout << "hello";
//}

// exercise 2 items

void exercise2()
{
    cout << "b";
}

void exercise3()
{
    cout << "c";
}

void exercise4()
{
    cout << "d";
}


void quit()
{
    cout << "Hasta luego yung blud";
}