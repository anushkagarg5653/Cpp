// brute force --------O(n^3)-------------
// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     int sum=0;
//     cout<<"Enter the size of an array : ";

//     for (int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     int maxSum= INT_MIN;
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             for(int k=i; k<=j; k++){
//                 sum +=a[k];
//             }maxSum = max(maxSum, sum);
//         }
//     }cout<<maxSum<<endl;
//     return 0;
// }

//---------- second method O(n^2)-----------
//-------cumulative sum approach----------

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }

//     int cumSum[n+1];
//     cumSum[0] = 0;
//     for(int i=1; i<=n; i++){
//         cumSum[i] = cumSum[i-1] +a[i-1];
//     }
//     int maxSum = INT_MIN;
//     for(int i=1; i<=n; i++){
//         int sum =0;
//         maxSum = max(maxSum, cumSum[i]);
//         for(int j=1; j<=i; j++){
//             sum = cumSum[i] - cumSum[j-1];
//             maxSum = max(maxSum,sum);
//         }
//     }

//     cout<<maxSum<<endl;


//     return 0;
// }

// ------- Kadane's Algorithm------------
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int currentSum = 0;
    int maxSum = INT16_MIN;

    for(int i=0; i<n; i++){
        currentSum += a[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum = max(currentSum, maxSum);
    }
    cout<<maxSum;
    return 0;
}