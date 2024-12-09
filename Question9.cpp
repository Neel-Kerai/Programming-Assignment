#include <iostream>

using namespace std;

int main() {
    int age;
    char movieGenre;
    double ticketPrice;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the movie type (R (regular), 3 for (3D): ";
    cin >> movieGenre;

    if (age < 11) {
        ticketPrice = (movieGenre == 'R') ? 5 : 100; // Children's ticket pricing
    } else if (age >= 60) {
        ticketPrice = (movieGenre == 'R') ? 7 : 120; // Senior citizen ticket pricing
    } else {
        ticketPrice = (movieGenre == 'R') ? 10 : 150; // Regular adult ticket pricing
    }

    cout << "Ticket price: Ksh. " << ticketPrice << endl;

    return 0;
}