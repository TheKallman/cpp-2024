#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cctype>
using namespace std;

void play();
int options();

int main()
{
    char uselessQuestion; //real

    cout << "Welcome to Zac's Adventure Game!\n";
    cout << "Start? (y/n)\n";
    cout << ">> ";
    cin >> uselessQuestion;

    if (tolower(uselessQuestion) == 'y')
    {
        play();
    }
    else
    {
        cout << "Too bad!";
        play();
    }
    
}

void play()
{
    string plrName; // user name

    cout << "\nBefore you start your journey, what is your name, traveler?\n";
    cout << ">> ";
    cin.ignore();
    getline(cin, plrName);

    while (plrName.length() > 16)
    {
        cout << "\nPlease not such a mouthful. Less than 16 characters is best.\n";
        cout << ">> ";
        cin.ignore();
        getline(cin, plrName);
    }

    cout << "\nHello " << plrName << " your journey starts now!\n";
    cout << "You awake in the basement of some building with no recollection of how you got there.\n"
        << "You are lying on the floor in your own drool. I suggest the first thing to do is stand up.\n";
    cout << "What would you like to do?\n";
    options();

}

int options()
{
    int choice;

    cout << "\nHere are your options:\n";
    cout << "1. Look around\n";
    cout << "2. Pick up\n";
    cout << "3. Walk around\n";

    cout << "\n>> ";
    cin >> choice;

    if (choice == 3)
    {
        cout << "Which way would you like to go (N/S/E/W)"
    }

}