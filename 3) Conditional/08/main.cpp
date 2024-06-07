#include <iostream>

using namespace std;

int main(){

    char character;

    cout << "Please Enter any Character: ";
    cin >> character;

    if(character >= 'a' && character <= 'z'){
        cout << character << " is lowercase alphabet." << endl;
    }

    else if(character >= 'A' && character <= 'Z'){
        cout << character << " is uppercase alphabet." << endl;
    }

    else{
        cout << character << " is not alphabet." << endl;
    }

return 0;
}
