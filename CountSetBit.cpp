#include<iostream>
using namespace std;

int countSetBit(int n){

    int count = 0;

    while(n>0){
        n=(n&(n-1));
        count++;
    }

    return count;

}

int main(){

    int n;
    cin>>n;

    int res = countSetBit(n);
    cout<<res<<endl;
    return 0;
}
