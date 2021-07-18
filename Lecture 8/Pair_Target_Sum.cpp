#include<iostream>
using namespace std;

bool pairSum(int arr[], int n, int k){
    int low =0;
    int high = n-1;

    while(low<high){
        if(arr[low]+arr[high] == k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high] > k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
    }

int main(){

    // int arr[] = {2,4,7,14,16,20,21};
    // int k=31;
    int n;
    int arr[n];
    int k;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>k;

    cout<<pairSum(arr,n,k)<<endl;
    
    return 0;
}


