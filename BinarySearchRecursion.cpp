#include<iostream>
using namespace std;

int binarySearch(int arr[], int x, int size, int low , int high){

    if(low>high)
    return -1;

    int mid = (low+high)/2;

    if(arr[mid]==x)
    return mid;

    else if(arr[mid]<x)
    binarySearch(arr, x, size, mid+1, high);

    else
    binarySearch(arr, x, size, low, mid-1);
}
int main(){

    int arr[]={4, 7, 9, 12, 34, 56, 78 ,89};
    int x = 78;
    int size = 8;
    int low = 0, high = size-1;

    int res = binarySearch(arr, x, size, low, high);

    if(res==-1)
    cout<<"Element not found"<<endl;

    cout<<res<<endl;

    return 0;
}