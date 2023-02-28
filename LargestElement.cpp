#include<iostream>
using namespace std;

int largest(int arr[], int size){
    int max = 0;
    for(int i=0; i<size; i++){
        if(arr[max]<arr[i])
        max = i;
    } 
    return max;
}

int main(){
    int arr[]={23, 12, 11, 56, 89};
    int size = 5;

    int res = largest(arr, size); 
    cout<<arr[res]<<endl;

    return 0;
}