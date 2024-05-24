#include<iostream>

using namespace std;

int main()
{
    float kilometr, mile;

    cout << "This program converts kilometers to miles" << endl;
    cout << "====================================" << endl;

    cout << "Input the distance in kilometer : " << endl;
    cin >> kilometr;

    mile = kilometr * 0.6213712;

    cout << "your result is: " << mile;

    return 0;
}
