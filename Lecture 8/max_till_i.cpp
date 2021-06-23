#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int n;
    int mx = INT_MIN;
    cout<<"Enter the size of array : ";
    cin>>n;


    cout<<"Enter the Elements : ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        cout<<mx<<" ";
    }

    return 0;
}