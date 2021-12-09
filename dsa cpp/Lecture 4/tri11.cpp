#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    int count = 1;
    while(row<=n){

        int col = 1;
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }
       while(col<=row){
           cout<<count;
           col++;
           count++;
       }

        cout<<endl;
        row++;
    }
    return 0;
}