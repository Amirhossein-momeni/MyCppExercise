#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Please Enter a Number: ";
    cin >> number;

    if(number == 0)
    {
        cout << "Number = 0" << endl;
    }
    else if (number > 0)
    {
        cout << "Number > 0" << endl;
    }
    else
    {
        cout << "Number < 0" << endl;
    }

    return 0;
}
