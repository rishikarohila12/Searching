#include<iostream>
using namespace std;
int binarySearch(int arr[],int lo,int hi, int target)
{
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            return binarySearch(arr,mid+1,hi,target);
        }
        else //if(arr[mid]>target)
        {
            return binarySearch(arr,lo,mid-1,target);
        }
        return -1;
    }
}
int main()
{
    int arr[]={10,20,50,80,90,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=50;
    int result=binarySearch(arr,0,n-1,target);
    if(result==-1)
    {
        cout<<"Element not found in the array";
    }
    else{
        cout<<"Element "<<arr[result] <<" has found ar index "<<result;
    }
}