#include<iostream>
using namespace std;

int search(int arr[], int size, int x){
    for(int i=0; i<size; i++){
        if(arr[i]==x)
        return i;
    }

    return -1;
}

int main(){
    int arr[]={20,5,7,25};
    int size = 5;
    int x;
    cin>>x;

    int idx = search(arr,size,x);
    if(idx==-1)
    cout<<"Element not found"<<endl;

    cout<<idx<<endl;
}