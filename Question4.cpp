#include <iostream>
using namespace std;

int main() {
    int  dig1,  dig2;
    cout << "Enter two  digits: ";
    cin >>  dig1 >>  dig2;

    switch ( dig1 >  dig2) {
        case 1:
            cout << "The maximum  digit is: " <<  dig1 << endl;
            break;
        case 0:
            switch ( dig1 <  dig2) {
                case 1:
                    cout << "The maximum  digits is: " <<  dig2 << endl;
                    break;
                case 0:
                    cout << "Both  digit are equal." << endl;
                    break;
            }
            break;
    }

    return 0;
}