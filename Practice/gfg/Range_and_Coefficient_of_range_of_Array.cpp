#include<iostream>
#include<numeric>
using namespace std;

float getMin(float arr[], int n){

    float res = arr[0];
    for(int i=0; i<n; i++)
        res = min(res, arr[i]);
    return res;
    
}
float getMax(float arr[], int n){
    float res = arr[0];
    for(int i=0; i<n; i++)
        res = max(res, arr[i]);
    return res;
    
}

void rangeCoff(float arr[], int n){
    float max = getMax(arr,n);
    float min = getMin(arr, n);
    float range = max - min;
    float coeff = range/(max+min);
    cout<<"range "<<range<<" "<<"coefficient "<<coeff;
}



int main(){
    float arr[] = {5, 10, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    rangeCoff(arr,n);
    return 0;
}