#include <iostream>
using namespace std;

namespace first
{
    int x=1;
    int y=2;
}
namespace second
{
    float x = 1.5;
    float y = 2.5;
}
int main(){
{
    using namespace first;
    cout << x+y << '\n';
}
{
using namespace second;
    cout << x+y << '\n';
    cout << x+first::y << '\n';
}
{
    cout << first::x+first::y;
}
}
