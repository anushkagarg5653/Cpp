#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the dimmension of array : ";
    cin>>n>>m;

    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    int x;
    cout<<"Enter the element to be found: ";
    cin>>x;
    
    bool flag = 0;

    for(int i=0; i<n; i++){
        for(int j=0; i<m; i++){
            if(a[i][j] == x){
                cout<<"Elemnt is: "<<i<<" "<<j<<endl;
                flag = 1;
            }
        }
    }

    if(flag){
        cout<<"Element found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}