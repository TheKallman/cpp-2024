#include <iostream>
using namespace std;

void displayValue(int);

int main()
{
    cout << "Passing the value 5 to displayValue\n";
    displayValue(5);
    cin.get();
    cout << "Success!\n";
}

void displayValue(int num)
{
    cout << "displayValue receibed the integer " << num << " as an argument.\n";
    cout << "Returning you to main...\nPress any key.\n";
}


