#include "Kitchen.h"
#include "LaundryRoom.h"
#include "SittingArea.h"
#include "Foyer.h"
#include "Backpack.h"
#include "DiningRoom.h"
#include "Item.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;

void DiningRoom::onEnter()
{
    DiningRoom diningRoom;
    LaundryRoom laundryRoom;
    SittingArea sittingArea;
    Kitchen kitchen;
    Item item;
    Foyer foyer;
    Backpack backpack;
    string userInput;

    cout << "\nYou are in the kitchen.";
    cout << "\nWhat do you want to do?\n>> ";
    getline(cin, userInput);

    // Make input lowercase
    for (char& c : userInput) c = tolower(c);
    while (userInput != "quit")
    {
        //outputs for if the user asks to go a certain direction
        if (userInput == "go east" || userInput == "east" || userInput == "walk east" || userInput == "move east")
        {
            //patio.onEnter(); when exists
        }
        else if (userInput == "go north" || userInput == "north" || userInput == "walk north" || userInput == "move north")
        {
            //livingRoom.onEnter(); when exists
        }
        else if (userInput == "go south" || userInput == "south" || userInput == "walk south" || userInput == "move south")
        {
            cout << "\nThere is a wall.\n";
        }
        else if (userInput == "go west" || userInput == "west" || userInput == "walk west" || userInput == "move west")
        {
            kitchen.onEnter();
        }

        //outputs for if the user asks to look around hte room
        else if (userInput == "look" || userInput == "look around" || userInput == "take a look" || userInput == "take a gander"
            || userInput == "see" || userInput == "view" || userInput == "view room")
        {
            cout << "\nTo the north is the living room.\nTo the east is the patio.\nTo the south is a wall.\nTo the west is the kitchen.\n"
                << "\nThere is a dining table with chairs around it.\nThere is a cake on the center of the table.\nA china cabinet is against the wall.\n";
        }

        //output for if the user wants to look at the dining table
        else if (userInput == "look dining table" || userInput == "look at dining table" || userInput == "dining table" || userInput == "take a look at dining table"
            || userInput == "view dining table" || userInput == "inspect dining table" || userInput == "look at the dining table" || userInput == "take a look at the dining table"
            
            || userInput == "look table" || userInput == "look at table" || userInput == "table" || userInput == "take a look at table"
            || userInput == "view table" || userInput == "inspect table" || userInput == "look at the table" || userInput == "take a look at the table")
        {
            cout << "\nThe dining table is lathered and very smooth.\nYou think about taking a nap on it.\nHowever, there is a cake in the way.\n";
        }

        //output for looking at cake
        else if (userInput == "open cake" || userInput == "open up the cake" || userInput == "open the cake" || userInput == "open up cake"
            || userInput == "look cake" || userInput == "look at cake" || userInput == "cake" || userInput == "take a look at cake"
            || userInput == "view cake" || userInput == "inspect cake" || userInput == "look at the cake" || userInput == "take a look at the cake")
        {
            bool hasFork = false;
            vector<string> items = backpack.getPockets();
            for (size_t i = 0; i < items.size(); i++)
            {
                if (items[i] == "Fork")
                {
                    hasFork = true;
                }
            }
            if (hasFork)
            {
                cout << "\nYou eat the cake.\nInside is the house key.\nYou grab the house key.\n";
                backpack.addItem("House Key");
                backpack.useItem("Fork"); // delete step ladder from inventory because it was used
            }
            else
            {
                cout << "\nThere's a cake with a cat frosted on top.\nAn animal I believe.\nIt looks very yummy, but you don't have anything to eat it with.\n";
            }
            
        }

        //output for looking at china cabinet
        else if (userInput == "open china cabinet" || userInput == "open up the china cabinet" || userInput == "open the china cabinet" || userInput == "open up china cabinet"
            || userInput == "look china cabinet" || userInput == "look at china cabinet" || userInput == "china cabinet" || userInput == "take a look at china cabinet"
            || userInput == "view china cabinet" || userInput == "inspect china cabinet" || userInput == "look at the china cabinet" || userInput == "take a look at the china cabinet"
            
            || userInput == "open cabinet" || userInput == "open up the cabinet" || userInput == "open the cabinet" || userInput == "open up cabinet"
            || userInput == "look cabinet" || userInput == "look at cabinet" || userInput == "cabinet" || userInput == "take a look at cabinet"
            || userInput == "view cabinet" || userInput == "inspect cabinet" || userInput == "look at the cabinet" || userInput == "take a look at the cabinet")
        {
            bool hasStepLadder = false;
            vector<string> items = backpack.getPockets();
            for (size_t i = 0; i < items.size(); i++)
            {
                if (items[i] == "Step Ladder")
                {
                    hasStepLadder = true;
                }
            }
            if (hasStepLadder)
            {
                cout << "\nYou use the step ladder to gain enough height to be able to open the micowave.\nThere is a cold breakfast burrito.\n"
                    << "You eat it and find a purple key.\n";
                backpack.addItem("Purple Key"); // add purple key to inventory
                backpack.useItem("Step Ladder"); // delete step ladder from inventory because it was used
            }
            else
            {
                cout << "\nYou are not tall enough to open it. Maybe if you had something to stand on.\nYou go on your tippy toes and can make something out in there.\n";
            }
        }

        //output for if the user wants to look at the oven
        else if (userInput == "open oven" || userInput == "open up the oven" || userInput == "open the oven" || userInput == "open up oven"
            || userInput == "look oven" || userInput == "look at oven" || userInput == "oven" || userInput == "take a look at oven"
            || userInput == "view oven" || userInput == "inspect oven" || userInput == "look at the oven" || userInput == "take a look at the oven")
        {
            cout << "\nThere is something in the oven.\nThe oven is on and too hot to grab whatever is in there.\nIt is not your house so you don't know"
                << " how the oven is turned off.\n(even though you could probably figure it out yourself)\nMaybe there's an owner's manual somewhere.\n";
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
