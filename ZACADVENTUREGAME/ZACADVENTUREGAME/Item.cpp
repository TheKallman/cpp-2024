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
    //unlocks china cabinet in dining room
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

void Item::inspectRKey()
{
    //gotten from laundry room washing machine
    //unlocks night stand in master bedroom
    bool hasRKey = false;
    vector<string> items = backpack.getPockets();
    for (size_t i = 0; i < items.size(); i++)
    {
        if (items[i] == "Red Key")
        {
            hasRKey = true;
        }
    }
    if (hasRKey)
    {
        cout << "\nThis is a red key for a red lock.\n";
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
    // used for the used in study computer
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

void Item::inspectAnimalComb()
{
    // gotten from china cabinet in dining room
    // used for the tv
    bool hasAnimal = false;
    vector<string> items = backpack.getPockets();
    for (size_t i = 0; i < items.size(); i++)
    {
        if (items[i] == "Animal Code")
        {
            hasAnimal = true;
        }
    }
    if (hasAnimal) //lion = four, cat = seven, turtle = six, chicken = three
    {
        cout << "\nThis piece of paper has animals on it.\nIt shows first an animal with a four, then one with a seven, another with a six, and lastly, one with a three.\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectPhoneComb() //needs added
{
    // gotten from china cabinet in dining room
    // used for the tv
    bool hasPhone = false;
    vector<string> items = backpack.getPockets();
    for (size_t i = 0; i < items.size(); i++)
    {
        if (items[i] == "Phone Number")
        {
            hasPhone = true;
        }
    }
    if (hasPhone)
    {
        cout << "\nThis piece of paper has numbers on it.\nThe number is 1-800-SNAP-CHOP.\n";
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

void Item::inspectFork()
{
    // gotten from safe in study
    // need soggy code to get it
    //used to change the channel on the tv in living room
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
        cout << "\nThis is a normal four-pronged fork used for eating all kinds of food.\nIt looks wet.\nIt may have been used already.\nNasty...\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectGloves()
{
    // gotten from drawer in kitchen
    // need nothing to get it
    //used to unclog the bathtub
    bool hasGlove = false;
    vector<string> items = backpack.getPockets();
    for (size_t i = 0; i < items.size(); i++)
    {
        if (items[i] == "Gloves")
        {
            hasGlove = true;
        }
    }
    if (hasGlove)
    {
        cout << "\nThese are gloves.\nThey protect you from the ick.\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

//useless inspects
void Item::inspectPennies() 
{
    // gotten from safe in study
    // need soggy code to get it
    //used to change the channel on the tv in living room
    bool hasPennies = false;
    vector<string> items = backpack.getPockets();
    for (size_t i = 0; i < items.size(); i++)
    {
        if (items[i] == "Two Pennies")
        {
            hasPennies = true;
        }
    }
    if (hasPennies)
    {
        cout << "\nThese are pennies.\nYour net worth is now two cents!\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectStep()
{
    // gotten from behind coat hangers in closet
    // need green key to unlock closet
    //used to reach the breakfast burrito in the microwave
    bool hasStep = false;
    vector<string> items = backpack.getPockets();
    for (size_t i = 0; i < items.size(); i++)
    {
        if (items[i] == "Step Ladder")
        {
            hasStep = true;
        }
    }
    if (hasStep)
    {
        cout << "\nThis is a step ladder.\nYou get taller when you use it.\nMost people only dream of having one of these.\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}

void Item::inspectDust() 
{
    // gotten from safe in study
    // need soggy code to get it
    //used to change the channel on the tv in living room
    bool hasDust = false;
    vector<string> items = backpack.getPockets();
    for (size_t i = 0; i < items.size(); i++)
    {
        if (items[i] == "Dust Bunny")
        {
            hasDust = true;
        }
    }
    if (hasDust)
    {
        cout << "\nIt's a pile of dust, not an animal.\nYou stare at it intensely in the palm of your hand.\nNothing happens.\nCurious...\n";
    }
    else
    {
        cout << "\nYou do not have this item.\n";
    }
}