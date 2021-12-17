#include<iostream>
#include<climits>
using namespace std;

int getMax(int a[], int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

int getMin(int a[], int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Maximum number is:"<<getMax(a, n)<<endl;
    cout<<"Minimum number is:"<<getMin(a, n)<<endl;

    return 0;
}