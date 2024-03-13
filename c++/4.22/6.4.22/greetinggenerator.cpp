// greeting generator 
// velge mellom greetings hei, hallo, velkommen, og hade
// spesifisere navnet til personen

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "This machine will generate a greeting" << '\n' << R"(Specify greeting. 1 for "hello", 2 for "hey", 3 for "greetings": )";
    int a;
    cin >> a;
    cin.sync(); // if cin.sync() is not used, the program doesnt wait for input on the second line.
    cout <<  "Specify your name: ";
    string b;
    getline (cin, b);
    string mystr;
    switch (a)
    {
        case 1:
        mystr = "hello ";
        break;
        case 2:
        mystr = "hey ";
        break;
        case 3:
        mystr = "greetings ";
        break;
        default:
        cout << "error" << endl;
    }
    cout << mystr << b << endl;
}