#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
    int count = 1;
    for(int i=0; i<n; i++){
        if(a[i] == count)
            count++;
        else
            break;
    }
    cout<<count;
    return 0;
}