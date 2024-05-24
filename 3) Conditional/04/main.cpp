#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Please Enter a Number: " ;
    cin >> number;
    cout << endl;

    if(number%2 == 0)
    {
        cout << number << " is even" << endl;
    }
    else
    {
        cout << number << " is Odd " << endl;
    }

    return 0;
}
