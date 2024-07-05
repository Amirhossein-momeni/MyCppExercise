#include <iostream>

using namespace std;

int main(){

char gender;

cout << "Enter gender (M/m or F/f): ";
cin >> gender;

switch(gender){

    case 'M':
    case 'm':
        cout << "Male";
        break;

    case 'F':
    case 'f':
        cout << "Female";
        break;

    default:
        cout << "Unspecified Gender" << endl;

}

return 0;
}
