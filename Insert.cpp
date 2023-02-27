#include<iostream>
using namespace std;

int insert(int arr[] ,int size, int cap, int x, int pos){
    if(size==cap)
    return size;

    int idx = pos-1;

    for(int i=size-1; i>=idx; i--){
        arr[i+1] = arr[i];
    }

    arr[idx] = x;

    return size+1;
}

int main(){
    int arr[]={5,10,20};
    int size = 3;
    int cap = 5;
    int x = 7;
    int pos = 2;

    int newIdx = insert(arr, size, cap, x, pos);

    for(int i=0; i<newIdx; i++){
        cout<<arr[i]<<" ";
    }
}