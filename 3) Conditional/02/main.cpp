#include <iostream>

using namespace std;

int main()
{
    int number1, number2;

    cout << "Please Enter two different numbers: " << endl;

    cout << "Number 1: ";
    cin >> number1;
    cout << "Number 2: ";
    cin >> number2;

    if(number1 > number2)
    {
        cout << "Small Number is: " << number2 << endl;
    }
    else
    {
        cout << "Small Number is: " << number1 << endl;
    }

    return 0;
}
