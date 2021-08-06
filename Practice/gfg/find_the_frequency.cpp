#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int count = 0;
    for(int i=1; i<n ;i++){
        if(arr[i] == arr[i-1])
            count++;
        else
            break;
    }

    cout<<count+1;
    return 0;
}