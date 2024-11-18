#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    const int SIZE = 10;
    int numbers[SIZE];
    int count = 0;
    ifstream inFile("numbersdemo.txt");

    if (!inFile)
        cout << "File not found.";
    else
    {
        // read the numbers from the file into array
        while (count < SIZE && inFile >> numbers[count])
            count++;
        cout << count << " numbers read from numbersdemotxt\n";
        inFile.close();

        // display the array contents
        cout << "The numbers in the file are: ";
        count = 0;
        while (count < SIZE)
        {
            cout << numbers[count] << " ";
            count++;

        }
        cout << endl;
    }
}