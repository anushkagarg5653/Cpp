#include<vector>
using namespace std;

void SelectionSort(vector<int>& arr, int n){
    for(int i=0; i<n-1; i++){
        int minIndx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndx])
                minIndx = j;
        }
        swap(arr[minIndx], arr[i]);
    }
}

