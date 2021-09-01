#include<iostream>

using namespace std;

string reverse(string s){
    int n = s.length();
    if(n==0){
        return "";
    }
    int start = 0, end = n-1;
    while(start<end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}

int main(){
    string s;
    cin>>s;
    cout<<reverse(s);
    return 0;
}