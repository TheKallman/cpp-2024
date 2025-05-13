#include "Kitchen.h"
#include "LaundryRoom.h"
#include "SittingArea.h"
#include "LivingRoom.h"
#include "Patio.h"
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

    void Patio::onEnter()
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
    string phoneGuess;

    cout << "\nYou are on the patio.";
    cout << "\nWhat do you want to do?\n>> ";
    getline(cin, userInput);

    // Make input lowercase
    for (char& c : userInput) c = tolower(c);
    while (userInput != "quit")
    {
        //outputs for if the user asks to go a certain direction
        if (userInput == "go east" || userInput == "east" || userInput == "walk east" || userInput == "move east")
        {
            cout << "\nThere's a guardrail to keep you from falling.\nIt keeps you from falling.\n";
        }
        else if (userInput == "go north" || userInput == "north" || userInput == "walk north" || userInput == "move north")
        {
            cout << "\nThere's a guardrail there.\n";
        }
        else if (userInput == "go south" || userInput == "south" || userInput == "walk south" || userInput == "move south")
        {
            cout << "\nThank goodness that guardrail is there.\nYou almost fell over.\n";
        }
        else if (userInput == "go west" || userInput == "west" || userInput == "walk west" || userInput == "move west")
        {
            diningRoom.onEnter();
        }

        //outputs for if the user asks to look around hte room
        else if (userInput == "look" || userInput == "look around" || userInput == "take a look" || userInput == "take a gander"
            || userInput == "see" || userInput == "view" || userInput == "view room")
        {
            cout << "\nTo the north is a guardrail.\nTo the east is a guardrail.\nTo the south is a guardrail.\nTo the west is the dining room.\n"
                << "There's an umbrella stuck through a table.\nIt provides shade for the whole table and it's not even opened.\nThere is a large scale out here for some reason.\n"
                << "It could have been a science project.\n";
        }

        //output for if the user wants to look at the umbrella
        else if (userInput == "look umbrella" || userInput == "look at umbrella" || userInput == "umbrella" || userInput == "take a look at umbrella"
            || userInput == "view umbrella" || userInput == "inspect umbrella" || userInput == "look at the umbrella" || userInput == "take a look at the umbrella")
        {
            cout << "\nYou take a wild look at the umbrella.\nIts size is menacing.\n*SHFWOOP*\nIf you couldn't tell by that onomatopoeia, you opened the umbrella.\n"
                << "On the underside is a number eight.\nThat's probably useful.\n";
        }

        //output for looking at table
        else if (userInput == "look table" || userInput == "look at table" || userInput == "table" || userInput == "take a look at table"
            || userInput == "view table" || userInput == "inspect table" || userInput == "look at the table" || userInput == "take a look at the table")
        {
            cout << "\nIt's a big, splintery wooden table.\nYou run your hand across it and miracuously don't get any splinters.\nInstead, the table gets a skin splinter from your hand.\nEw...\n"
                << "There's also a huge umbrella in the middle.\n";
        }

        //output for looking at scale
        else if (userInput == "look scale" || userInput == "look at scale" || userInput == "scale" || userInput == "take a look at scale"
            || userInput == "view scale" || userInput == "inspect scale" || userInput == "look at the scale" || userInput == "take a look at the scale")
        {
            bool hasDumb = false;
            vector<string> items = backpack.getPockets();
            for (size_t i = 0; i < items.size(); i++)
            {
                if (items[i] == "Ten Pound Dumbbell")
                {
                    hasDumb = true;
                }
            }
            if (hasDumb)
            {
                cout << "\nYou use your ten pound dumbbell to train and get strong enough to easily lift off the fifty pound dumbbell weighing down the object on the other platform.\n"
                    << "\nIt's a rotary telephone.\nThis is one weird science project.\nIs there someone you can call?\n";
                cout << ">> ";
                cin >> phoneGuess;

                //check if user knows the correct code
                if (phoneGuess == phoneAns)
                {
                    cout << "\n*BRRRRING BRRRRING*\nThe guy from the Snap Chop TM infomercial picks up.\n"
                        << "You order a Snap Chop TM.\nYou wait a few days and it is droned in above you.\nYou are so excited to use your new Snap Chop TM.\n"
                        << "You rip open the box and see you did not get a Snap Chop TM.\nYou start crying because all you got was a fork.\n";
                    backpack.addItem("Fork");
                }
                else
                {
                    cout << "\n*BRRRRING BRRRRING*\nNobody picks up.\n";
                }

                cin.ignore();
                
            }
            else
            {
                cout << "\nThe scale is weighed down on one end with a fifty pound dumbbell.\nIt's too heavy for you to lift.\nIf you trained and were stronger, you could definitely pick it up.\n"
                    << "There might be something on the opposite platform.\n";
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
