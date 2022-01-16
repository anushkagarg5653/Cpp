#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  
    int t;
    cin >> t;
    
    
    while(t--){
    int n;
    cin>>n;
     int arr[n];
    for( int i=0;i<n; i++){
        cin>>arr[i];
    }
   int q;
    cin>>q;
        for(int j=0; j<q; j++){
            int x;
        cin>>x;
            long long sum =0;
            for(int i=0; i<n; i++){
                if(arr[i] > x){
                    sum += arr[i];
                }
                
            }
            cout<<sum<<endl;
        }
    }
    return 0;

}