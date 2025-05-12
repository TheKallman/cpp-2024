#pragma once
#ifndef BACKPACK_H
#define BACKPACK_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Backpack
{
public:
    static vector<string> pockets;

    void addItem(string item);
    vector<string> getPockets() const;
    void useItem(string item);
};

#endif