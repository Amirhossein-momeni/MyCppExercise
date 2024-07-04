#include <iostream>

using namespace std;

int main(){

int num1, num2;

cout << "Enter two Number(number1 < number2) " << endl;
cout << "number 1: ";
cin >> num1;
cout << "number 2: ";
cin >> num2;

for(int i=num1; i<=num2; i++){

    if( i%2 != 0 ){
        cout << i << endl;
    }
}

return 0;
}
