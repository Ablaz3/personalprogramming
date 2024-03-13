#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
    string mystr;
    int yearofbirth;
    int currentyear;

    cout << "What year were you born? ";
    getline (cin, mystr);
    stringstream(mystr) >> yearofbirth;
    cout << "What year is it currently? I seem to have forgotten. ";
    getline (cin, mystr);
    stringstream(mystr) >> currentyear;
    cout << "You turn " << currentyear-yearofbirth << " Years, in " << currentyear;
}