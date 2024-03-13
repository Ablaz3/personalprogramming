#include <iostream>
using namespace std;

int main ()
{
    string a;
    string b;
    a = "Input a number: ";
    cout << a;
    getline (cin, b);
    cout << "You just wrote: " << b << endl;
}

// getline only works with strings