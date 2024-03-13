#include <iostream>
using namespace std;
#include <string>
#include <sstream>

int main()
{
    for (int x=10;; --x)
    {
        cout << x << '\n';
        if (x==0)
        {
            cout << "liftoff!" << '\n';
            break;
            goto point1;
        }
    }
    point1:
    int x;
    string numberbetweenoneandfive;
    cout << "Write a number between 1, and 5 for x" << '\n';
    getline(cin,numberbetweenoneandfive);
    stringstream(numberbetweenoneandfive) >> x;
    switch(x)
    {
        case 5:
        cout << "x  is bigger than 4" << '\n';
        case 4:
        cout << "x  is bigger than 3" << '\n';
        case 3:
        cout << "x  is bigger than 2" << '\n';
        case 2:
        cout << "x  is bigger than 1" << '\n';
        case 1:
        break;
        cout << "x  is equal to 1" << '\n';
        break;
        default:
        cout << "error, wrong number entered." << '\n';
    }
}