#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    char ch  = 'A';
    while(row<=n){
        int col = 1;
        int count=0;
        while(col<=row){
            cout<<ch;
            count++;
            ch++;
            col++;
            
        }
        cout<<endl;
        row++;
    }
    return 0;
}