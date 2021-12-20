#include<iostream>
using namespace std;

int printA(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void sortOne(int a[], int n){
    int left =0; int right = n-1;
    while(left<right){
        while(a[left] == 0 && left<right){
            left ++;
        }
        while(a[right] ==1 && left<right){
            right--;
        }
        if(left<right){
            swap(a[left], a[right]);
            left++;
            right--;
        }
    }
};


int main(){
    int a[8] = {1,1,0,0,0,0,0,1};
    sortOne(a,8);
    printA(a,8);
    return 0;
}