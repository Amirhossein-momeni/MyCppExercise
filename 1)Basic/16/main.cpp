#include <iostream>

using namespace std;

int main(){

    int dividend;
    int divisor;
    int quotient;
    int remainder;

    cout << "===================================" << endl;
    cout << "Input the dividend : " ;
    cin >> dividend;
    cout << "Input the divisor : ";
    cin >> divisor;
    cout << "===================================" << endl;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "The quotient of the division is : " << quotient << endl;
    cout << "The remainder of the division is : " << remainder << endl;

return 0;
}
