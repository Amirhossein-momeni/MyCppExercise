#include <iostream>

using namespace std;

int main(){

int length, breadth, area, perimeter;
cout << "Enter length of rectangle : ";
cin >> length;

cout << "Enter breadth of rectangle : ";
cin >> breadth;

area = length * breadth;
perimeter = (length + breadth) * 2;

cout << "Area of rectangle is : " << area << " and perimeter is " << perimeter;

return 0;
}
