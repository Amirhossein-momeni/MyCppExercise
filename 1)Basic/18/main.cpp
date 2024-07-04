#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        number = -number;
    }

    int lastDigit = number % 10;

    int firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int twoDigitNumber = firstDigit * 10 + lastDigit;

    cout << "The two-digit number is: " << twoDigitNumber << endl;

    return 0;
}
