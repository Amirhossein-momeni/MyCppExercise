#include <iostream>

using namespace std;

int main(){

int day, year, month;

cout << "enter day: ";
cin >> day;

year = day/365;
day = day-year*365;
month = day/30;
day = day-month*30;

cout << "year: " << year << endl;
cout << "month: " << month << endl;
cout << "day: " << day << endl;

return 0;
}
