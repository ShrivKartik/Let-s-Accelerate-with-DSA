#include<iostream>
using namespace std;

bool isPalindrome(int n){

    int rev=0;
    int temp=n;
    while(n>0){
        int rem = n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(rev==temp) return true;

    else return false;
}

int main(){

    int n;
    cin>>n;

    cout<<isPalindrome(n)<<endl;
    return 0;
}