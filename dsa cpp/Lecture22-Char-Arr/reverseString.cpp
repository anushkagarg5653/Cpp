#include<iostream>
using namespace std;

int reverse(char a[], int n){
    int s =0;
    int e = n-1;
    while(s<e){
        swap(a[s++], a[e--]);
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[10];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Your name is"<<name<<endl;

    // cout<<"Length is"<<getLength(name)<<endl;
    int n = getLength(name);
    reverse(name, n);
    cout<<name;
    return 0;
}