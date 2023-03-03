#include<iostream>
using namespace std;

int bSearch(int arr[], int size, int x){
    int low = 0; 
    int high = size-1;

    while(low<=high){

    int mid = (low+high)/2;

    if(arr[mid]==x)
    return mid;

    else if(arr[mid]>x)
    high = mid-1;

    else 
    low = mid+1;
}
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size = 7;
    int x = 20; 

    cout<<bSearch(arr,size,x)<<endl;
    return 0;
}