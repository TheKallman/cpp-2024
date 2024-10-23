#include <iostream>
using namespace std;

void displayValue(int, int, int, int, int);

int main()
{
    cout << "Passing the value 5 to displayValue\n";
    displayValue(5, 6, 7, 8, 9);
    cin.get();
    cout << "Success!\n";
}

void displayValue(int num1, int num2, int num3, int num4, int num5)
{
    cout << "displayValue receibed the integer " << num1 << endl << num2 << endl << num3 << endl << num4 << endl << num5 << " as an argument.\n";
    cout << "Returning you to main...\nPress any key.\n";
}


