#include <iostream>
using namespace std;

int* notmainfunction3(int size)
{
    int* numbers = new int[size]();
    return numbers;
}

int* newfunction(int* array, int size)
{
    int newSize = 5;
    int* listTwime = notmainfunction3(newSize);

    listTwime[0] = 0;

    
    for (int p = 0; p < newSize; p++)
    {
        listTwime[p+1] = array[p];
    }
    

    return listTwime;
}

void Exercise4()
{
    int size = 4;
    int element = 0;
    int* listPrime = notmainfunction3(size);

    cout << "\nInput 4 integers\n";

    for (int i = 0; i < size; i++)
    {
        cin >> element;
        listPrime[i] = element;
    }

    cout << "\nThis is your array before the shift:\n";

    for (int i = 0; i < size; i++)
    {
        cout << listPrime[i] << " ";
    }

    int* listTwime = newfunction(listPrime, size);
    int newSize = 5;

    cout << "\nThis is your array after the shift:\n";

    for (int i = 0; i < newSize; i++)
    {
        cout << listTwime[i] << " ";
    }

    cout << endl;
}
