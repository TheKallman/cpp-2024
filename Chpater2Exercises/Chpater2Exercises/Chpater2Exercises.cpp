#include <iostream>
using namespace std;
int main()
{
	cout << "---------------------------------Sales Prediction-------------------------------------" << endl << endl << endl; // Sales Prediction
	auto percentage = 0.58;
	auto scenario1 = 8.6;
	auto scenario2 = 10;

	auto estimate1 = scenario1 * percentage;
	auto estimate2 = scenario2 * percentage;

	cout << "If total sales are " << scenario1 << " million, the Midwest division is estimated to generate " << estimate1 << " million." << endl;
	cout << "If total sales are " << scenario2 << " million, the Midwest division is estimated to generate " << estimate2 << " million." << endl << endl << endl;

	cout << "-------------------------Sales Tax---------------------------" << endl << endl << endl; // Sales Tax

	double purchase1 = 75.00;
	double purchase2 = 85.00;
	double purchase3 = 100.00;

	double stateSalesTax = 0.04;
	double countySalesTax = 0.02;

	auto stateTax1 = purchase1 * stateSalesTax;
	auto countyTax1 = purchase1 * countySalesTax;
	auto total1 = purchase1 + stateTax1 + countyTax1;

	auto stateTax2 = purchase2 * stateSalesTax;
	auto countyTax2 = purchase2 * countySalesTax;
	auto total2 = purchase2 + stateTax2 + countyTax2;

	auto stateTax3 = purchase3 * stateSalesTax;
	auto countyTax3 = purchase3 * countySalesTax;
	auto total3 = purchase3 + stateTax3 + countyTax3;

	cout << "Purchase: \t\t$75.00" << endl;
	cout << "State Tax: \t\t$" << stateTax1 << endl;
	cout << "County Tax: \t\t$" << countyTax1 << endl;
	cout << "Total: \t\t\t$" << total1 << endl << endl;

	cout << "Purchase: \t\t$85.00" << endl;
	cout << "State Tax: \t\t$" << stateTax2 << endl;
	cout << "County Tax: \t\t$" << countyTax2 << endl;
	cout << "Total: \t\t\t$" << total2 << endl << endl;

	cout << "Purchase: \t\t$100.00" << endl;
	cout << "State Tax: \t\t$" << stateTax3 << endl;
	cout << "County Tax: \t\t$" << countyTax3 << endl;
	cout << "Total: \t\t\t$" << total3 << endl << endl << endl;
	

	cout << "-------------------------Restaurant Bill---------------------------" << endl << endl << endl; // Restaurant Bill


	auto mealCharge = 88.67;
	auto stateTax = .065;
	auto tip = .2;

	auto taxAmount = mealCharge * stateTax;
	auto tipAmount = mealCharge * tip;
	auto totalBill = mealCharge + taxAmount + tipAmount;

	cout << "Meal Cost: \t\t$" << mealCharge << endl;
	cout << "Total Tax: \t\t$" << taxAmount << endl;
	cout << "Total Tip: \t\t$" << tipAmount << endl;
	cout << "Total Bill: \t\t$" << totalBill << endl << endl << endl;


	cout << "-------------------------Annual Pay---------------------------" << endl << endl << endl; // Annual Pay


	auto payAmount = 2200.0;
	auto payPeriods = 26;
	auto annualPay = payAmount * payPeriods;

	cout << "The employee's annual pay is: $" << annualPay << endl << endl << endl;


	cout << "--------------------------------Cyborg Data Type Sizes---------------------------------" << endl << endl << endl; // Cyborg thing


	cout << "A char uses " << sizeof(char) << " byte(s) of memory.\n";
	cout << "An int uses " << sizeof(int) << " byte(s) of memory.\n";
	cout << "A float uses " << sizeof(float) << " byte(s) of memory.\n";
	cout << "A double uses " << sizeof(double) << " byte(s) of memory.\n" << endl << endl << endl;


	cout << "-------------------------Diamond Pattern---------------------------" << endl << endl << endl; // Diamond Pattern


	cout << "   *" << endl;
	cout << "  ***" << endl;
	cout << " *****" << endl;
	cout << "*******" << endl;
	cout << " *****" << endl;
	cout << "  ***" << endl;
	cout << "   *" << endl;
}
