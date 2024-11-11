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
    int startPop = 0, annualBirth = -1, annualDeath = -1, years = 0;

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

    int prevPop = startPop;
    int newPop = prevPop + ((annualBirth/100) * startPop) - ((annualDeath/100) * startPop);
    for (int counter = 1; counter <= years; counter++)
    {
        cout << "\nPopulation at the end of year " << counter << " is " << newPop;

        //formula to change population
        newPop = prevPop + ((annualBirth/100) * startPop) - ((annualDeath/100) * startPop);
        //do the formula, then change the new pop to equal prevPop and then
        //like do the formula
    }
    

}

void exercise4()
{
    cout << "d";
}


void quit()
{
    cout << "Hasta luego yung blud";
}