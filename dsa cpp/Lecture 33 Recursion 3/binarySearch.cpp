#include<iostream>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key){
    //base condition -- not found
    if(start>end)
        return false;
    int mid = start + (end-start)/2;
    // found
    if(arr[mid] == key)
        return true;

    //check
    if(arr[mid] < key)
       return binarySearch(arr, mid+1, end,key);
    else
       return binarySearch(arr, start, mid-1, key);
}

int main(){
    int arr[6] = {3,0,5,1,7};
    int size = 6;
    int key = 7;
    cout<<"present or not"<<binarySearch(arr,0,5,key)<<endl;
    return 0;
}