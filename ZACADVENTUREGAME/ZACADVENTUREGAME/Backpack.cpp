#include "Backpack.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// Define the static member
vector<string> Backpack::pockets;

void Backpack::addItem(string item)
{
    pockets.push_back(item);
}

vector<string> Backpack::getPockets() const
{
    return pockets;
}

void Backpack::useItem(string item)
{
    auto usedItem = find(pockets.begin(), pockets.end(), item); //search for certain item

    if (usedItem != pockets.end())
    {
        pockets.erase(usedItem);  //remove item that was used
    }
}
