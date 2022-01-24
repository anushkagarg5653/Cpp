#include<iostream>
#include<string>
using namespace std;

string remove(string &str, string part){
    while(str.length()!=0 && str.find(part) < str.length()){
        str.erase(str.find(part), part.length());
    }
    return str;
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    string a = remove(s,part);
    cout<<a<<endl;
    return 0;
}