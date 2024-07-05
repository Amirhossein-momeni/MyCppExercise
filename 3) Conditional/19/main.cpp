#include <iostream>

using namespace std;

int main(){

int number;

cout << "add a number between 1-7: ";
cin >> number;

switch(number){
    case 1:
        cout << "shanbe" << endl;
        break;
    case 2:
        cout << "1-shanbe" << endl;
        break;
    case 3:
        cout << "2-shanbe" << endl;
        break;
    case 4:
        cout << "3-shanbe" << endl;
        break;
    case 5:
        cout << "4-shanbe" << endl;
        break;
    case 6:
        cout << "5-shanbe" << endl;
        break;
    case 7:
        cout << "jome" << endl;
        break;

    default:
        cout << "your number is not between 1-7" << endl;
}

return 0;
}
