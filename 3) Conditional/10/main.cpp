#include <iostream>

using namespace std;

int main(){

int number;

cout << "x > 1 ---- 2x+1" << endl;
cout << "x = 1 ---- 2x" << endl;
cout << "x < 1 ---- 2x-1" << endl << endl;

cout << "please enter x: ";
cin >> number;

if(number == 1){
    cout << "result is: " << number*2 << endl;
}

if(number > 1){
    cout << "result is: " << (number*2) + 1 << endl;
}

if(number < 1){
    cout << "result is: " << (number*2) - 1 << endl;
}

return 0;
}
