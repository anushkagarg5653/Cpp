#include<iostream>
using namespace std;

void merge(int arr[], int s,int e){
    int mid = s + (e-s)/2;
    int len1 = mid - s +1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrindex = s;
    for(int i=0;i<len1;i++){
        first[i] = arr[mainArrindex++];
    }
    mainArrindex = mid+1;
    for(int i=0;i<len2;i++){
        second[i] = arr[mainArrindex++];
    }
    // merge them
    int index1 =0; 
    int index2 = 0;
    mainArrindex = s;

    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[mainArrindex++] = first[index1++];
        }
        else{
            arr[mainArrindex++] = second[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrindex++] = first[index1++];
    }
    while(index2<len2){
        arr[mainArrindex++] = second[index2++];
    }
    delete []first;
    delete []second;
}

void mergeSort(int arr[], int s,int e){
    //base case
    if(s>=e)
        return;
    
    int mid = s + (e-s)/2;

    // left part sort
    mergeSort(arr,s,mid);

    //right part
    mergeSort(arr,mid+1, e);

    //merge
    merge(arr,s,e);
}

int main(){
    int arr[5] = {5,2,7,1,3};
    mergeSort(arr,0,4);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}