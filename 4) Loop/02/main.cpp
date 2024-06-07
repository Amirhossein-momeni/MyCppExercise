#include <iostream>

using namespace std;

int main(){

    char ch = 'a';
    char CH = 'A';

while(ch <= 'z' && CH <= 'Z'){

    cout << CH << "  " << ch << endl;
    ch++;
    CH++;

}


return 0;
}
