#include <iostream>
#include <thread>
#include <chrono>
#include <sstream>
using namespace std;

int main ()
{
    double a, b, c, d;
    a = b = c = d =1;
    string timerequested;
    cout << "Enter the length of the countdown: ";
    getline (cin, timerequested);

    
    stringstream(timerequested) >> b;

    cout << "Countdown: " << '\n';
    while (b >= c)
    {
        cout << b-- << '\n';
        std::this_thread::sleep_for (std::chrono::seconds(1));
    }
    cout << "Liftoff!!";
}