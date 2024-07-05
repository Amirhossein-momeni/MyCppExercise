#include <iostream>
using namespace std;

int main(){

int week;

cout<<"Enter week number (1-7):";
cin >> week;

if(week == 1){
    cout << "shanbe";
}
else if(week == 2){
    cout << "1-shanbe";
}
else if(week == 3){
    cout << "2-shanbe";
}
else if(week == 4){
    cout << "3-shanbe";
}
else if(week == 5){
    cout << "4-shanbe";
}
else if(week == 6){
    cout << "5-shanbe";
}
 else if(week == 7){
    cout << "jome";
}

else{
    cout << "Invalid Input! Please enter week in between 1-7.";
}

return 0;
}
