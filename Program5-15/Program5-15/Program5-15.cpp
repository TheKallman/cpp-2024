// Program5-15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ofstream outFile("C:\\Users\\2012325\\Desktop\\cpp-2024\\datafiles\\namesdemo.txt");

    if (!outFile) //Check to make sure the file exists
        cout << "File not found.";
    else // file exists, continute
    {
        cout << "Writing these names to the file:\n"
            << "Tom Bombadil"
            << "Frodo Baggins"
            << "Gandalf The White"
            << "Goldberry" << endl;

        // write the names to the file
        outFile << "Tom Bombadil"
            << "Frodo Baggins"
            << "Gandalf The White"
            << "Goldberry" << endl;

        // close the file and output a success emssage
        outFile.close();
        cout << "All names successfully written to file: namesdemo.txt\n"; 
    }
}

