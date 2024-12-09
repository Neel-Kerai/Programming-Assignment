#include <iostream>
#include <string>
using namespace std;

struct Customer {
    int age;
    double bankBalance;
    string crbStatus;
    int monthsAsCustomer;
};

bool isQualifiedForLoan(const Customer& customer) {
    return (customer.age > 22 &&
            customer.bankBalance > 50000 &&
            customer.crbStatus == "good" &&
            customer.monthsAsCustomer > 6);
}

int main() {
    Customer customer;

    cout << "Enter customer age: ";
    cin >> customer.age;

    cout << "Enter customer bank balance: ";
    cin >> customer.bankBalance;

    cout << "Enter customer CRB status (good/bad): ";
    cin >> customer.crbStatus;

    cout << "Enter number of months as a customer: ";
    cin >> customer.monthsAsCustomer;

    if (isQualifiedForLoan(customer)) {
        cout << "Customer is qualified for a loan." << endl;
    } else {
        cout << "Customer is not qualified for a loan." << endl;
    }

    return 0;
}