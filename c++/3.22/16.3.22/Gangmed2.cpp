#include <iostream>
using namespace std;


int main ()
{
    cout << "Dette programmet vill legge sammen 2 tall" << '\n';
    string string1 = "Skriv et desimaltall: ";
    string string2 = "Skriv et desimaltall til: ";
    double a, b;
    cout << string1;
    cin >> a;
    cout << string2;
    cin >> b;
    double c;
    c = a+b;
    cout << c;
    return 0;
}
