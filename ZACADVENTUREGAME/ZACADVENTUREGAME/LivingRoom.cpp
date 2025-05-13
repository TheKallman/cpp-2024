#include "Kitchen.h"
#include "LaundryRoom.h"
#include "SittingArea.h"
#include "LivingRoom.h"
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

void LivingRoom::onEnter()
{
    LivingRoom livingRoom;
    DiningRoom diningRoom;
    LaundryRoom laundryRoom;
    SittingArea sittingArea;
    Kitchen kitchen;
    Item item;
    Foyer foyer;
    Backpack backpack;
    string userInput;
    string anim1Guess;
    string anim2Guess;
    string anim3Guess;
    string anim4Guess;

    cout << "\nYou are in the living room.";
    cout << "\nWhat do you want to do?\n>> ";
    getline(cin, userInput);

    // Make input lowercase
    for (char& c : userInput) c = tolower(c);
    while (userInput != "quit")
    {
        //outputs for if the user asks to go a certain direction
        if (userInput == "go east" || userInput == "east" || userInput == "walk east" || userInput == "move east")
        {
            cout << "\nDang, this is like the Great Wall of Chocolate.\nThat six layer chocolate cake.\n";
        }
        else if (userInput == "go north" || userInput == "north" || userInput == "walk north" || userInput == "move north")
        {
            cout << "\nDang, this is like the Great Wall of China.\n";
        }
        else if (userInput == "go south" || userInput == "south" || userInput == "walk south" || userInput == "move south")
        {
            diningRoom.onEnter();
        }
        else if (userInput == "go west" || userInput == "west" || userInput == "walk west" || userInput == "move west")
        {
            cout << "\nCrashed and burned right into that wall.\n";
        }

        //outputs for if the user asks to look around hte room
        else if (userInput == "look" || userInput == "look around" || userInput == "take a look" || userInput == "take a gander"
            || userInput == "see" || userInput == "view" || userInput == "view room")
        {
            cout << "\nTo the north is a window.\nTo the east is a wall.\nTo the south is the dining room.\nTo the west is wall.\n"
                << "There is a couch facing the west, towards the television set.\nThe television set is on the westward side.\n";
        }

        //output for if the user wants to look at the couch
        else if (userInput == "look couch" || userInput == "look at couch" || userInput == "couch" || userInput == "take a look at couch"
            || userInput == "view couch" || userInput == "inspect couch" || userInput == "look at the couch" || userInput == "take a look at the couch")
        {
            cout << "\nYou lay down on it.\nIt's quite comfortable, and you almost fall asleep, but remember you have a task at hand.\nYou search through the cushions.\n"
                << "It's your lucky day.\nYou find a whole two pennies and a dust bunny!\nThey won't be very useful, but you have them now.\n";
            backpack.addItem("Two Pennies");
            backpack.addItem("Dust Bunny");
        }

        //output for looking at television set
        else if (userInput == "look television set" || userInput == "look at television set" || userInput == "television set" || userInput == "take a look at television set"
            || userInput == "view television set" || userInput == "inspect television set" || userInput == "look at the television set" || userInput == "take a look at the television set"
            
            || userInput == "look television" || userInput == "look at television" || userInput == "television" || userInput == "take a look at television"
            || userInput == "view television" || userInput == "inspect television" || userInput == "look at the television" || userInput == "take a look at the television"
            
            || userInput == "look tv" || userInput == "look at tv" || userInput == "tv" || userInput == "take a look at tv"
            || userInput == "view tv" || userInput == "inspect tv" || userInput == "look at the tv" || userInput == "take a look at the tv")
        {
            bool hasRemote = false;
            vector<string> items = backpack.getPockets();
            for (size_t i = 0; i < items.size(); i++)
            {
                if (items[i] == "TV Remote")
                {
                    hasRemote = true;
                }
            }
            if (hasRemote)
            {
                cout << "\nThe television is on the National Geographic channel.\nIt's showing animals.\nYou can change the channel with the tv remote.\n"
                    << "What animal are they talking about right now? (don't pluralize any of these)\n";
                cout << ">> ";
                cin >> anim1Guess;
                //check if user knows the correct code
                if (anim1Guess == anim1Ans)
                {
                    cout << "\nYou watch the lions for a bit until you are bored.\nThe zebra deaths are not tickling your fancy anymore, so you change the channel.\n"
                        << "What animal are they talking about now?\n";
                    cout << ">> ";
                    cin >> anim2Guess;

                    //check if user knows the correct code
                    if (anim2Guess == anim2Ans)
                    {
                        cout << "\nYou watch the cats for a bit until you are bored.\nThe yarn balls are not tickling your fancy anymore, so you change the channel.\n"
                            << "What animal are they talking about now?\n";
                        cout << ">> ";
                        cin >> anim3Guess;

                        //check if user knows the correct code
                        if (anim3Guess == anim3Ans)
                        {
                            cout << "\nYou watch the turtles for a bit until you are bored.\nThe cool looking shells are not tickling your fancy anymore, so you change the channel.\n"
                                << "What animal are they talking about now?\n";
                            cout << ">> ";
                            cin >> anim4Guess;

                            //check if user knows the correct code
                            if (anim4Guess == anim4Ans)
                            {
                                cout << "\nYou watch the chickens for a bit and never get bored.\nThe several ways to cook a chicken and an egg are too fascinating for you, so you don't change the channel.\n";
                                cout << "\nAn infomercial turns on about the Snap Chop.\nJust snap your fingers and the food chops itself!\nIncredible!\n"
                                    << "You write down the number so you don't forget to call and order one later.\n";
                                backpack.addItem("Phone Number");
                            }
                            else
                            {
                                cout << "\nNothing happens. Wrong channel.\n";
                            }
                        }
                        else
                        {
                            cout << "\nNothing happens. Wrong channel.\n";
                        }
                    }
                    else
                    {
                        cout << "\nNothing happens. Wrong channel.\n";
                    }
                }
                else
                {
                    cout << "\nNothing happens. Wrong channel.\n";
                }

                cin.ignore();
            }
            else
            {
                cout << "\nThe television is on the National Geographic channel.\nIt's showing animals.\nYou need the tv remote to change the channels but it's missing.\n";
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
