// 9-15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//define function prototypes
int* getRandomNumbers(int);

int main()
{
    int* numbers = nullptr;

    //get an array of 5 numbers
    numbers = getRandomNumbers(5);

    // output the numbers
    for (int count = 0; count < 5; count++)
    {
        cout << numbers[count] << endl;
    }

    // gree the memort
    delete[] numbers;
    numbers = nullptr;

}

int* getRandomNumbers(int size)
{
    int* arr = nullptr; // array to hold the numbers

    // return a null pointer if num is zero or negative
    if (size <= 0)
        return nullptr;

    // dynamically allocate the array
    arr = new int[size];

    // seed the random number
    srand(time(0));

    // populate the array with random numbers
    for (int count = 0; count < size; count++)
    {
        arr[count] = rand();
    }

    // return the pointer to the array
    return arr;
}
