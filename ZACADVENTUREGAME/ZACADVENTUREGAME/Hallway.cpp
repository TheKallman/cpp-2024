#include "Backpack.h"
#include "Bathroom.h"
#include "SittingArea.h"
#include "Hallway.h"
#include "Closet.h"
#include "MasterBedroom.h"
#include "Item.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

void Hallway::onEnter()
{
    Hallway hallway;    
    Closet closet;
    MasterBedroom masterBedroom;
    SittingArea sittingArea;
    Bathroom bathroom;
    Item item;
    Foyer foyer;
    Backpack backpack;
    string userInput;

    cout << "\nYou are in the hallway.";
    cout << "\nWhat do you want to do?\n>> ";
    getline(cin, userInput);

    // Make input lowercase
    for (char& c : userInput) c = tolower(c);
    while (userInput != "quit")
    {
        //outputs for if the user asks to go a certain direction
        if (userInput == "go east" || userInput == "east" || userInput == "walk east" || userInput == "move east")
        {
            cout << "\nDown the hall are three rooms.\nThe bathroom.\nThe closet.\nThe master bedroom.\nWhich would you like to go in?\n";
        }
        else if (userInput == "go north" || userInput == "north" || userInput == "walk north" || userInput == "move north")
        {
            sittingArea.onEnter();
        }
        else if (userInput == "go south" || userInput == "south" || userInput == "walk south" || userInput == "move south")
        {
            cout << "\nYou can't tell what's there, but it seems like a wall.\n";
        }
        else if (userInput == "go west" || userInput == "west" || userInput == "walk west" || userInput == "move west")
        {
            cout << "\nWalllll-Eeeeeeee\n";
        }

        //outputs for if the user asks to look around hte room
        else if (userInput == "look" || userInput == "look around" || userInput == "take a look" || userInput == "take a gander"
            || userInput == "see" || userInput == "view" || userInput == "view room")
        {
            cout << "\nTo the north is the sitting area.\nTo the east are multiple rooms down the hallway.\nTo the south is a wall.\nTo the west is a wall.\n";
            cout << "The north side of the hallway has some paintings on it.\n";
        }

        //output for if the user wants to go in bathroom
        else if (userInput == "bathroom" || userInput == "go in bathroom" || userInput == "go bathroom" || userInput == "puedo ir al bano"
            || userInput == "walk bathroom" || userInput == "walk in bathroom" || userInput == "walk in the bathroom")
        {
            bathroom.onEnter();
        }
        
        //output for if user wants to go to closet
        else if (userInput == "closet" || userInput == "go in closet" || userInput == "go closet"
            || userInput == "walk closet" || userInput == "walk in closet" || userInput == "walk in the closet" || userInput == "open closet"
            || userInput == "open closet" || userInput == "open up the closet" || userInput == "open the closet" || userInput == "open up closet")
        {
            bool hasGKey = false;
            vector<string> items = backpack.getPockets();
            for (size_t i = 0; i < items.size(); i++)
            {
                if (items[i] == "Green Key")
                {
                    hasGKey = true;
                }
            }
            if (hasGKey)
            {
                cout << "\nYou unlock the closet with the green key.\n";
                backpack.useItem("Green Key");
                closet.onEnter();
            }
            else
            {
                cout << "\nYou see the green doorknob and already know it's locked.\n";
            }
        }

        //output for if user wants to go to the master bedroom
        else if (userInput == "master bedroom" || userInput == "go in master bedroom" || userInput == "go master bedroom"
            || userInput == "walk master bedroom" || userInput == "walk in master bedroom" || userInput == "walk in the master bedroom")
        {
            masterBedroom.onEnter();
        }
        //output for if the user wants to look at the paintings
        else if (userInput == "look paintings" || userInput == "look at paintings" || userInput == "paintings" || userInput == "take a look at paintings"
            || userInput == "view paintings" || userInput == "inspect paintings" || userInput == "look at the paintings" || userInput == "take a look at the paintings"
            
            || userInput == "look painting" || userInput == "look at painting" || userInput == "painting" || userInput == "take a look at painting"
            || userInput == "view painting" || userInput == "inspect painting" || userInput == "look at the painting" || userInput == "take a look at the painting")
        {
            cout << "\nYou view each painting.\nOne of them is a large rendering of Salvador Dali's 'The Persistence of Memory'.\nYou find the melting clocks funny and laugh to yourself.\n"
                << "Another painting looks homemade, showing a basic two-dimensional house with smoke from the chimney.\nIt's pretty mediocre and seems a child made it.\n"
                << "The last painting at the end of the hallway is a massive one of a can of cream of mushroom soup.\n";
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
