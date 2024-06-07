#include <iostream>

using namespace std;

int main(){

    char CH = 'A';
    char ch = 'a';

do{
    cout << CH << "  " << ch << endl;
    ch++;
    CH++;
}
while( ch <= 'z' && CH <= 'Z');

return 0;
}
