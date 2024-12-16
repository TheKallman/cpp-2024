#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const int ROWS = 15;
const int SEATS = 30;
char seatingChart[ROWS][SEATS];
double seatPrices[ROWS];

void initializeSeatingChart() {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < SEATS; ++j) {
            seatingChart[i][j] = '#'; // Available seats
        }
    }
}

void displaySeatingChart() {
    cout << "\n\t\tSeats\n";
    cout << "\t123456789012345678901234567890\n";
    for (int i = 0; i < ROWS; ++i) {
        cout << "Row " << (i + 1) << "\t";
        for (int j = 0; j < SEATS; ++j) {
            cout << seatingChart[i][j];
        }
        cout << "\n";
    }
}

void enterSeatPrices() {
    cout << "Enter the seat prices for each row:\n";
    for (int i = 0; i < ROWS; ++i) {
        cout << "Row " << (i + 1) << ": ";
        cin >> seatPrices[i];
    }
}

double sellTickets(int row, int startSeat, int numberOfSeats) {
    double totalPrice = 0.0;
    for (int j = startSeat; j < startSeat + numberOfSeats; ++j) {
        if (seatingChart[row][j] == '#') {
            seatingChart[row][j] = '*'; // Mark seat as taken
            totalPrice += seatPrices[row];
        }
        else {
            cout << "Seat " << (j + 1) << " in Row " << (row + 1) << " is already taken.\n";
            return -1; // Indicate failure
        }
    }
    return totalPrice;
}

int main() {
    initializeSeatingChart();
    enterSeatPrices();
    displaySeatingChart();

    int row, startSeat, numberOfSeats;
    char anotherPurchase;

    do {
        cout << "Enter row number (1-15): ";
        cin >> row;
        cout << "Enter starting seat number (1-30): ";
        cin >> startSeat;
        cout << "Enter number of seats to purchase: ";
        cin >> numberOfSeats;

        double total = sellTickets(row - 1, startSeat - 1, numberOfSeats);
        if (total != -1) {
            cout << "Total price: $" << fixed << setprecision(2) << total << endl;
        }

        displaySeatingChart();
        cout << "Would you like to make another purchase? (y/n): ";
        cin >> anotherPurchase;

    } while (anotherPurchase == 'y' || anotherPurchase == 'Y');

    return 0;
}