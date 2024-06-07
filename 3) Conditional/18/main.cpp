#include <iostream>

using namespace std;

int main(){

    int num1, num2;

    cout << "Please Enter two numbers to find maximum number: " << endl;
    cout << "number 1: ";
    cin >> num1;
    cout << "number 2: ";
    cin >> num2;

    switch(num1 > num2){
        case 0: cout << num2 << " is Maximum number." << endl;
        break;

        case 1: cout << num1 << " is Maximum number." << endl;
        break;
    }

return 0;
}
