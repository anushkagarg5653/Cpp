#include<iostream>
#include <algorithm>
using namespace std;
int doUnion(int a[], int n, int b[], int m)  {
       int count =0 ;
       sort(a, a+n);
       sort(b, b+m);
       int i =0;
       int j =0;
       while(i < n && j< m){
               if(a[i++] == b[j++])
                    count++;
       }
           while(i<n){
               count++;
               i++;
           }
           
           while(j<m){
               count++;
               j++;
           }
       
     return count;  
    }

int main(){
    int n;
    int m;

    cin>>n;
    cin>>m;

    int a[n];
    int b[m];

    for(int i =0; i<n; i++){
        cin>>a[i];
    }

    for(int j =0; j<m; j++){
        cin>>b[j];
    }
    cout<<doUnion(a,n,b,m);
    return 0;
}