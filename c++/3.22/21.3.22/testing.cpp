#include <iostream>
using namespace std;

int main ()
{
    string a, b;
    a = "Input a string: ";
    cout << a;
    getline (cin, b);
    cout << "You just wrote: " << b << endl;
}