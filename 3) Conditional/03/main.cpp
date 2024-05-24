#include <iostream>

using namespace std;

int main()
{
    int number1, number2;

    cout << "Please Enter Two Diffrent Number: " << endl;

    cout << "Number 1: ";
    cin >> number1;
    cout << "Number 2: ";
    cin >> number2;

    if(number1 > number2)
    {
        cout << "Greater Number is: " << number1 << endl;
    }
    else
    {
        cout << "Greater Number is: " << number2 << endl;
    }
    return 0;
}
