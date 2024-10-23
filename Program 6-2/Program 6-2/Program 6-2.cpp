#include <iostream>
using namespace std;

void displayMessage()
{
    cin.get();
    cout << "YO YO ITS DISPLAY MESSAGE!!!!!\n";
    cout << "returning to main\n";
    cout << "Press enter\n";
    cin.get();
}
int main()
{
    for (int counter = 0; counter < 5; counter++)
    {
        cout << "Sending you to displayMessage\n";
        cout << "Press enter\n";
        displayMessage();
        
    }
    cout << "processing next line in main\n Press any key.\n";
    cin.get();

}

