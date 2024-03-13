#include <iostream>
using namespace std;
#include <cmath>

const double pi = 3.14;
const double r = 3e3;
const char newline = '\n';

int main()
{
    double circumference=pow(r, 2)*pi;
    cout << circumference << newline;
    cout << "er omkretsen til en sirkel med radius=r";
    return 0;
}