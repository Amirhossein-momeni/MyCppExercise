#include <iostream>

using namespace std;

int main(){

int number[10];
int sum = 0;
int average;

cout << "please Enter 10 number for Average: " << endl;

for(int i=0; i<10; i++){

    cout << "Number " << i << ": ";
    cin >> number[i];
    sum = number[i] + sum;
}

average = sum/10;

cout << "===================================" << endl;
cout << "result is: " << average << endl;

return 0;
}
