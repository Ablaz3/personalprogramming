#include <iostream>
using namespace std;

int main ()
{
  int n=10;
  label:
  if (n==1)
  {
    cout << n << '\n' << "liftoff!!";
    n=-1;
  }
  for (; n>0 ; --n)
  {
    cout << n << ", " << '\n';
    if (n==1) goto label;
    } 
}