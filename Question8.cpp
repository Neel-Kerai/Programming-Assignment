#include <iostream>

using namespace std;

int main() {
    double totalCost, discountApplicable;

    cout << "Enter the total cost of items: Ksh.";
    cin >> totalCost;

    if (totalCost >= 1999) {
        discountApplicable = 0.27; // 15% discountApplicable for purchases over 1999
    } else if (totalCost >= 599) {
        discountApplicable = 0.20; // 10% discountApplicable for purchases over 599
    } else if (totalCost >= 299) {
        discountApplicable = 0.15; // 5% discountApplicable for purchases over 299
    } else {
        discountApplicable = 0; // No discountApplicable for purchases below 299
    }

    double finalCost = totalCost - (totalCost * discountApplicable);

    cout << "Total cost after discount Applied: Ksh. " << finalCost << endl;

    return 0;
}