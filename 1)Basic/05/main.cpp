#include <iostream>

using namespace std;

int main()
{
    float number1 , number2 , number3 , number4 , average;

    cout << "Please Enter Four Number: " << endl;
    cin >> number1 >> number2 >> number3 >> number4;

    cout << "The Total of Four Numbers is : " << number1 + number2 + number3 + number4 << endl;

    average = (number1 + number2 + number3 + number4)/4;

    cout << "The Average of Four Numbers is : " << average << endl;

    return 0;
}
