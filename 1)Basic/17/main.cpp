#include <iostream>

using namespace std;

int main()
{
    int num, dig1, dig2;

    cout << "Enter a two-digit number: ";
    cin >> num;

    dig1 = num/10;
    dig2 = num%10;

    cout << "The inverse of the number is: " << dig2 << dig1 << endl;

return 0;
}
