#include<iostream>
using namespace std;

int FirstOcc(int a[], int n, int key){
    int start = 0;
    int end = n -1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
    if(key==a[mid]){
        ans = mid;
        end = mid - 1;
    }
    else if(key>a[mid]){

        start = mid + 1;
    }
    else if(key<a[mid]) {
        end = mid -1;
    }
    mid = start + (end-start)/2;
}
    return ans;
}

int lasttOcc(int a[], int n, int key){
    int start = 0;
    int end = n -1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
    if(key==a[mid]){
        ans = mid;
        start = mid + 1;
    }
    else if(key>a[mid]){

        start = mid + 1;
    }
    else if(key<a[mid]) {
        end = mid -1;
    }
    mid = start + (end-start)/2;
}
    return ans;
}

int main(){
    int even[5] = {1,2,3,3,5};
    cout<<"First Occ of 3 is: "<<FirstOcc(even, 5,3);
    cout<<"Last Occ of 3 is: "<<lasttOcc(even, 5,3);
    return 0;
}