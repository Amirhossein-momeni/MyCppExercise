#include <iostream>

using namespace std;

int main()
{
    float number1 , number2 , number3 , average;

    cout << "Please Enter Three number: " << endl;
    cin >> number1 >> number2 >> number3;
    cout << "==========================" << endl;

    average = (number1 + number2 + number3)/3;

    cout << "Average is: " << average <<endl;
    return 0;
}
