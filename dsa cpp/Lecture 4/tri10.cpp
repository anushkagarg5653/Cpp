#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){

        int col = 1;
        while(col<row){
            cout<<" ";
            col++;
        }
       while(col<=n){
           cout<<row;
           col++;
       }

        cout<<endl;
        row++;
    }
    return 0;
}