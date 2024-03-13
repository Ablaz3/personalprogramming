#include <iostream>

using namespace std;

int main ()
{
    string mystr;
    cout << "What's your name? " << '\n';
    getline (cin, mystr);
    cout << "Hello " << mystr << ", Have a good day";
    return 0;

}