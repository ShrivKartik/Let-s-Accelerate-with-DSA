#include<iostream>
using namespace std;
int firstOcc(int arr[], int size, int x){
    int low=0, high=size-1;

    while(low<=high){

        int mid = (low+high)/2;

        if(arr[mid]<x)
        low = mid+1;

        else if(arr[mid]>x)
        high = mid-1;

        else{
            if(mid==0 || arr[mid-1]!=arr[mid])
            return mid;

            else 
            high=mid-1;
        }    
    }
    return -1;
}

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

int countOcc(int arr[], int size, int x){
    int first = firstOcc(arr, size, x);

    if(first==-1)
    return 0;

    else
    return (lastOcc(arr, size, x)+1-first);
}

int main(){

    int arr[]={10,20,20,20,30,30};
    int size = 6;
    int x = 30;

    cout<<countOcc(arr, size, x)<<endl;
    return 0;
}