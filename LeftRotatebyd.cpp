#include<iostream>
using namespace std;

void reverse(int arr[], int low, int high){
    while(low<high){
        swap(arr[low++],arr[high--]);
    }
}

void leftRotate(int arr[], int size, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,size-1);
    reverse(arr,0,size-1);
}

int main(){

    int arr[]={1,2,3,4,5};
    int size=5;
    int d=2;

    leftRotate(arr,size,d);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
