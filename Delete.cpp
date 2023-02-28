#include<iostream>
using namespace std;

int deleteEle(int arr[], int size, int x){
    int i;
    for(i=0; i<size; i++){
        if(arr[i]==x)
        break;
    }
    if(i==size)
    return size;

    for(int j=i; j<size-1; j++){
        arr[j]=arr[j+1];
    }

    return size-1;
}

int main(){

    int arr[]={3, 8, 12, 5, 6};
    int size = 5;
    int x = 12;
    int newSize = deleteEle(arr, size, x);

    for(int i=0; i<newSize; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}