#include<iostream>
using namespace std;

void merge2Array(int arr1[], int m, int arr2[], int n){

    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j])
        cout<<arr1[i++]<<" ";

        else
        cout<<arr2[j++]<<" ";
    }

    while(i<m)
    cout<<arr1[i++]<<" ";

    while(j<n)
    cout<<arr2[j++]<<" ";
}

int main(){
    int arr1[]={23,45,67,89};
    int m = 4;

    int arr2[]={12,34,56,78,89};
    int n = 5;

    merge2Array(arr1,m,arr2,n);
}