#include <iostream>

using namespace std;

int main(){
int side, area, perimeter;
cout << "Enter the Length of Side : ";
cin >> side;

area = side * side;
perimeter = 4 * side;

cout << "Area of Square is : "<< area << " and perimeter is " << perimeter;

return 0;
}
