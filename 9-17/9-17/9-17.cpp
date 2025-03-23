#include <iostream>
#include <memory>
using namespace std;

int main()
{
	//define a unique_ptr smart pointer, pointing to a dynamically alloocated int

	unique_ptr<int> ptr(new int);

	// assign 99 to the dynamically allocated int
	*ptr = 99;

	// display the value of the dynamically allocated int
	cout << *ptr << endl;
	
}