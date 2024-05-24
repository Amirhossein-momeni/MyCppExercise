#include <iostream>

using namespace std;

int main()
{
    int number1, number2, number3;

    cout << "Please Enter Tree Diffrent Number: " << endl;
    cin >> number1 >> number2 >> number3;

    if( number1 > number2 && number1 > number3)
    {
        cout << number1 << " is the largest number" << endl;
    }
    else if(number2 > number1 && number2 > number3)
    {
        cout << number2 << " is the largest number" << endl;
    }
    else
    {
        cout << number3 << " is the largest number" << endl;
    }

    return 0;
}
