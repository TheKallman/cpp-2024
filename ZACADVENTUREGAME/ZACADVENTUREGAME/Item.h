#pragma once
#ifndef ITEM_H
#define ITEM_H

#include "Backpack.h"
#include "Kitchen.h"
#include "Foyer.h"
#include <string>
#include <iostream>
using namespace std;

//this class outputs items in your backpack and asks user what item they would like to define
class Item
{
private:
	//ts useless now but i dont wanna delete <3
	
	//keys
	string gKey = "\nThis is a green key for a green lock.\n";
	string pKey = "\nThis is a purple key for a purple lock.\n";

	//combinations
	string drawerComb = "\nThis piece of paper has the numbers 82715.\nUnder the numbers are shapes.\nTriangle, Circle, Square, Diamond, and Trapezoid\n";

	//miscellaneous items

	
public:
	void outputItems();

	//key inspects
	void inspectGKey();
	void inspectPKey();
	void inspectBKey();
	void inspectYKey();
	//combnation inspects
	void inspectDrawerComb();
	void inspectSogComb();
	void inspectMorseComb();

	//miscellaneous inspects
	void inspectOvenManual();
	void inspectScrew();
	void inspectWashManual();
	void inspectDumb();
	void inspectRemote();
};
#endif