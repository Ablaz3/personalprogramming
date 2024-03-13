#include <iostream>
using namespace std;

int main () 
{
    int a, b, c, d, e, f;
    a = b = c = d = e = f =1;
    a += b;
    cout << (a == (b += --a) ? ("They are alike") : ("they are not alike")) << endl; 
    cout << a << endl;
    
}