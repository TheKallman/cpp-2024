#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct InventoryItem
{
	int partNum;
	string description;
	int onHand;
	double price;
};

void getItem(InventoryItem& part);
void showItem(InventoryItem& part);

int main()
{
	InventoryItem part;
	getItem(part);
	showItem(part);
	return 0;
}

void getItem(InventoryItem& part)
{
	cout << "Enter the part number: ";
	cin >> part.partNum;

	cout << "Enter the part description: ";
	cin.ignore();
	getline(cin, part.description);

	cout << "Enter the quantity on hand: ";
	cin >> part.onHand;

	cout << "Enter the unit price: ";
	cin >> part.price;
}

void showItem(InventoryItem& part)
{
	cout << fixed << showpoint << setprecision(2);
	cout << "Part Number: " << part.partNum << endl;
	cout << "Description: " << part.description << endl;
	cout << "Units on hand: " << part.onHand << endl;
	cout << "Price per Unit: $" << part.price << endl;
}