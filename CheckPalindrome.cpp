#include<iostream>
using namespace std;

bool isPalindrome(string &str){
    int begin = 0;
    int end = str.length()-1;

    while(begin<end){
        if(str[begin++]!=str[end--])
        return false;
    }

    return true;
}

int main(){

    string str = "ABCDCBA";
    cout<<isPalindrome(str)<<endl;;
    return 0;
}