#include <iostream>

using namespace std;

int main(){
float radius, area, perimeter;
cout << "Enter Radius: ";

cin >> radius;
area = 3.14 * radius * radius;
perimeter = 2 * 3.14 * radius;

cout << "area of circle is: " << area << "  and perimeter is: " << perimeter << endl;

return 0;
}
