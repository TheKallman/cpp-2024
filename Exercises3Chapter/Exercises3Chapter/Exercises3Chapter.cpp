#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
	cout << "-----------------------------Rainfall---------------------------" << endl << endl;

	/*//initialize variables
	string month1, month2, month3;
	float rainfall1, rainfall2, rainfall3, avgRain;

	//ask for the month and amount of rain in that month
	cout << "Enter a month to record rainfall for: ";
	cin >> month1;
	cout << "Enter the rainfall for " << month1 << ": ";
	cin >> rainfall1;

	cout << "Enter a month to record rainfall for: ";
	cin >> month2;
	cout << "Enter the rainfall for " << month2 << ": ";
	cin >> rainfall2;

	cout << "Enter a month to record rainfall for: ";
	cin >> month3;
	cout << "Enter the rainfall for " << month3 << ": ";
	cin >> rainfall3;

	//calculate and output average rainfall
	avgRain = (rainfall1 + rainfall2 + rainfall3) / 3;

	cout << "The average rainfall for the months of " << month1 << ", " << month2
		<< ", and " << month3 << " is: " << avgRain << " inches of rain.";*/

	cout << "\n\n-----------------------------Cookies---------------------------" << endl << endl;

	/*//make ingredients constants
	double const sugar = 1.5 / 48.0;
	double const butter = 1.0 / 48.0;
	double const flour = 2.75 / 48.0;

	//make input ingredients
	double inSugar, inButter, inFlour;
	int cookieAmount;

	//ask for amount of cookies user wants to bake
	cout << "Enter the number of cookies you want to bake: ";
	cin >> cookieAmount;

	//calculate the amount of ingredients needed for the amount of cookies wanted
	float sugarFormula = sugar * cookieAmount;
	float butterFormula = butter * cookieAmount;
	float flourFormula = flour * cookieAmount;

	cout << "To make " << cookieAmount << " cookies, you will need:\n" <<
		sugarFormula << " cups of sugar\n" <<
		butterFormula << " cups of butter\n" <<
		flourFormula << " cups of flour\n";*/

	cout << "\n\n-----------------------------Math Tutor---------------------------" << endl << endl;

	/*//set min and max range
	int const maxValue = 500;
	int const minValue = 0;

	//make it actually random
	unsigned seed = time(0);
	srand(seed);

	//make 2 numbers to add together
	int num1, num2;

	num1 = (rand() % (maxValue - minValue + 1)) + minValue;
	num2 = (rand() % (maxValue - minValue + 1)) + minValue;

	cout << "  " << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << "-------" << endl << endl;

	//pause so user can math
	cout << "Press Enter to reveal the answer cuh";
	cin.get();
	cout << endl << endl;

	//add the numbers
	int answer = num1 + num2;

	cout << "  " << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << "-------" << endl;
	cout << "  " << answer;*/

	cout << "\n\n-----------------------------Monthly Payments---------------------------" << endl << endl;

	//initialize the necessary items
	float loan, annualRate;
	int paymentNumber;
	
	//get all the necessary items
	cout << "Enter the loan amount: ";
	cin >> loan;

	cout << "Enter the annual interest rate: ";
	cin >> annualRate;

	cout << "Enter the number of payments made: ";
	cin >> paymentNumber;

	//calculations
	float MIR = annualRate / 12; //"Rate" in formula
	float adjustedRate = pow((1 + MIR), paymentNumber);
	float monthlyPayment = (MIR * adjustedRate) / (adjustedRate - 1) * loan;
	float totalPaid = MIR * paymentNumber;
	float interestPaid = totalPaid - loan;
	float amountPaidBack = loan + interestPaid;
	float payment = ((MIR + pow((1 + MIR), paymentNumber)) / (pow((1 + MIR), paymentNumber) - 1)) * loan;

	//output everything
	cout << "Loan Amount: " << setw(15) << "$ " << loan << endl;
	cout << "Monthly Interest Rate: " << setw(15) << MIR << "%" << endl;
	cout << "Number of Payments: " << setw(15) << paymentNumber << endl;
	cout << "Monthly Payment: " << setw(15) << "$ " << monthlyPayment << endl;
	cout << "Amount Paid Back: " << setw(15) << "$ " << amountPaidBack << endl;
	cout << "Interest Paid: " << setw(15) << "$ " << interestPaid << endl;


	cout << "\n\n-----------------------------Pizza Pi---------------------------" << endl << endl;

	/*//initialzer the things 
	double diameter;
	int people;
	int sliceAmount;
	double const sliceSize = 14.125;
	double const pi = 3.141592653;

	//get diameter
	cout << "Enter the diameter of the pizza in inches: ";
	cin >> diameter;

	//calculate area of pizza and amount of slices
	double pizzaArea = pi * pow((diameter / 2), 2);
	double sliceCounter = pizzaArea / sliceSize;

	//display slice amount
	cout << fixed << "A " << setprecision(1) << diameter << " inch piza contains about " << sliceCounter << " slices.\n\n";
	
	//ask for amount of people attending
	cout << "How many people will be attending? ";
	cin >> people;

	//ask for slices per person
	cout << "\nHow many slices per person? ";
	cin >> sliceAmount;

	//calculate amount of pizzas needed
	double pizzaAmount = (people * sliceAmount) / sliceCounter;

	//print that john
	cout << "You will need to buy " << pizzaAmount << " total pizzas.";*/

	cout << "\n\n-----------------------------Word Game---------------------------" << endl << endl;

	/*//initialize player input things
	string name, age, city, college, profession, animal, pet_name;

	//ask for things
	cout << "Please insert a name of a person: ";
	getline(cin, name);

	cout << "Please insert an age: ";
	getline(cin, age);

	cout << "Please insert a city: ";
	getline(cin, city);

	cout << "Please insert a college: ";
	getline(cin, college);

	cout << "Please insert a profession: ";
	getline(cin, profession);

	cout << "Please insert an animal: ";
	getline(cin, animal);

	cout << "Please insert a pet name: ";
	getline(cin, pet_name);

	//output the story

	cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << " " << name << " went to college at " <<
		college << ". " << name << " graduated and went to work as a " << profession << ". Then, " << name << " adopted a(n) " << animal << " named " <<
		pet_name << ". They both lived happily ever after.";*/
}
