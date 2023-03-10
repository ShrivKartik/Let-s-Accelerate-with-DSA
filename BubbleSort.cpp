#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    bool swapped=false;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
}

int main(){

    int arr[]={2,10,8,7};
    int size = 4;

    bubbleSort(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}