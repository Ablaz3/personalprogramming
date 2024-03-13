#include <iostream>
using namespace std;

int main()
{
    int b;
    int array1[6] {1, 10, 100, 1000, 10000};
    for (int a : array1)
    {
        b += a;
    }
    cout << b << endl;
    cout << array1[2] << endl;
    cout << array1[5] << '\n';
}