#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[i]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]!=b[i]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }

    return 0;
}