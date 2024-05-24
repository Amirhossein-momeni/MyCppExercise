#include <iostream>

using namespace std;

int main()
{
    int number1;
    int number2;
    int total;

    cout << "Please Enter The First Number: " << endl;
    cin >> number1;

    cout << "Please Enter The Second Number: "  << endl;
    cin >> number2;

    total = number1 + number2;

    cout << "================================" << endl;
    cout << "total is: " << total << endl;

    return 0;
}
