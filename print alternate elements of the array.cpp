// dsa
// cpp program to print the alternate elements of the array

#include <iostream>

using namespace std;

int main()
{
    // cout<<"Hello World";
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i += 2)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
