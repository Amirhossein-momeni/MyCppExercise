#include <iostream>

using namespace std;

int main(){

int num;

cout << "Enter any number to check even or odd: ";
cin >> num;

switch(num % 2){

    case 0: cout<<"Number is even";
        break;

    case 1: cout<<"Number is odd";
        break;

}
return 0;
}
