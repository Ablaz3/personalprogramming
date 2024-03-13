#include <iostream>
using namespace std;

void printarray(int arr[], int length)
{
    for (int n=0; n<length; n++)
    {
        cout << arr[n] << ' ';
    }
}


int main()
{
    int array1[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[]{10, 20, 30, 40, 50};
    int arrsize = sizeof(array1)/sizeof(array1[0]);
    printarray(array1, arrsize);
    cout << '\n';
    arrsize = sizeof(array2)/sizeof(array2[0]);
    printarray(array2, arrsize);
    return 0;
}