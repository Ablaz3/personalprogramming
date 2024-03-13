#include <iostream>
using namespace std;

template<class x, class y>
float multiply(x a, y b)
{
    return a*b;
}

int main()
{
    int a, b;
    float c, d, e;
    cout << "this program will multiply two numbers. (can be decimal)" << '\n' << "input the first number: ";
    cin >> c;
    cout << "input the second number: ";
    cin >> d;
    
    cout << multiply<float, float>(c, d) << " is the result of " << c << " and " << d << " multiplied.";
    return 0;
}