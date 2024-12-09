#include <iostream>

using namespace std;

int main() {
    double balance, amountofWithdrawal;

    cout << "Enter your account balance: Ksh. ";
    cin >> balance;

    cout << "Enter the withdrawal amount: Ksh. ";
    cin >> amountofWithdrawal;

    if (amountofWithdrawal > balance) {
        cout << "Insufficient funds in your account." << endl;
    } else if (amountofWithdrawal > 50000) {
        cout << "Daily withdrawal limit exceeded, Try Again Later." << endl;
    } else {
        balance -= amountofWithdrawal;
        cout << "Withdrawal successful. New balance: Ksh. " << balance << endl;
    }

    return 0;
}