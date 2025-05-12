#include "Backpack.h"
#include "Item.h"
#include <iostream>
using namespace std;
Backpack backpack;

//output items when user asks to view inventory
void Item::outputItems()
{
	vector<string> items = backpack.getPockets();
	for (size_t i = 0; i < items.size(); i++)
	{
		cout << (i+1) << ". " << items[i] << endl;
	}
}

//key inspects
void Item::inspectGKey()
{
    //gotten from the sitting area plant
    //unlocks closet
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
        cout << "\nThis is a green key for a green lock.\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectPKey()
{
    //gotten from kitchen microwave breakfast burrito
    //unlocks medicine cabinet in bathroom
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
        cout << "\nThis is a purple key for a purple lock.\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectBKey()
{
    //gotten from laundry room vent
    //unlocks study
    bool hasBKey = false;
    vector<string> items = backpack.getPockets();
    for (size_t i = 0; i < items.size(); i++)
    {
        if (items[i] == "Blue Key")
        {
            hasBKey = true;
        }
    }
    if (hasBKey)
    {
        cout << "\nThis is a blue key for a blue lock.\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectYKey()
{
    //gotten from laundry room washing machine
    //unlocks...
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
        cout << "\nThis is a yellow key for a yellow lock.\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

//combination inspects
void Item::inspectDrawerComb() 
{
    // gotten from the foyer drawer
    // need to find number in kitchen dishwasher, garage car, patio umbrella, and locked closet unlocked by green key behind coat rack.
    // used to open toolbox in garage
    bool hasDrawerComb = false;
    vector<string> items = backpack.getPockets();
    for (size_t i = 0; i < items.size(); i++)
    {
        if (items[i] == "Shape Code")
        {
            hasDrawerComb = true;
        }
    }
    if (hasDrawerComb)
    {
        cout << "\nThis piece of paper has the numbers 82715.\nUnder the numbers are shapes.\nTriangle, Circle, Square, Diamond, and Trapezoid\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectSogComb()
{
    // gotten from the bathtub drain in bathroom
    // need to find gloves from living room
    // used for the safe in the study
    bool hasSogComb = false;
    vector<string> items = backpack.getPockets();
    for (size_t i = 0; i < items.size(); i++) 
    {
        if (items[i] == "Soggy Code")
        {
            hasSogComb = true;
        }
    }
    if (hasSogComb)
    {
        cout << "\nThis piece of paper has three double digit numbers.\n28, 61, 03\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectMorseComb()
{
    // gotten from under the bed in the master bedroom
    // used for the...
    bool hasMorseComb = false;
    vector<string> items = backpack.getPockets();
    for (size_t i = 0; i < items.size(); i++)
    {
        if (items[i] == "Morse Code")
        {
            hasMorseComb = true;
        }
    }
    if (hasMorseComb)
    {
        cout << "\nThis piece of paper has dots and dashes.\n. ... .--. .-. . ... ... ---\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

//miscellaneous inspects
void Item::inspectOvenManual() 
{
    // gotten from garage toolbox
    // need shape code to get it
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
        cout << "\nThe owner's manual can show you how to turn off the Frigidaire FCRG3052BS.\nThere is a foul odor coming off of it.\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectScrew()
{
    // gotten from garage toolbox
    // need shape code to get it
    bool hasScrew = false;
    vector<string> items = backpack.getPockets();
    for (size_t i = 0; i < items.size(); i++)
    {
        if (items[i] == "Screwdriver")
        {
            hasScrew = true;
        }
    }
    if (hasScrew)
    {
        cout << "\nThe screwdriver is very good at unscrewing screws.\nOne size fits all.\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectWashManual()
{
    // gotten from bathroom medicine cabinet
    // need purple key to get it
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
        cout << "\nThe owner's manual can show you how to turn off the GE Profile PFQ97HS.\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectDumb()
{
    // gotten from night stand drawer in master bedroom
    // need yellow key to get it
    //used to bring down a scale or smth for...
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
        cout << "\nThis is quite the heavy dumbbell.\nCan probably be used to weigh something down.\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectRemote()
{
    // gotten from safe in study
    // need soggy code to get it
    //used to change the channel on the tv in living room
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
        cout << "\nThis is a remote for a television.\nSome of the buttons are missing, but I bet it still works.\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}