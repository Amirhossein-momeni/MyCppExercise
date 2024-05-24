#include <iostream>

using namespace std;

int main()
{
    int number1, number2;

    cout << "Enter two numbers to Find maximum number: " << endl;
    cout << "Number 1: ";
    cin >> number1;
    cout << "Number 2: ";
    cin >> number2;

    switch(number1 > number2)
    {
        case 0: cout << number2 << " is Maximum Number";
        break;

        case 1: cout << number1 << " is Maximum Number";
        break;
    }

    return 0;
}
