#include <iostream>
#include <string>
using namespace std;

int main(){

char fname[30], lname [30];

cout << "\n\n Print the name in reverse where last name comes first:\n";
cout << "-----------------------------------------------------------\n";
cout << " Input First Name: ";
cin >> fname;
cout << " Input Last Name: ";
cin >> lname;
cout << " Name in reverse is: "<< lname << " "<< fname << endl;
cout << endl;

return 0;
}
