#include "Kitchen.h"
#include "LaundryRoom.h"
#include "SittingArea.h"
#include "Foyer.h"
#include "Backpack.h"
#include "DiningRoom.h"
#include "Patio.h"
#include "LivingRoom.h"
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
    Patio patio;
    LivingRoom livingRoom;
    DiningRoom diningRoom;
    LaundryRoom laundryRoom;
    SittingArea sittingArea;
    Kitchen kitchen;
    Item item;
    Foyer foyer;
    Backpack backpack;
    string userInput;

    cout << "\nYou are in the dining room.";
    cout << "\nWhat do you want to do?\n>> ";
    getline(cin, userInput);

    // Make input lowercase
    for (char& c : userInput) c = tolower(c);
    while (userInput != "quit")
    {
        //outputs for if the user asks to go a certain direction
        if (userInput == "go east" || userInput == "east" || userInput == "walk east" || userInput == "move east")
        {
            patio.onEnter();
        }
        else if (userInput == "go north" || userInput == "north" || userInput == "walk north" || userInput == "move north")
        {
            livingRoom.onEnter();
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
        else if (userInput == "look cake" || userInput == "look at cake" || userInput == "cake" || userInput == "take a look at cake"
            || userInput == "view cake" || userInput == "inspect cake" || userInput == "look at the cake" || userInput == "take a look at the cake"
            || userInput == "eat cake" || userInput == "eat the cake" || userInput == "gobble cake" || userInput == "gobble up the cake")
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

            }
            else
            {
                cout << "\nThere's a cake with a seven legged cat frosted on top.\nIt was hard for you to tell if it was an animal because the froster sucks.\nIt looks very yummy, but you don't have anything to eat it with.\n";
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
            bool hasYKey = false;
            vector<string> items = backpack.getPockets();
            for (size_t i = 0; i < items.size(); i++)
            {
                if (items[i] == "Yellow Key")
                {
                    hasYKey = true;
                }
            }
            if (hasYKey)
            {
                cout << "\nYou unlock the china cabinet with the yellow key.\nInside is a piece of paper with animals on it.\nThey are drawn sloppily and are not colored inside the lines.\n"
                    << "You grab the animal code.\nYou also get a red key.\n";
                backpack.addItem("Red Key");
                backpack.addItem("Animal Code");
            }
            else
            {
                cout << "\nIt's a tall cabinet with glass doors with a yellow key hole.\nBehind the doors are shelves of fine china.\nThere's also a piece of paper and a key back there.\nHow intriguing.\n";
            }
        }

        //output for if the user wants to look at the chair
        else if (userInput == "look chairs" || userInput == "look at chairs" || userInput == "chairs" || userInput == "take a look at chairs"
            || userInput == "view chairs" || userInput == "inspect chairs" || userInput == "look at the chairs" || userInput == "take a look at the chairs"
            || userInput == "look chair" || userInput == "look at chair" || userInput == "chair" || userInput == "take a look at chair"
            || userInput == "view chair" || userInput == "inspect chair" || userInput == "look at the chair" || userInput == "take a look at the chair"
            || userInput == "sit chair" || userInput == "sit on chair" || userInput == "sit on the chair" || userInput == "sit on top of the chair"
            || userInput == "sit" || userInput == "sit down" || userInput == "sit down on chair" || userInput == "sit on chair"
            || userInput == "have a seat" || userInput == "take a seat" || userInput == "go take a seat" || userInput == "go have a seat")
        {
            cout << "\nYour butt hurts.\nProbably from all this walking around you've been doing.\nYou are too sore to sit.\n";
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
        else if (userInput == "look gloves" || userInput == "look at gloves" || userInput == "gloves" || userInput == "take a look at gloves"
            || userInput == "take a look at the gloves" || userInput == "view gloves" || userInput == "inspect gloves")
        {
            item.inspectGloves();
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
