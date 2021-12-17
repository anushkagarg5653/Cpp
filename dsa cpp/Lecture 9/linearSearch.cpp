#include<iostream>
using namespace std;

bool Search(int a[],int n,int key){
    for(int i=0; i<5; i++){
        if(a[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int key;
    cin>>key;
    int a[5] = {3,5,7,9,-1};
    int found = Search(a, 5, 0);
    if(found){
        cout<<"key is present";
    }
    else{
        cout<<"key is not present";
    }
    return 0;
}