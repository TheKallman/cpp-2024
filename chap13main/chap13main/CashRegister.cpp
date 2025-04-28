#include "CashRegister.h"
#include <string>
#include <iostream>
using namespace std;

void Exercise2()
{
	//make list of items in the store
	const int SIZE = 5;
	CashRegister inventory[SIZE] = {
		CashRegister("Hammer", 12),
		CashRegister("Wrench", 20),
		CashRegister("Pliers", 10),
		CashRegister("Ratchet", 14),
		CashRegister("Screwdriver", 22) };
}
