#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "write the value of x: ";
    cin >> x;
    switch (x) 
    {
        case 1:
        cout << "x is equal to " << x << '\n';
        break;
        case 2:
        cout << "x is equal to " << x << '\n';
        break;
        case 3:
        cout << "x is equal to " << x << '\n';
        break;
        case 4:
        cout << "x is larger than 3" << '\n';
        break;
        default:
        cout << "error" << '\n';
    }
}