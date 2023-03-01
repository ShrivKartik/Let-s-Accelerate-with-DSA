#include<iostream>
using namespace std;

int remDups(int arr[], int size){
    int res=1;
    for(int i=1; i<size; i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;

}

int main(){
    int arr[]={10, 20, 20, 30, 30, 30};
    int size=6;

    int newSize = remDups(arr, size);

    for(int i=0; i<newSize; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
