#include<iostream>
using namespace std;

void mergeFunction(int arr[], int low, int mid, int high){
    int n1=mid-low+1;
    int n2=high-mid;

    int left[n1], right[n2];

    for(int i=0; i<n1; i++){
        left[i]=arr[low+i];
    }

    for(int i=0; i<n2; i++){
        right[i]=arr[n1+i];
    }

    int i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(left[i]<right[j]){
        arr[k]=left[i];
        k++;
        i++;
    }

    if(left[i]>right[j]){
        arr[k]=right[j];
        k++;
        j++;
    }

    else{
        arr[k]=left[i];
        i++;
        j++;
        k++;
    }

    }

    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=right[i];
        j++;
        k++;
    }

}

int main(){

    int arr[]={23,45,67,10,12,32};
    int low=0;
    int mid=2;
    int high=5;

    mergeFunction(arr,low,mid,high);

    for(int i=0; i<high; i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}