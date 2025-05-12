//#include "Actions.h"
//#include "Rooms.h"
#include "Backpack.h"
#include "Foyer.h"
#include "Item.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cctype>
using namespace std;

void play();

int main()
{
    char uselessQuestion; //real

    cout << "Welcome to Zac's Escape House!\n";
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
    Foyer foyer;
    string firstThing; //user stands up
    string plrName; // user name

    cout << "\nBefore you start your journey, what is your name, traveler?\n";
    cout << ">> ";
    cin.ignore();
    getline(cin, plrName);

    while (plrName.length() > 16)
    {
        cout << "\nPlease not such a mouthful. Less than 16 characters is best.\n";
        cout << ">> ";
        
        getline(cin, plrName);
    }

    cout << "\nHello " << plrName << ", your journey starts now!\n";
    
    cout << "You awake in the foyer of an unknown house.\n"
        << "You are lying on the floor in your own drool. I suggest the first thing to do is stand up.\n";
    cout << "What would you like to do?\n";
    cout << ">> ";
    
    getline(cin, firstThing);

    //make everything lowercase to make validation easier
    for (char& c : firstThing)
    {
        c = tolower(c);
    }
    
    while (!(firstThing == "stand up" || firstThing == "stand"))
    {
        cout << "\nI suggest the first thing you do is stand up.\n";
        cout << "What would you like to do?\n";
        cout << ">> ";
        
        getline(cin, firstThing);

        for (char& c : firstThing)
        {
            c = tolower(c);
        }
    }

    cout << "Great! Now that you are standing, surely there is something else you can do.\n";
    
    foyer.onEnter();

}