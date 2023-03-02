#include<iostream>
using namespace std;

bool isSubsequence(string &s1, string &s2, int n, int m){
    if(n<m)
    return false;

    int j=0; 
    for(int i=0; i<n&&j<m; i++){
        if(s1[i]==s2[j])
        j++;
    }

    return (j==m);
}

int main(){

    string s1 = "ABCDEF";
    string s2 = "ADE";
    cout<<isSubsequence(s1, s2, s1.length(), s2.length())<<endl;
    return 0;
}