#include<iostream>
using namespace std;

void reverse(string& name, int i,int e){
    //base
    if(i>e)
        return;
    swap(name[i], name[e]);
    i++;
    e--;
    //recursive call
    reverse(name,i,e);
}

int main(){
    string name = "Anushka";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}