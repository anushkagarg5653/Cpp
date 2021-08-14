#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,temp=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        temp = arr[i];
        arr[i] = arr[n-1];
        arr[n-1] = temp;
        cout<<arr[i]<<" ";
    }
    
    return 0;
}