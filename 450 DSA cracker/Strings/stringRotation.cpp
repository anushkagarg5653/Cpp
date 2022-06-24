#include<iostream>
using namespace std;

string Rotation(string str, string str2){
    if(str.length() != str2.length())
        cout<<"false"<<endl;
    else{
        if(str.find(str2) != string::npos)
            cout<<"found"<<endl;
        else
            cout<<"no"<<endl;
    }
}

int main(){
    int s1 = "Anushka";
    int s2 = "Anushka";

    cout<<Rotation(s1, s2);
    return 0;
}