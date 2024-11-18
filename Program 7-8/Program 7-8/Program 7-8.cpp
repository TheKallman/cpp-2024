#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    const int SIZE = 10;
    int numbers[SIZE];
    int count;
    ofstream outFile("prog7_8demo.txt");

    for (count = 0; count < SIZE; count++)
        numbers[count] = count;
    if (!outFile)
        cout << "File not found.";
    else
    {
        for (count = 0; count < SIZE; count++)
            outFile << numbers[count] << endl;
    }

    outFile.close();
    cout << "All data written to prog7_8demo.txt.\n";
}