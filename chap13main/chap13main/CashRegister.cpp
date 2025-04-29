#include "CashRegister.h"
#include <string>
#include <iostream>
using namespace std;

void Exercise2()
{
	//make list of items in the store
	const int SIZE = 5;
	CashRegister inventory[SIZE] = {
		CashRegister("Hammer", 12, 5.00),
		CashRegister("Wrench", 20, 4.50),
		CashRegister("Pliers", 10, 3.00),
		CashRegister("Ratchet", 14, 3.50),
		CashRegister("Screwdriver", 22, 2.50) };
}
