#include <iostream>   
#include <thread>         
#include <chrono>  
using namespace std;

int main()
{
    cout << "Countdown:" << '\n';
    int n=10;
    while (n>0)
    {
        cout << n << endl;
        std::this_thread::sleep_for (chrono::seconds(1));
        --n;
        if (n<1)
            cout << "Liftoff!";
    }
    
}