#include <iostream>
using namespace std;

int main()
{
     bool a = !(5==5); // should be 0
     cout << a << endl;
     a = !(5==4); // should be 1
     cout << a << '\n';
     a = (5!=5) && (5==5); // should be 0
     cout << a << '\n';
     a = (5==5) && (5==5); // should be 1
     cout << a << '\n';
     a = (5!=5) || (5==5); // should be 1
     cout << a << '\n';
     a = (5==5) || (5==5); // should be 1
     cout << a << '\n';
     int b;
     ++b;
     cout << b << '\n';
     int c=52345325;
     cout << sizeof(c) << '\n';
     int d = 7/2;
     double f = 5.3 + d;
     cout << f << '\n';
     double e = 5==3 ? 1 : 2;
     cout << e << '\n'; // variabel f er tatt
     cout << "line separation" << '\n';



     return 0;
}