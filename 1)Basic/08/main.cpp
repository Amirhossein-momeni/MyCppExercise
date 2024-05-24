#include <iostream>

using namespace std;

int main()
{
    int number1;
    int number2;

    cout << "Please Enter First Number: " << endl;
    cin >> number1;
    cout << "Please Enter Second Number: " << endl;
    cin >> number2;

    cout << "===============================" <<endl;

    cout << "Sum of number1 and number2: " << number1 + number2<< endl;
    cout << "Difference of number1 and number2: " << number1 - number2 << endl;
    cout << "Product of number1 and number2: " << number1 * number2 << endl;
    cout << "Quotient of number1 and number2: " << number1 / number2 << endl;
    cout << "Modulus of number1 and number2: " << number1 % number2 << endl;

    return 0;
}
