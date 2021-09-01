#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// iterative method


// string Reverse(string s){
//     string rev = "";
//     for(int i = s.length()-1; i>=0; i--){
//          rev += s[i];
//     }
//     return rev;  
// }

// Recursive method
string reverse(string s){
    if(s == "")
        return "";
    int n = s.length()-1;
    return s[n] + reverse(s.substr(0,n));
}

int main(){
    string s = "orange";
    // cin>>s;   
    cout<<reverse(s);
    return 0;
}


