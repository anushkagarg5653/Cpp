#include<iostream>
using namespace std;

int binarySearch(int arr[],int s,int e, int k){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;

    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        if (arr[mid]>k){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int arr[5] = {7,9,1,2,3};
    int key ;
    cin>>key;
    int pivot = getPivot(arr, 5);
    if(key>= arr[pivot] && key<=5){
        return binarySearch(arr, pivot, 5, key);
    }
    else{
        return binarySearch(arr, 0, pivot -1,key);
    }
    
    return 0;
}