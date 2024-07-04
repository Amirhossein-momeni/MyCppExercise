#include <iostream>

using namespace std;

int main(){

float score;

cout << "please Enter your score (between 0-20): ";
cin >> score;

if(score <= 20 && score >= 17){
    cout << "excellent" << endl;
}

if(score < 17 && score >= 13){
    cout << "good" << endl;
}

if(score < 13 && score >= 9){
    cout << "medium" << endl;
}

if(score < 9 && score >= 5){
    cout << "weak" << endl;
}

if(score < 5 && score >=0){
    cout << "bad" << endl;
}

return 0;
}
