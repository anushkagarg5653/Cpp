#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
            count++;
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s;
    int j = e;
    while(i<pivotIndex && j>pivotIndex){

        if(arr[i] <= pivot)
            i++;
        if(arr[j] > pivot)
            j--;
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    } 
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e)
        return ;
    
    // partion
    int p = partition(arr,s,e);

    // right and left part
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

    
}

int main(){
    int arr[7] = {8,3,1,5,2,10,6};
    quickSort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<< " ";
    }cout<<endl;
    return 0;
}