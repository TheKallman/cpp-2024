#include <iostream>
using namespace std;


int duplicateArray(int[], int[], int[], int);
int displayArray(int[], int);

int main()
{
	int const SIZE = 5;
	int array1[SIZE] = { 1,2,3,4,5 };
	int array2[SIZE] = { 6,7,8,9,10 };
	int array3[SIZE] = { 11,12,13,14,15 };

	duplicateArray(array1, array2, array3, SIZE);

}
