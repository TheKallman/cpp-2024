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

//void exercise1();
//void exercise2();
void exercise3();
void exercise4();
void quit();
/*
// exercise 1 voids
void getScore(int score);
void calcAverage();
int findLowest();

// exercise 2 voids
int inpatient();
int outpatient();
*/

//exercise 4 voids
double popForm(double, double, double);

//exercise 5 voids
int computerChoice();
int playerChoice();
void winner(int, int);



int main()
{
    int choice = 0;
    while (choice != 5)
    {
        do
        {
            cout << "\nWelcome to my Chapter 6 Exercises.\n";
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
            //exercise1();
            break;
        }
            
        case 2:
        {
            //exercise2();
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

/*void exercise1()
{
    getScore();

    
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
    string patientType;

    cout << "This program will compute patient hospital charges.\n";
    cout << "What was the patient type?\n";
    cout << "In-patient or Out-patient? (I or O) ";

    cin >> patientType;

    if (patientType == "I" || patientType == "i")
    {
        inpatient();
    }
    else if (patientType == "O" || patientType == "o")
    {

        outpatient();

        cout << "The total charges are $" << totalCharge;
    }
    
}
// these need to be overloaded (same name, different parameters)
// i dont know how to do this
int inpatient()
{
    int days, roomRate
}

int outpatient()
{
    int medicationCharge;
    int serviceCharge;

    cout << "Medication charges: ";
    cin >> medicationCharge;

    cout << "Lab fees and other service charges: ";
    cin >> serviceCharge;

    int totalCharge = medicationCharge + serviceCharge;

    return totalCharge;
}*/

void exercise3()
{
    //initialize
    int years = 0;
    double newPop = 0, startPop = 0, annualBirth = -1, annualDeath = -1;

    cout << "\nThis program calculates population change.\n";

    //validate items
    while (startPop < 2)
    {
        cout << "Enter the starting population: ";
        cin >> startPop;
    }
    
    while (annualBirth < 0)
    {
        cout << "Enter the annual birth rate (as % of current population): ";
        cin >> annualBirth;
    }
    
    while (annualDeath < 0)
    {
        cout << "Enter the annual death rate (as % of current population): ";
        cin >> annualDeath;
    }

    while (years < 2)
    {
        cout << "For how many years do you wish to view population changes? ";
        cin >> years;
    }

    //start running simulation
    cout << endl << endl << "Starting population: " << startPop;

    //int prevPop = startPop;
    //int newPop = prevPop + (((annualBirth / 100) * startPop) - ((annualDeath / 100) * startPop));
    annualBirth = annualBirth / 100;
    annualDeath = annualDeath / 100;

    for (int counter = 1; counter <= years; counter++)
    {
        newPop = popForm(startPop, annualBirth, annualDeath);

        cout << "\nPopulation at the end of year " << counter << " is " << newPop;
        
        startPop = newPop;
   
    }
}

double popForm(double pop, double birth, double death)
{
    cout << fixed << setprecision(0);
    return pop + (birth * pop) - (death * pop);
}

void exercise4()
{
    int comChoice = 0;
    comChoice = computerChoice();

    int plrChoice = 0;
    plrChoice = playerChoice();

    winner(comChoice, plrChoice);
}

int computerChoice()
{
    // 1 = rock
    // 2 = paper
    // 3 = scissors
    // 4 = lizard
    // 5 = spock

    int comChoice;
    int const max = 5, min = 1;

    comChoice = (rand() % (max - min + 1)) + min;

    return comChoice;
}

int playerChoice()
{
    int plrChoice;

    cout << "\nChoose your weapon. (rock = 1, paper = 2, scissors = 3, lizard = 4, spock = 5)\n";
    cout << ">> ";
    cin >> plrChoice;
    cout << endl;

    return plrChoice;
}

void winner(int comChoice, int plrChoice)
{
    if (comChoice == plrChoice)
    {
        cout << "You both chose the same weapon!\n";
        cout << "It's a tie!";
    }

    else if (comChoice == 1 && plrChoice == 2)
    {
        cout << "You chose: Paper\nComputer chose: Rock\n";
        cout << "Player wins!";
    }

    else if (comChoice == 1 && plrChoice == 3)
    {
        cout << "You chose: Scissors\nComputer chose: Rock\n";
        cout << "Computer wins!";
    }

    else if (comChoice == 1 && plrChoice == 4)
    {
        cout << "You chose: Lizard\nComputer chose: Rock\n";
        cout << "Computer wins!";
    }

    else if (comChoice == 1 && plrChoice == 5)
    {
        cout << "You chose: Spock\nComputer chose: Rock\n";
        cout << "Player wins!";
    }

    // computer choice == 2 outcomes

    else if (comChoice == 2 && plrChoice == 1)
    {
        cout << "You chose: Rock\nComputer chose: Paper\n";
        cout << "Computer wins!";
    }

    else if (comChoice == 2 && plrChoice == 3)
    {
        cout << "You chose: Scissors\nComputer chose: Paper\n";
        cout << "Player wins!";
    }

    else if (comChoice == 2 && plrChoice == 4)
    {
        cout << "You chose: Lizard\nComputer chose: Paper\n";
        cout << "Player wins!";
    }

    else if (comChoice == 2 && plrChoice == 5)
    {
        cout << "You chose: Spock\nComputer chose: Paper\n";
        cout << "Computer wins!";
    }

    // computer choice == 3 outcomes

    else if (comChoice == 3 && plrChoice == 1)
    {
        cout << "You chose: Rock\nComputer chose: Scissors\n";
        cout << "Player wins!";
    }

    else if (comChoice == 3 && plrChoice == 2)
    {
        cout << "You chose: Paper\nComputer chose: Scissors\n";
        cout << "Computer wins!";
    }

    else if (comChoice == 3 && plrChoice == 4)
    {
        cout << "You chose: Lizard\nComputer chose: Scissors\n";
        cout << "Computer wins!";
    }

    else if (comChoice == 3 && plrChoice == 5)
    {
        cout << "You chose: Spock\nComputer chose: Scissors\n";
        cout << "Player wins!";
    }

    // computer choice == 4 outcomes

    else if (comChoice == 4 && plrChoice == 1)
    {
        cout << "You chose: Rock\nComputer chose: Lizard\n";
        cout << "Player wins!";
    }

    else if (comChoice == 4 && plrChoice == 2)
    {
        cout << "You chose: Paper\nComputer chose: Lizard\n";
        cout << "Computer wins!";
    }

    else if (comChoice == 4 && plrChoice == 3)
    {
        cout << "You chose: Scissors\nComputer chose: Lizard\n";
        cout << "Player wins!";
    }

    else if (comChoice == 4 && plrChoice == 5)
    {
        cout << "You chose: Spock\nComputer chose: Lizard\n";
        cout << "Computer wins!";
    }

    // computer choice == 5 outcomes

    else if (comChoice == 5 && plrChoice == 1)
    {
        cout << "You chose: Rock\nComputer chose: Spock\n";
        cout << "Computer wins!";
    }

    else if (comChoice == 5 && plrChoice == 2)
    {
        cout << "You chose: Paper\nComputer chose: Spock\n";
        cout << "Computer wins!";
    }

    else if (comChoice == 5 && plrChoice == 3)
    {
        cout << "You chose: Scissors\nComputer chose: Spock\n";
        cout << "Player wins!";
    }

    else if (comChoice == 5 && plrChoice == 4)
    {
        cout << "You chose: Lizard\nComputer chose: Spock\n";
        cout << "Player wins!";
    }

    cout << endl;
}

void quit()
{
    cout << "Hasta luego yung blud";
}