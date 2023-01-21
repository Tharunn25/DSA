// cpp program to find the first occurence of the element in a array containing duplicate elements
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1; // to find the first occurence we are just creating a variable known as ans and assigning it to -1
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {   
            ans = mid;               // if we found the element we just storing it into the ans   
            high = mid-1;            // since the first occurence can't be after the mid so we r only searching in 
            continue;                // right side of the element so high = mid-1
        }
        if (arr[mid] > x)
            high = mid - 1;
        if (arr[mid] < x)
            low = mid + 1;
    }
    return ans;
}
int main()
{
    int n, x;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the required element needed to be searched: " << endl;
    cin >> x;
    cout << search(arr, n, x);
    return 0;
}
