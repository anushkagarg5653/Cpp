#include<iostream>
using namespace std;

struct MINMAX{
    int min;
    int max;
};

struct MINMAX getMinMax(int arr[], int low, int high){
    struct MINMAX minmax,left, right;
    int mid;

    if(low==high){
        minmax.min = arr[low];
        minmax.max = arr[low];
        return minmax;
    }
    
    if(high == low+1){
        if(arr[low]>arr[high]){
            minmax.min = arr[high];
            minmax.max = arr[low];
        }
        else {
            minmax.min = arr[low];
            minmax.max = arr[high];
        }
        return minmax;
    }
    mid = (low+high)/2;
    left = getMinMax(arr, low, mid);
    right = getMinMax(arr, mid+1, high);

    if(left.min < right.min){
        minmax.min = left.min;
    }
    else{
        minmax.min = right.min;
    }

    if(left.max < right.max){
        minmax.max = right.max;
    }
    else{
        minmax.max = left.max;
    }

}



int main(){
    
    return 0;
}