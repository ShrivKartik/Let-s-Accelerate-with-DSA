#include<iostream>
using namespace std;

void kthBit(int n, int k){

    if(n & (1<<(k-1))!=0)
    cout<<"YES"<<endl;

    else
    cout<<"NO"<<endl;

}

int main(){
    int n;
    cin>>n;

    int k;
    cin>>k;

    kthBit(n,k);
}