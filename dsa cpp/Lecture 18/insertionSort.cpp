#include<iostream>
using namespace std;

void insertion(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
               
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
       
    }
}

int main(){
    int arr[5] = {3,2,6,4,8};
    // insertion(arr, 5);
    for(int i=0; i<5; i++){
        cout<<insertion(arr, 5) <<" ";
    }
    return 0;
}