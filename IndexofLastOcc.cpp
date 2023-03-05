#include<iostream>
using namespace std;

int lastOcc(int arr[], int size, int x){
    int low=0, high=size-1;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]>x)
        high = mid-1;

        else if(arr[mid]<x)
        low = mid+1;

        else{
            if(mid==size-1 || arr[mid]!=arr[mid+1])
            return mid;

            else
            low=mid+1;
        }
    }
}

int main(){

    int arr[]={10,15,20,20,40};
    int size = 5;
    int x = 20;

    cout<<lastOcc(arr,size,x)<<endl;
    return 0;
}