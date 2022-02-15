#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    //base condition
    if(size==0 )
        return false;
    
    if(arr[0] == key)
        return true;
    else{
        bool ans = linearSearch(arr+1,size-1,key);
        return ans;
    }
}

int main(){
    int arr[5] = {3,0,5,1,7};
    int size = 5;
    int key = 2;
    int search = linearSearch(arr,size,key);
   if(search)
        cout<<"Element found"<<endl;
    else{
        cout<<"not found";
    }
    return 0;
}