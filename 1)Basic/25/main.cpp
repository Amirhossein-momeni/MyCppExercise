#include <iostream>

using namespace std;

int main(){

int year, month;

cout << "Enter year: ";
cin >> year;
cout << "Enter month: ";
cin >> month;

cout << endl;
cout << "Result is: " << (year*365)+(month*30) << endl;

return 0;
}
