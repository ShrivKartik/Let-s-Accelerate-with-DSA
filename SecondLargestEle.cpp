#include<iostream>
using namespace std;

int secondLargest(int arr[], int size){
    int res=-1, largest=0;
    for(int i=1; i<size; i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }

        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res])
            res=i;
        }
    }
    return res;
}

int main(){
    int arr[]={5,20,12,20,8};
    int size=5;

    int ans = secondLargest(arr,size);
    cout<<arr[ans]<<endl;

    return 0;
}
