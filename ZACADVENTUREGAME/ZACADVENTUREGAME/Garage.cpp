#include "Kitchen.h"
#include "Garage.h"
#include "Foyer.h"
#include "Backpack.h"
#include "LaundryRoom.h"
#include "Item.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;

void Garage::onEnter()
{
    LaundryRoom laundryRoom;
    Garage garage;
    Item item;
    Foyer foyer;
    Backpack backpack;
    string userInput;
    string toolGuess;

    cout << "\nYou are in the garage.";
    cout << "\nWhat do you want to do?\n>> ";
    getline(cin, userInput);

    // Make input lowercase
    for (char& c : userInput) c = tolower(c);
    while (userInput != "quit")
    {
        //outputs for if the user asks to go a certain direction
        if (userInput == "go east" || userInput == "east" || userInput == "walk east" || userInput == "move east")
        {
            laundryRoom.onEnter();
        }
        else if (userInput == "go north" || userInput == "north" || userInput == "walk north" || userInput == "move north")
        {
            cout << "\nThere is a car.\nThe hood is propped open.\n";
        }
        else if (userInput == "go south" || userInput == "south" || userInput == "walk south" || userInput == "move south")
        {
            cout << "\nThere is a table with a locked toolbox on it.\n";
        }
        else if (userInput == "go west" || userInput == "west" || userInput == "walk west" || userInput == "move west")
        {
            cout << "\nOuch.\nYou walked into a wall.\n";
        }

        //outputs for if the user asks to look around hte room
        else if (userInput == "look" || userInput == "look around" || userInput == "take a look" || userInput == "take a gander"
            || userInput == "see" || userInput == "view" || userInput == "view room")
        {
            cout << "\nTo the north is a car with its hood propped open.\nTo the east is the laundry room.\nTo the south is a table.\nTo the west is a wall.\n";
        }

        //output for if the user wants to look at the car
        else if (userInput == "look car" || userInput == "look at car" || userInput == "car" || userInput == "take a look at car"
            || userInput == "view car" || userInput == "inspect car" || userInput == "look at the car" || userInput == "take a look at the car"
            
            ||userInput == "look hood" || userInput == "look at hood" || userInput == "hood" || userInput == "take a look at hood"
            || userInput == "view hood" || userInput == "inspect hood" || userInput == "look at the hood" || userInput == "take a look at the hood")
        {
            //give user another number to the code for the drawer in the foyer
            cout << "\nThe engine is dusty.\nThere are drawings made in the dust.\nA smiley face.\nA tree.\nA number 9.\nA sad face.\nA happy sun.\nA Mona Lisa.\nA red herring.\n";
        }

        //output for looking at table
        else if (userInput == "look table" || userInput == "look at table" || userInput == "table" || userInput == "take a look at table"
            || userInput == "view table" || userInput == "inspect table" || userInput == "look at the table" || userInput == "take a look at the table")
        {

            cout << "\nThere's a locked toolbox on it.\n";
        }

        //output for looking at toolbox
        else if (userInput == "open toolbox" || userInput == "open up the toolbox" || userInput == "open the toolbox" || userInput == "open up toolbox"
            || userInput == "look toolbox" || userInput == "look at toolbox" || userInput == "toolbox" || userInput == "take a look at toolbox"
            || userInput == "view toolbox" || userInput == "inspect toolbox" || userInput == "look at the toolbox" || userInput == "take a look at the toolbox")
        {
            //shape code shows: 82715. Under the numbers are shapes. Triangle, Circle, Square, Diamond, and Trapezoid
            //real code shows: 71258. which means shape order is Square, Diamond, Circle, Trapezoid, Triangle
            cout << "\nIt's a rusty, dented toolbox with shapes and a five digit code.\nThe shapes are: Square, Diamond, Circle, Trapezoid, Triangle.\n";
            cout << "Do you know the code?\n>> ";
            cin >> toolGuess;

            //check if user knows the correct code
            if (toolGuess == toolAnswer)
            {
                cout << "\n*Click* The toolbox opens.\nInside is an oven owner's manual.\nIt smells funny.\nYou pick up the owner's manual.\n";
                cout << "\nYou also find a screwdriver.\nIt works on screws.\n";
                backpack.addItem("Oven Owner's Manual");
                backpack.addItem("Screwdriver");
                backpack.useItem("Shape Code");
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
