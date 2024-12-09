#include <iostream>
#include <string>

using namespace std;

int main() {
    string borrowingType;
    int daysLate;
    double fine = 0.0;

    cout << "Enter the type of borrowing (regular, children, reference): ";
    cin >> borrowingType;
    cout << "Enter the number of days late: ";
    cin >> daysLate;

    if (borrowingType == "regular") {
        if (daysLate <= 5) {
            fine = daysLate * 0.80;
        } else if (daysLate <= 10) {
            fine = 5 * 0.80 + (daysLate - 5) * 1.00;
        } else {
            fine = 5 * 0.80 + 5 * 1.00 + (daysLate - 10) * 1.50;
        }
    } else if (borrowingType == "children") {
        if (daysLate <= 5) {
            fine = daysLate * 0.45;
        } else if (daysLate <= 10) {
            fine = 5 * 0.45 + (daysLate - 5) * 0.50;
        } else {
            fine = 5 * 0.45 + 5 * 0.50 + (daysLate - 10) * 1.00;
        }
    } else if (borrowingType == "reference") {
        fine = daysLate * 2.00;
    } else {
        cout << "Invalid borrowing type entered." << endl;
        return 1;
    }

    cout << "The fine for returning the book late is: $" << fine << endl;

    return 0;
}