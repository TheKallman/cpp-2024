#include "Kitchen.h"
#include "LaundryRoom.h"
#include "Garage.h"
#include "Backpack.h"
#include "Item.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;

void LaundryRoom::onEnter()
{
    LaundryRoom laundryRoom;
    Garage garage;
    Kitchen kitchen;
    Item item;
    Foyer foyer;
    Backpack backpack;
    string userInput;

    cout << "\nYou are in the laundry room.";
    cout << "\nWhat do you want to do?\n>> ";
    getline(cin, userInput);

    // Make input lowercase
    for (char& c : userInput) c = tolower(c);
    while (userInput != "quit")
    {
        //outputs for if the user asks to go a certain direction
        if (userInput == "go east" || userInput == "east" || userInput == "walk east" || userInput == "move east")
        {
            cout << "\nThere is a vent in the wall with something inside.\nYou need a screwdriver to undo the screws on the vent and get it.\n";
        }
        else if (userInput == "go north" || userInput == "north" || userInput == "walk north" || userInput == "move north")
        {
            cout << "\nThere is a washing machine and a dryer.\nThe washing machine is still tumbling and you see something rolling around.\n"
                << "This is still not your house so you will need to find the owner's manual for the washing machine so you can turn it off.\n";
        }
        else if (userInput == "go south" || userInput == "south" || userInput == "walk south" || userInput == "move south")
        {
            kitchen.onEnter();
        }
        else if (userInput == "go west" || userInput == "west" || userInput == "walk west" || userInput == "move west")
        {
            garage.onEnter();
        }

        //outputs for if the user asks to look around hte room
        else if (userInput == "look" || userInput == "look around" || userInput == "take a look" || userInput == "take a gander"
            || userInput == "see" || userInput == "view" || userInput == "view room")
        {
            cout << "\nTo the north is a washing machine and dryer.\nTo the east there is a vent in the wall.\nTo the south is the kitchen.\nTo the west is the garage.\n";
        }

        //output for if the user wants to look at the vent
        else if (userInput == "look vent" || userInput == "look at vent" || userInput == "vent" || userInput == "take a look at vent"
            || userInput == "view vent" || userInput == "inspect vent" || userInput == "look at the vent" || userInput == "take a look at the vent"
            || userInput == "unscrew" || userInput == "unscrew vent" || userInput == "unscrew the vent")
        {
            bool hasScrewdriver = false;
            vector<string> items = backpack.getPockets();
            for (size_t i = 0; i < items.size(); i++)
            {
                if (items[i] == "Screwdriver")
                {
                    hasScrewdriver = true;
                }
            }
            if (hasScrewdriver)
            {
                cout << "\nYou slowly unscrew each screw in the vent.\n*Squeeeeeeak*\n*Squeeeeeeak*\n*Squeeeeeeak*\n*Squeeeeeeak*\nInside is a blue key\nYou grab it and can now use it.\n";
                backpack.addItem("Blue Key"); // add blue key to ivnentory
                backpack.useItem("Screwdriver"); // delete screwdriver from inventory because you used it
            }
            else
            {
                cout << "\nYou attempt to unscrew the screws with your fingers.\nThey are screwed on too tight.\nMaybe if you had a screwdriver.\n";
            }
        }

        //output for looking at dryer
        else if (userInput == "open dryer" || userInput == "open up the dryer" || userInput == "open the dryer" || userInput == "open up dryer"
            || userInput == "look dryer" || userInput == "look at dryer" || userInput == "dryer" || userInput == "take a look at dryer"
            || userInput == "view dryer" || userInput == "inspect dryer" || userInput == "look at the dryer" || userInput == "take a look at the dryer")
        {

            cout << "\nThere are some dry clothes in there.\nNothing important.\n";
        }

        //output for trying to grab the clothes in dryer
        else if (userInput == "clothes" || userInput == "grab clothes" || userInput == "grab the clothes" || userInput == "get clothes"
            || userInput == "get the clothes" || userInput == "look at microwave" || userInput == "microwave" || userInput == "take a look at microwave"
            || userInput == "view microwave" || userInput == "inspect microwave" || userInput == "look at the microwave" || userInput == "take a look at the microwave")
        {
            cout << "\nWhat are you going to do with clothes?\nThese won't be useful.\n";
        }

        //output for if the user wants to look at the washing machine
        else if (userInput == "open washing machine" || userInput == "open up the washing machine" || userInput == "open the washing machine" || userInput == "open up washing machine"
            || userInput == "washing machine" || userInput == "look washing machine" || userInput == "look at washing machine"  || userInput == "take a look at washing machine"
            || userInput == "view washing machine" || userInput == "inspect washing machine" || userInput == "look at the washing machine" || userInput == "take a look at the washing machine"

            || userInput == "open machine" || userInput == "open up the machine" || userInput == "open the machine" || userInput == "open up machine"
            || userInput == "machine" || userInput == "look machine" || userInput == "look at machine" || userInput == "take a look at machine"
            || userInput == "view machine" || userInput == "inspect machine" || userInput == "look at the machine" || userInput == "take a look at the machine"

            || userInput == "open washing" || userInput == "open up the washing" || userInput == "open the washing" || userInput == "open up washing"
            || userInput == "washing" || userInput == "look washing" || userInput == "look at washing" || userInput == "take a look at washing"
            || userInput == "view washing" || userInput == "inspect washing" || userInput == "look at the washing" || userInput == "take a look at the washing")
        {
            bool hasWashManual = false;
            vector<string> items = backpack.getPockets();
            for (size_t i = 0; i < items.size(); i++)
            {
                if (items[i] == "Washing Machine Owner's Manual")
                {
                    hasWashManual = true;
                }
            }
            if (hasWashManual)
            {
                cout << "\nYou look at the owner's manual and find out how to turn off the washing machine.\nYou turn it off and open the door.\nYou grab the yellow key that was tumbling.\n";
                backpack.addItem("Yellow Key"); // add ytellow key to inventory
                backpack.useItem("Washing Machine Owner's Manual"); //delete owners mayual from inventory because you used it
            }

            else
            {
                cout << "\nYou have no clue what you are doing.\nYou would make a crazy mess of soapy water if you open the washing machine now.\nYou don't know how to turn it off so you should find the owner's manual.\n";
            }
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
