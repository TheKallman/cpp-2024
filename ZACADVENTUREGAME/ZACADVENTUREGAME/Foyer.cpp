#include "Foyer.h"
#include "Kitchen.h"
#include "Backpack.h"
#include "Item.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;

void Foyer::onEnter()
{
    Item item;
    Backpack backpack;
    Kitchen kitchen;
    string userInput;
    string drawerGuess;

    cout << "\nYou are in the foyer.";
    cout << "\nWhat do you want to do?\n>> ";
    getline(cin, userInput);
 
    // Make input lowercase
    for (char& c : userInput) c = tolower(c);
    while (userInput != "quit")
    {
        //outputs for if the user asks to go a certain direction
        if (userInput == "go east" || userInput == "east" || userInput == "walk east" || userInput == "move east")
        {
            kitchen.onEnter();
        }
        else if (userInput == "go north" || userInput == "north" || userInput == "walk north" || userInput == "move north")
        {
            cout << "\nThere is a wall there.\n";
        }
        else if (userInput == "go south" || userInput == "south" || userInput == "walk south" || userInput == "move south")
        {
            cout << "\nThere is a plant on a locked drawer that requires a four digit combination.\n";
        }
        else if (userInput == "go west" || userInput == "west" || userInput == "walk west" || userInput == "move west")
        {
            //find if user has house key and let them escape if they do
            bool hasHouseKey = false;
            vector<string> items = backpack.getPockets();
            for (size_t i = 0; i < items.size(); i++)
            {
                if (items[i] == "House Key")
                {
                    hasHouseKey = true;
                }
            }
            if (hasHouseKey)
            {
                cout << "\nYou unlock the front door with the house key and leave.\nCongratulations! You have escaped the house!\n";
            }
            else
            {
                cout << "\nThe door is locked. A house key is needed to unlock it.\n";
            }
        }
        
        //outputs for if the user asks to look around hte room
        else if (userInput == "look" || userInput == "look around" || userInput == "take a look" || userInput == "take a gander"
            || userInput == "see" || userInput == "view" || userInput == "view room")
        {
            cout << "\nThere is a locked door to the west. A way outside.\nTo the east is the kitchen."
                << "\nThere is a plant on a locked drawer that requires a four digit combination to the south.\nThere is a wall to the north.\n";
        }
        
        //output for if the user wants to look at the plant
        else if (userInput == "look plant" || userInput == "look at plant" || userInput == "plant" || userInput == "take a look at plant"
            || userInput == "view plant" || userInput == "inspect plant" || userInput == "look at the plant" || userInput == "take a look at the plant")
        {
            cout << "\nThe plant seems leafy.\n";
        }

        //output for looking at drawer
        else if (userInput == "look drawer" || userInput == "look at drawer" || userInput == "drawer"
            || userInput == "take a look at drawer" || userInput == "view drawer" || userInput == "inspect drawer")
        {
            //KGPC refers to kitchen, garage, patio, closet. a hint to the code
            cout << "\nIt's an old fashioned Victorian era wooden drawer. The letters KGPC are etched on it.\n";
            cout << "Do you know the code?\n>> ";
            cin >> drawerGuess;

            //check if user knows the correct code
            if (drawerGuess == drawerAnswer)
            {
                //if user has an item that is only gotten by getting the shape code then dont give the shape code again
                //this is too much work i'm notdoing it for the others
                bool hasOvenManual = false;
                vector<string> items = backpack.getPockets();
                for (size_t i = 0; i < items.size(); i++)
                {
                    if (items[i] == "Oven's Owner Manual")
                    {
                        hasOvenManual = true;
                    }
                }
                if (hasOvenManual)
                {
                    cout << "\nYou've already unlocked this and grabbed the item.\n";
                }
                else
                {
                    cout << "\n*Click* The drawer opens.\nInside is a piece of paper with five numbers and shapes underneath each number.\nYou pick up the shape code.\n";
                    backpack.addItem("Shape Code");
                }
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
        else if (userInput == "look oven owner's manual" || userInput == "look at oven owner's manual" || userInput == "oven owner's manual" || userInput == "take a look at oven owner's manual"
            || userInput == "take a look at the oven owner's manual" || userInput == "view oven owner's manual" || userInput == "inspect oven owner's manual")
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
