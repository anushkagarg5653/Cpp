#include<iostream>
using namespace std;

int reverse(int a[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

int printArray(int a[], int n){
    for(int i=0;i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[5] = {4,6,1,9,10};
    int b[6] = {-5,2,3,9,11,3};

    reverse(a, 5);
    reverse(b, 6);

    printArray(a, 5);    
    printArray(b, 6);    

    return 0;
}