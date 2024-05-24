#include <iostream>

using namespace std;

int main()
{
    int number;
    bool flag = true;

    cout << "This program determines whether the input number is prime or not." << endl;
    cout << "==================================================================" << endl;

    cout << "Add your number: ";
    cin >> number;


    if(number < 2){
        cout << "your number is not prime. " << endl;
    }


    else if(number == 2){
        cout << "your number is prime. " << endl;
    }


    else if(number > 2){
        for(int i=2; i<number; i++){

            if(number%i == 0){
            cout << "your number is not prime" << endl;
            flag = false;
            break;
            }
    }

        if(flag){
            cout << "your number is prime" << endl;
            }

    }

    return 0;
}
