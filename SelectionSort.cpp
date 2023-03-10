#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_ind=i;
        for(int j=i+1; j<n; j++){
            if(arr[min_ind]>arr[j]){
                min_ind=j;
            }
        }
        swap(arr[i],arr[min_ind]);
    }
}

int main(){

    int arr[]={10,5,8,20,18};
    int size = 5;

    selectionSort(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}