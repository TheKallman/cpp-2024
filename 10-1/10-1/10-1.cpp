#include <iostream>
using namespace std;
int main()
{
    char input;
    char again = 'y';

    do
    {
        cout << "Please enter a keyboard character: ";
        cin.get(input);
        cout << "\nThe keyboard character you entered is: "
            << input << endl;

        //detemrmite the character ttype
        if (isalnum(input))
        {
            cout << "\nThat is an alphanumeric character.\n";
            if (isalpha(input))
            {
                if (islower(input))
                {
                    cout << "\nThat is a lowercase alpha character.\n";
                }
                else
                    cout << "\nThat is an uppercase alpha character.\n";
            }
            else if (isdigit(input))
            {
                cout << "\nThat is a digit character.\n";
            }
        }
        if (isprint(input))
            cout << "\nThat is a printable keyboard character.\n";
        if (ispunct(input))
            cout << "\nThat is a punctuation character.\n";
        cout << "\nAgain? >> ";
        cin.ignore();
        cin.get(again);
        cin.ignore();
        cout << "-------------------\n";
    } while (again == 'y' || again == 'Y');
    cout << endl;
}