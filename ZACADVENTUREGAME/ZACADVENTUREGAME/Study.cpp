#include "Kitchen.h"
#include "LaundryRoom.h"
#include "Garage.h"
#include "Backpack.h"
#include "Bathroom.h"
#include "SittingArea.h"
#include "MasterBedroom.h"
#include "Study.h"
#include "Hallway.h"
#include "Item.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;

void Study::onEnter()
{
    Hallway hallway;
    Study study;
    MasterBedroom masterBedroom;
    Bathroom bathroom;
    LaundryRoom laundryRoom;
    SittingArea sittingArea;
    Garage garage;
    Kitchen kitchen;
    Item item;
    Foyer foyer;
    Backpack backpack;
    string userInput;
    string computerGuess;
    string safeGuess;

    cout << "\nYou are in the study.";
    cout << "\nWhat do you want to do?\n>> ";
    getline(cin, userInput);

    // Make input lowercase
    for (char& c : userInput) c = tolower(c);
    while (userInput != "quit")
    {
        //outputs for if the user asks to go a certain direction
        if (userInput == "go east" || userInput == "east" || userInput == "walk east" || userInput == "move east")
        {
            cout << "\nWhere's Wall-do?\n";
        }
        else if (userInput == "go north" || userInput == "north" || userInput == "walk north" || userInput == "move north")
        {
            cout << "\nWall, by the way.\n";
        }
        else if (userInput == "go south" || userInput == "south" || userInput == "walk south" || userInput == "move south")
        {
            cout << "\nDrat.\nA wall is there.\n";
        }
        else if (userInput == "go west" || userInput == "west" || userInput == "walk west" || userInput == "move west")
        {
            sittingArea.onEnter();
        }

        //outputs for if the user asks to look around hte room
        else if (userInput == "look" || userInput == "look around" || userInput == "take a look" || userInput == "take a gander"
            || userInput == "see" || userInput == "view" || userInput == "view room")
        {
            cout << "\nThere is a desk in the middle of the room.\nA computer is sitting on top of the room.\nThere's a safe in the corner.\n";
        }

        //output for if the user wants to look at the desk
        else if (userInput == "look desk" || userInput == "look at desk" || userInput == "desk" || userInput == "take a look at desk"
            || userInput == "view desk" || userInput == "inspect desk" || userInput == "look at the desk" || userInput == "take a look at the desk")
        {
            cout << "\nThere's a cold drink with no coaster on the desk.\nTHAT IS MAHOGANY!\nSorry, that's expensive wood and it makes me angry to see that.\nAnyways, there is a computer on the table.\n";
            
        }

        //output for if user wants to go to computer
        else if (userInput == "look night computer" || userInput == "look at night computer" || userInput == "night computer" || userInput == "take a look at night computer"
            || userInput == "view night computer" || userInput == "inspect night computer" || userInput == "look at the night computer" || userInput == "take a look at the night computer")
        {
            //This is the morse code that needs to be translated
            cout << "\nIt's a computer that asks for a password.\nThere are eight characters in it.\nIt's probably the owner's favorite song.\n";
            cout << "Do you know the code?\n>> ";
            cin >> computerGuess;

            //check if user knows the correct code
            if (computerGuess == computerAnswer)
            {
                cout << "\n*Bleep Bloop*\n*Wrrrrrrr*\nYou're in.\nThe background is an image of a lion.\nWhy would that be helpful?\n";
            }
            else
            {
                cout << "\nNothing happens. Wrong password.\n";
            }

            cin.ignore();
        }

        //output for if user wants to go to the safe
        else if (userInput == "look safe" || userInput == "look at safe" || userInput == "safe" || userInput == "take a look at safe"
            || userInput == "view safe" || userInput == "inspect safe" || userInput == "look at the safe" || userInput == "take a look at the safe")
        {
            //This is the soggy code from bathroom
            cout << "\nIt's a big black safe with a combination lock like from your locker at school.\nYou need three numbers (put spaces in between the numbers).\nOhhhh boy! I hope something valuable is in there.\n";
            cout << "Do you know the code?\n>> ";
            cin >> safeGuess;

            //check if user knows the correct code
            if (safeGuess == safeAnswer)
            {
                cout << "\n*CACHUNK*\nThe safe made a loud noise.\nYou open the safe and grab a...\nTV remote??\n";
                backpack.addItem("TV Remote");
            }
            else
            {
                cout << "\nNothing happens. Wrong code.\n";
            }

            cin.ignore();
        }

        //output for if the user wants to look at their inventory
        else if (userInput == "open inventory" || userInput == "open up the inventory" || userInput == "open the inventory" || userInput == "open up inventory"
            || userInput == "look inventory" || userInput == "look at inventory" || userInput == "inventory" || userInput == "take a look at inventory"
            || userInput == "view inventory" || userInput == "inspect inventory" || userInput == "look at the inventory" || userInput == "take a look at the inventory")
        {
            item.outputItems();
        }

        //output for if user inspects a certain item
        else if (userInput == "look purple key" || userInput == "look at purple key" || userInput == "purple key" || userInput == "take a look at purple key"
            || userInput == "take a look at the purple key" || userInput == "view purple key" || userInput == "inspect purple key")
        {
            item.inspectPKey();
        }

        else if (userInput == "look green key" || userInput == "look at green key" || userInput == "green key" || userInput == "take a look at green key"
            || userInput == "take a look at the green key" || userInput == "view green key" || userInput == "inspect green key")
        {
            item.inspectGKey();
        }

        else if (userInput == "look shape code" || userInput == "look at shape code" || userInput == "shape code" || userInput == "take a look at shape code"
            || userInput == "take a look at the shape code" || userInput == "view shape code" || userInput == "inspect shape code")
        {
            item.inspectDrawerComb();
        }
        else if (userInput == "look blue key" || userInput == "look at blue key" || userInput == "blue key" || userInput == "take a look at blue key"
            || userInput == "take a look at the blue key" || userInput == "view blue key" || userInput == "inspect blue key")
        {
            item.inspectBKey();
        }
        else if (userInput == "look yellow key" || userInput == "look at yellow key" || userInput == "yellow key" || userInput == "take a look at yellow key"
            || userInput == "take a look at the yellow key" || userInput == "view yellow key" || userInput == "inspect yellow key")
        {
            item.inspectYKey();
        }
        else if (userInput == "look oven's owner manual" || userInput == "look at oven's owner manual" || userInput == "oven's owner manual" || userInput == "take a look at oven's owner manual"
            || userInput == "take a look at the oven's owner manual" || userInput == "view oven's owner manual" || userInput == "inspect oven's owner manual")
        {
            item.inspectOvenManual();
        }
        else if (userInput == "look screwdriver" || userInput == "look at screwdriver" || userInput == "screwdriver" || userInput == "take a look at screwdriver"
            || userInput == "take a look at the screwdriver" || userInput == "view screwdriver" || userInput == "inspect screwdriver")
        {
            item.inspectScrew();
        }
        else if (userInput == "look soggy code" || userInput == "look at soggy code" || userInput == "soggy code" || userInput == "take a look at soggy code"
            || userInput == "take a look at the soggy code" || userInput == "view soggy code" || userInput == "inspect soggy code")
        {
            item.inspectSogComb();
        }
        else if (userInput == "look washing machine owner's manual" || userInput == "look at washing machine owner's manual" || userInput == "washing machine owner's manual" || userInput == "take a look at washing machine owner's manual"
            || userInput == "take a look at the washing machine owner's manual" || userInput == "view washing machine owner's manual" || userInput == "inspect washing machine owner's manual")
        {
            item.inspectWashManual();
        }
        else if (userInput == "look morse code" || userInput == "look at morse code" || userInput == "morse code" || userInput == "take a look at morse code"
            || userInput == "take a look at the morse code" || userInput == "view morse code" || userInput == "inspect morse code")
        {
            item.inspectMorseComb();
        }
        else if (userInput == "look dumbbell" || userInput == "look at dumbbell" || userInput == "dumbbell" || userInput == "take a look at dumbbell"
            || userInput == "take a look at the dumbbell" || userInput == "view dumbbell" || userInput == "inspect dumbbell"
            || userInput == "look ten pound dumbbell" || userInput == "look at ten pound dumbbell" || userInput == "ten pound dumbbell" || userInput == "take a look at ten pound dumbbell"
            || userInput == "take a look at the ten pound dumbbell" || userInput == "view ten pound dumbbell" || userInput == "inspect ten pound dumbbell")
        {
            item.inspectDumb();
        }
        else if (userInput == "look remote" || userInput == "look at remote" || userInput == "remote" || userInput == "take a look at remote"
            || userInput == "take a look at the remote" || userInput == "view remote" || userInput == "inspect remote"
            || userInput == "look tv remote" || userInput == "look at tv remote" || userInput == "tv remote" || userInput == "take a look at tv remote"
            || userInput == "take a look at the tv remote" || userInput == "view tv remote" || userInput == "inspect tv remote")
        {
            item.inspectRemote();
        }
        else
        {
            cout << "\nI don't understand that command.\n";
        }
        cout << "\nWhat do you want to do?\n";
        cout << ">> ";
        getline(cin, userInput);
    }

}
