#include<iostream>
using namespace std;

int main(){
    
    int a[10];
    fill_n(a,10,9);
    for(int i=0;i<=10;i++){
        cout<<a[i];
    }
    return 0;
}