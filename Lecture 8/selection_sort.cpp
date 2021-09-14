#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;


    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i =0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp; 
            }
        }
    }
    for(int i =0; i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
// time complexity : O(n^2)