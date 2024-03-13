#include <iostream>
using namespace std;

int main ()
{
    cout << "Write a measurement in meters:";
    float a, b;
    cin >> a;
    cout << a << " meters is the same as " << a*0.3048 << " feet.";
}