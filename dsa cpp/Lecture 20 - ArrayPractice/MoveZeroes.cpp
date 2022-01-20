#include<iostream>
using namespace std;

void MoveZeroes(int arr[], int n){
    int i =0; 
    for(int j=0;j<n; j++){
        if(arr[j]!= 0){
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

void print(int arr[], int n){
    for(int i=0;i <n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5] = {1,0,4,5,0};
    MoveZeroes(arr,5);
    print(arr,5);
    return 0;
}