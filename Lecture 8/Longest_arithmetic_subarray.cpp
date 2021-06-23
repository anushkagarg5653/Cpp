#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int j = 2;
    int pd = arr[1] - arr[0];
    int ans = 2;
    int current = 2;

    while(j<n){
        if(pd == arr[j] - arr[j-1]){
            current++;
        }
        else{
            pd = arr[j] - arr[j-1];
            current = 2;
        }
        ans = max(ans, current);
        j++;
    }
    cout<<ans;
    return 0;
}