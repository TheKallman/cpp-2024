#include "Kitchen.h"
#include "LaundryRoom.h"
#include "Garage.h"
#include "Backpack.h"
#include "Bathroom.h"
#include "SittingArea.h"
#include "Hallway.h"
#include "Item.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;

void Bathroom::onEnter()
{
    Hallway hallway;
    Bathroom bathroom;
    LaundryRoom laundryRoom;
    SittingArea sittingArea;
    Garage garage;
    Kitchen kitchen;
    Item item;
    Foyer foyer;
    Backpack backpack;
    string userInput;

    cout << "\nYou are in the bathroom.";
    cout << "\nWhat do you want to do?\n>> ";
    getline(cin, userInput);

    // Make input lowercase
    for (char& c : userInput) c = tolower(c);
    while (userInput != "quit")
    {
        //outputs for if the user asks to go a certain direction
        if (userInput == "go east" || userInput == "east" || userInput == "walk east" || userInput == "move east")
        {
            cout << "\nDarn wall.\nThese things are everywhere!\n";
        }
        else if (userInput == "go north" || userInput == "north" || userInput == "walk north" || userInput == "move north")
        {
            hallway.onEnter();
        }
        else if (userInput == "go south" || userInput == "south" || userInput == "walk south" || userInput == "move south")
        {
            cout << "\nShoot.\nThere's a wall there.\n";
        }
        else if (userInput == "go west" || userInput == "west" || userInput == "walk west" || userInput == "move west")
        {
            cout << "\nYou won't believe what I found!\nA wall!\n";
        }

        //outputs for if the user asks to look around hte room
        else if (userInput == "look" || userInput == "look around" || userInput == "take a look" || userInput == "take a gander"
            || userInput == "see" || userInput == "view" || userInput == "view room")
        {
            cout << "\nThere is a window above that lets light in.\nThere is a bathtub full of water to the left.\nThere is a toilet behind a sink to the right.\nThere is a locked medicine cabinet above the sink with a purple key hole.\n"
                << "The north is the way out yo.\n";
        }

        //output for if the user wants to look at the window
        else if (userInput == "look window" || userInput == "look at window" || userInput == "window" || userInput == "take a look at window"
            || userInput == "view window" || userInput == "inspect window" || userInput == "look at the window" || userInput == "take a look at the window")
        {
            cout << "\nIt's frosted.\nYou can't see through it.\nWell, what did you expect in a bathroom?\n";
        }

        //output for if user wants to go to bathtub
        else if (userInput == "bathtub" || userInput == "go in bathtub" || userInput == "go bathtub" || userInput == "walk up to bathtub"
            || userInput == "go to bathtub" || userInput == "go to the bathtub" || userInput == "walk up to the bathtub")
        {
            bool hasGloves = false;
            vector<string> items = backpack.getPockets();
            for (size_t i = 0; i < items.size(); i++)
            {
                if (items[i] == "Gloves")
                {
                    hasGloves = true;
                }
            }
            if (hasGloves)
            {
                cout << "\nYou use your gloves to grab the nasty hair blob in the drain.\nUnderneath is a soggy code.\n";
                backpack.addItem("Soggy Code");
            }
            else
            {
                cout << "\nThe bathtub is full of water.\nThere is something clogging the drain.\nSomething nasty.\nYou don't dare grab it without having something covering your hands.\nMaybe like a pair of latex gloves.\n";
            }
        }

        //output for if user wants to go to the toilet
        else if (userInput == "toilet" || userInput == "go in toilet" || userInput == "go toilet" || userInput == "walk up to toilet"
            || userInput == "go to toilet" || userInput == "go to the toilet" || userInput == "walk up to the toilet")
        {
            cout << "\nYou do not have to go to the bathroom right now.\n...\nMaybe later.\n";
        }

        //output for if the user wants to look at the sink
        else if (userInput == "sink" || userInput == "go in sink" || userInput == "go sink" || userInput == "walk up to sink"
            || userInput == "go to sink" || userInput == "go to the sink" || userInput == "walk up to the sink")
        {
            cout << "\nIt's just a sink.\nYou spit in it.\nYou realize this is not your house so you turn on the faucet to make it go down the drain.\n";
        }

        //output for if the user wants to look at the medicine cabinet
        else if (userInput == "medicine" || userInput == "go medicine" || userInput == "walk up to medicine"
            || userInput == "go to medicine" || userInput == "go to the medicine" || userInput == "walk up to the medicine"
            || userInput == "open medicine" || userInput == "open up the medicine" || userInput == "open the medicine" || userInput == "open up medicine"
            
            || userInput == "cabinet" || userInput == "go cabinet" || userInput == "walk up to cabinet"
            || userInput == "go to cabinet" || userInput == "go to the cabinet" || userInput == "walk up to the cabinet"
            || userInput == "open cabinet" || userInput == "open up the cabinet" || userInput == "open the cabinet" || userInput == "open up cabinet"
            
            || userInput == "medicine cabinet" || userInput == "go medicine cabinet" || userInput == "walk up to medicine cabinet"
            || userInput == "go to medicine cabinet" || userInput == "go to the medicine cabinet" || userInput == "walk up to the medicine cabinet"
            || userInput == "open medicine cabinet" || userInput == "open up the medicine cabinet" || userInput == "open the medicine cabinet" || userInput == "open up medicine cabinet")
        {
            bool hasPKey = false;
            vector<string> items = backpack.getPockets();
            for (size_t i = 0; i < items.size(); i++)
            {
                if (items[i] == "Purple Key")
                {
                    hasPKey = true;
                }
            }
            if (hasPKey)
            {
                cout << "\nYou unlock the medicine cabinet with the purple key.\nInside is a washing machine owner's manual.\nHow interesting.\n";
                backpack.addItem("Washing Machine Owner's Manual");
            }
            else
            {
                cout << "\nIt's locked.\nThere's a purple key hole.\nIt also acts as a mirror.\nYou smile at yourself and it cracks.\nYikes...\n";
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
        else if (userInput == "look animal code" || userInput == "look at animal code" || userInput == "animal code" || userInput == "take a look at animal code"
            || userInput == "take a look at the animal code" || userInput == "view animal code" || userInput == "inspect animal code")
        {
            item.inspectAnimalComb();
        }
        else if (userInput == "look gloves" || userInput == "look at gloves" || userInput == "gloves" || userInput == "take a look at gloves"
            || userInput == "take a look at the gloves" || userInput == "view gloves" || userInput == "inspect gloves")
        {
            item.inspectGloves();
        }
        else if (userInput == "look phone number" || userInput == "look at phone number" || userInput == "phone number" || userInput == "take a look at phone number"
            || userInput == "take a look at the phone number" || userInput == "view phone number" || userInput == "inspect phone number")
        {
            item.inspectPhoneComb();
        }
        else if (userInput == "look two pennies" || userInput == "look at two pennies" || userInput == "two pennies" || userInput == "take a look at two pennies"
            || userInput == "take a look at the two pennies" || userInput == "view two pennies" || userInput == "inspect two pennies")
        {
            item.inspectPennies();
        }
        else if (userInput == "look dust bunny" || userInput == "look at dust bunny" || userInput == "dust bunny" || userInput == "take a look at dust bunny"
            || userInput == "take a look at the dust bunny" || userInput == "view dust bunny" || userInput == "inspect dust bunny")
        {
            item.inspectDust();
        }
        else if (userInput == "look fork" || userInput == "look at fork" || userInput == "fork" || userInput == "take a look at fork"
            || userInput == "take a look at the fork" || userInput == "view fork" || userInput == "inspect fork")
        {
            item.inspectFork();
        }
        else if (userInput == "look red key" || userInput == "look at red key" || userInput == "red key" || userInput == "take a look at red key"
            || userInput == "take a look at the red key" || userInput == "view red key" || userInput == "inspect red key")
        {
            item.inspectRKey();
        }
        else if (userInput == "look step ladder" || userInput == "look at step ladder" || userInput == "step ladder" || userInput == "take a look at step ladder"
            || userInput == "take a look at the step ladder" || userInput == "view step ladder" || userInput == "inspect step ladder")
        {
            item.inspectStep();
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
