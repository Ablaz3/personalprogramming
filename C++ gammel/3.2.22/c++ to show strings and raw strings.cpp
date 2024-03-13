// C++ program to demonstrate working of raw string literal
#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    // A Normal string
    string string1 = "Geeks.\nFor.\nGeeks.\n";
 
    // A Raw string
    const string string2 = R"foo(Geeks.\nFor.\nGeeks.\n)foo";
 
    cout << string1 << endl;
 
    cout << string2 << endl;
 
    return 0;
}