#include<iostream>
using namespace std;

void leaders(int arr[], int n){
    int curr_ldr = arr[n-1];
    cout<<curr_ldr<<" ";

    for(int i=n-2; i>=0; i--){
        if(arr[i]>curr_ldr){
        curr_ldr=arr[i];
        cout<<curr_ldr<<" ";
    }
    }
}

int main(){

    int arr[]={7,10,4,3,6,5,2};
    int size = 7;

    leaders(arr,size);
    return 0;
}