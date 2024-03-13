#include <iostream>
using namespace std;

int main ()
{
    cout << R"***(Write a measurement in the format "(temperature) F":)***";
    double a, b;
    char c;
    cin >> a >> c;
    b = ((a-32)*5)/9;
    cout << a << "F equals " << b << "C";
    cout << '\n' << c;
}