#include<iostream>
using namespace std;
const int CHAR = 256;

bool areAnagram(string &s1, string &s2){

    int count[CHAR]={0};
    if(s1.length()!=s2.length())
    return false;

    for(int i=0; i<s1.length(); i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for(int i=0; i<CHAR; i++){
        if(count[i]!=0)
        return false;
    }

    return true;
}

int main(){

    string s1 = "abaac";
    string s2 = "aacba";

    cout<<areAnagram(s1,s2)<<endl;

    
    return 0;
}