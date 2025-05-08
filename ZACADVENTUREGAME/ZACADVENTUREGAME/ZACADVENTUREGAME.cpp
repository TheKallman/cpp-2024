#include "Actions.h"
#include "Rooms.h"
#include "Backpack.h"


#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cctype>
using namespace std;

void play();
int choosing();


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

    cout << "\nHello " << plrName << " your journey starts now!\n";
    cout << "You awake in the basement of some building with no recollection of how you got there.\n"
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

    cout << "Great! Now that you are standing, surely there is something else you can do\n";
    
    choosing();

}

int choosing()
{
    string action;
    cout << "What would you like to do?\n";
    cout << ">> ";
    getline(cin, action);
    vector<string> actionList;
    //make a list of actions the user can do
    actionList.push_back("look"); // look around room
    actionList.push_back("pick"); // pick up item
    actionList.push_back("walk"); // walk to another room
    actionList.push_back("sit"); // sit on something
    string word1 = actionList[0];
    string word2 = actionList[1];
    string word3 = actionList[2];
    string word4 = actionList[3];

    vector<vector<string>> roomList;
    roomList[0].push_back("cellar");

    if (action.find(actionList[0]))
    {
        if 
    }
        
    /*int choice;

    cout << "\nHere are your options:\n";
    cout << "1. Look around\n";
    cout << "2. Pick up\n";
    cout << "3. Walk around\n";

    cout << "\n>> ";
    cin >> choice;

    if (choice == 3)
    {
        cout << "Which way would you like to go? ";
       
    }

    return 2;*/
    return 2;
}