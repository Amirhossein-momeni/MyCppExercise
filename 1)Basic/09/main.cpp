#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int m;

    cout << "Please Enter Number1: " << endl;
    cin >> a;
    cout << "Please Enter Number2: " << endl;
    cin >> b;

    m = a;
    a = b;
    b = m;

    cout << "============================" << endl;
    cout << "Number1 is: " << a << endl;
    cout << "Number2 is: " << b << endl;

    return 0;
}
