#include <iostream>
using namespace std;

int* notmainfunction(int size)
{
    int* numbers = new int[size]();
    return numbers;
}

int* newfunction(int* array, int size)
{
    size++;
}

int main()
{
    int size = 4;
    int element = 0;
    int* listPrime = notmainfunction(size);

    cout << "Input 4 integers\n";

    for (int i = 0; i < size; i++)
    {
        cin >> element;
        listPrime[i] = element;
    }

    /*for (int i = 0; i < size; i++)
    {
        cout << listPrime[i] << " ";
    }*/

    int* listTwime = newfunction(listPrime, size);
}
