#include<iostream>
using namespace std;

bool isPossibleSol(int arr[], int n, int m, int mid){
    int pageSum = 0;
    int studentcount = 1;

    for(int i = 0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i]; 
        }
        else{
            studentcount++;
            if(studentcount > m || arr[i] > pageSum){
                return false;
            }
            pageSum = 0;
            pageSum += arr[i];
        }
        return true;
    }
}

int bookAllocation(int arr[], int n, int m){
    int s = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i]; 
    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(isPossibleSol(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    
    return 0;
}