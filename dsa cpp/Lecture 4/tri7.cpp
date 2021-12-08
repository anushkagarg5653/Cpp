#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        // space print
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }
        //tri 1 print
        int col=1;
        while(col<=row){
            cout<<col;
            col++;
        }

        // tri 2 print
        int start =row-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}