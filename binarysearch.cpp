#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        if(arr[mid]>x)
        {
            high = mid-1;
        }
        if(arr[mid]<x)
        {
            low = mid+1;
        }
    }
    return -1;
}
int main(){
int n,x;
cout<<"Enter the size of the array: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array: "<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"Enter the required element needed to be searched: "<<endl;
cin>>x;
cout<<search(arr,n,x);
return 0;
}
