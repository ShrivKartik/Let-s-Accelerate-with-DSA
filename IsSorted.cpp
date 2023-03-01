#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    for(int i=1; i<size; i++){
        if(arr[i]<arr[i-1])
        return false;
    }

    return true;
}

int main(){

    int arr[]={34, 67, 89, 98, 100};
    int size = 5;
    cout<<isSorted(arr, size)<<endl;
    return 0;
}
