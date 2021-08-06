// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n ;i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    int num;
    int count0=0, count1=0, count2=0;
    for(long long int i =0; i<n; i++){
        cin>>num;
        if(num==0)
            count0++;
        if(num==1)
            count1++;
        if(num==2)
            count2++;
    }
    while(count0--){
        cout<<'0'<<" ";
    }
    while(count1--){
        cout<<'1'<<" ";
    }
    while(count2--){
        cout<<'2'<<" ";
    }
    return 0;
}