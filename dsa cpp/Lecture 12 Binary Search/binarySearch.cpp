#include<iostream>
using namespace std;

int binarySearch(int a[], int n,int key){
    int start = 0;
    int end = n-1;
    // int mid = (start+end)/2;
    // optimise
    int mid = start + (end-start)/2;
    while(start<=end){
        if(key==a[mid]){
            return mid;
        }
        else if(key>a[mid]){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int even[10] = {2,4,6,8,10,12,14,18,20,22};
    int odd[5] = {1,5,9,7,3};
    int oddIndex = binarySearch(odd,5,5);
    cout<<"index is " <<oddIndex;
    return 0;
}