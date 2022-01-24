#include<iostream>
#include<string>
using namespace std;

string replace(string &str){
    string temp = "";
    for(int i=0;i<str.length();i++){
            if(str[i] == ' '){
                temp.push_back('@');
                temp.push_back('4');
                temp.push_back('0');
            }
            else{
                temp.push_back(str[i]);
            }
    }
    return temp;
}

int main(){
    string s = "Hello World";
    string a = replace(s);
    cout<<a<<endl;
    return 0;
}

// do without creating temp string