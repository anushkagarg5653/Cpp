#include<iostream>
using namespace std;

void altSwap(int a[], int n){
    for(int i=0;i<n; i+=2){
        if(i+1<n){
            swap(a[i],a[i+1]);
        }
    }
}
int printArray(int a[], int n){
    for(int i=0;i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[5] = {4,2,9,1,-5}; // 2 4 1 9 -5
    int b[8] = {11,3,7,5,1,17,9,10}; 

    altSwap(a,5);
    altSwap(b,8);

    printArray(a,5);
    printArray(b,8);
    return 0;
}