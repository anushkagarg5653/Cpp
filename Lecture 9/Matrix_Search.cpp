#include<iostream>
using namespace std;

int main(){
    int n,m;
    int value;
    cin>>n>>m>>value;
    int a[n][m];
    bool target;
    

    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }


    int r = 0, c = n -1;
    while(r<m && c>=0){
        if(a[r][c] == value){
            target = true;
        }
        if(a[r][c] > value){
            c--;
        }
        else{
            r++;
        }
    }

    if(target){
        cout<<"Element is found";
    }
    else{
        cout<<"Not found";
    }

    return 0;
}