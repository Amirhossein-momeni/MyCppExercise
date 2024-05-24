#include <iostream>

using namespace std;

int main()
{
    int number1, number2;

    cout << "Please Enter two number: " << endl;

    cout << "number 1:";
    cin >> number1;
    cout << "number 2:";
    cin >> number2;

    cout << endl;

    if(number1 == number2)
    {
        cout << "Number 1 and Number 2 are equal." << endl;
    }
    else
    {
        cout << "Number 1 and Number 2 are not equal." << endl;
    }

    return 0;
}
