#include <iostream>
using namespace std;

const double pi = 3.14;
const char newline = '\n';
double r = 5.0;
double circle;
const char* s1 = R"foo("Hello world")foo";

int main ()
{
    circle = r * pi * 2;
    cout << circle;
    cout << newline;
    cout << "that is the circumference of the circle";
    cout << s1;
}