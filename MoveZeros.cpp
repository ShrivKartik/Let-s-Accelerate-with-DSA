#include<iostream>
using namespace std;

void moveZeros(int arr[], int size){
    int count = 0;
    for(int i=0; i<size; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main(){

    int arr[]={10, 8, 0, 12, 0, 0};
    int size = 6;

    moveZeros(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
