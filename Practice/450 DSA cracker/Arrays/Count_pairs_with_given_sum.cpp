#include<iostream>
using namespace std;

int main(){
    int n,k;
    int a[n];
    cin>>n>>k;
    int count = 0;

    for(int i=0;i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=1; j<n; j++){
            if(a[i]+a[j]==k){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}