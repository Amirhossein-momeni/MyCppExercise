#include <iostream>

using namespace std;

int main(){

float far, cel;

cout << "please Enter Temperature in Celsius : ";
cin >> cel;

far = (1.8 * cel) + 32;

cout << "result is: " << far << endl;

return 0;
}
