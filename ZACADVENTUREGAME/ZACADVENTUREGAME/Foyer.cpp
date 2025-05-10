#include "Foyer.h"
#include <iostream>
#include <string>
using namespace std;

void Foyer::onEnter()
{
    string userInput;
    int drawerGuess;

    cout << "\nYou are in the foyer.";
    cout << "\nWhat do you want to do?\n>> ";
    getline(cin, userInput);

    // Make input lowercase (optional: normalize input)
    for (char& c : userInput) c = tolower(c);

    if (userInput == "go east" || userInput == "east" || userInput == "walk east" || userInput == "move east")
    {
        // Placeholder: call Kitchen.onEnter() here when implemented
    }
    else if (userInput == "go north" || userInput == "north" || userInput == "walk north" || userInput == "move north")
    {
        cout << "\nThere is a wall there.\n";
    }
    else if (userInput == "go south" || userInput == "south" || userInput == "walk south" || userInput == "move south")
    {
        cout << "\nThere is a locked drawer that requires a four digit combination to the south.\n";
    }
    else if (userInput == "go west" || userInput == "west" || userInput == "walk west" || userInput == "move west")
    {
        cout << "\nThe door is locked.\n";
    }
    else if (userInput == "look" || userInput == "look around" || userInput == "take a look" || userInput == "take a gander"
        || userInput == "see" || userInput == "view" || userInput == "view room")
    {
        cout << "\nThere is a locked door to the west. A way outside.\nTo the east is the kitchen."
            << "\nThere is a plant on a locked drawer that requires a four digit combination to the south.\nThere is a wall to the north.\n";
    }
    else if (userInput == "look plant" || userInput == "look at plant" || userInput == "plant" || userInput == "take a look at plant"
        || userInput == "view plant" || userInput == "inspect plant")
    {
        cout << "\nThe plant seems leafy.\n";
    }
    else if (userInput == "look drawer" || userInput == "look at drawer" || userInput == "drawer"
        || userInput == "take a look at drawer" || userInput == "view drawer" || userInput == "inspect drawer")
    {
        cout << "\nIt's an old fashioned Victorian era wooden drawer. The letters KGPC are etched on it\n";
        cout << "Do you know the code?\n>> ";
        cin >> drawerGuess;

        if (drawerGuess == drawerAnswer)
        {
            cout << "\n*Click* The drawer is now open.\n";
        }
        else
        {
            cout << "\nNothing happens. Wrong code.\n";
        }

        cin.ignore(); // clear newline from buffer
    }
    else
    {
        cout << "\nI don't understand that command.\n";
    }
}
