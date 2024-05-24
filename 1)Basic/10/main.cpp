#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "Please Enter Number1: " << endl;
    cin >> a;
    cout << "Please Enter Number2: " << endl;
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "============================" << endl;
    cout << "Number1 is: " << a << endl;
    cout << "Number2 is: " << b << endl;

    return 0;
}
