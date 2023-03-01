#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int low=0, high=size-1;

    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
int main(){

    int arr[]={12, 76, 23, 43, 10};
    int size = 5;
    reverseArray(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
