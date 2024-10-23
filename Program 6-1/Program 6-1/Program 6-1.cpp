#include <iostream>
using namespace std;
void displayMessage()
{
    cin.get();
    cout << "Hello from function displayMessage!\n";
    cout << "Returning you to function main.\nPause...";
}

int main()
{
    cout << "hello from main\n."
        << "please hold while I forward you to function displayMessage.\nPause...";
    // call displayMessage
    displayMessage();
    cin.get();
    cout << "Welcome back to function main. Have a great day.\n";

}