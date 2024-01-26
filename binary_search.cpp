#include <iostream>
using namespace std;
int traverse(int arr[], int n,int target)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}
int binary_search(int arr[],int n,int target)
{
    int lo=0;
    int hi=n-1;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(arr[mid]==target)
        {
            cout<<"Element "<<arr[mid]<<" found at index : "<<mid;
            break;
        }
        else if(arr[mid]<target)
        {
            lo=mid+1;
        }
        else if(arr[mid]>target){
            hi=mid-1;
        }
        else{
            cout<<"Element not Found";

        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout<<"Elements are : ";
    traverse(arr, n,target);
    cout<<"Element to be search: ";
    cin>>target;
    binary_search(arr,n,target);
    // traverse(arr,n);
}