#include <iostream>
using namespace std;
#include <string>


float multiply(float a, float b);

template<class a, int b>
void multiplynontypetemplate(a& val)
{
    val*=b;
}


void helloname()
{
    string a;
    cout << "enter your name: ";
    cin.sync();
    getline (cin, a);
    cout << "Hello, " << a << '\n';
}


int main ()
{
    float multiplyvalue1, multiplyvalue2;
    cout << "Enter two values you would like to mutiply, separated by an enter press" << '\n';
    cin.sync();
    cin >> multiplyvalue1;
    cin >> multiplyvalue2;
    cout << "the two numbers you entered multiplied are equal to: " << multiply(multiplyvalue1, multiplyvalue2) << '\n';
    cout << "to multiply by 2, enter a number, press enter, enter 0, press enter. To multiply by 3, enter 0, press enter once, enter a number, then press enter again." << '\n';
    cin >> multiplyvalue1;
    cin.sync();
    cin >> multiplyvalue2;
    if (multiplyvalue1==0)
    {
        multiplynontypetemplate<float,3>(multiplyvalue2);
        cout << "The number you entered was multiplied by 3, resulting in: " << multiplyvalue2 << '\n';
    }
    else if (multiplyvalue2==0)
    {
        multiplynontypetemplate<float,3>(multiplyvalue1);
        cout << "The number you entered was multiplied by 2, resulting in: " << multiplyvalue1 << '\n';
    }
    else
    {
        cout << "error" << endl;
    }
    helloname();

}


float multiply(float a, float b)
{
    return a*b;
}