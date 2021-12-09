#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int row=1;
//   int i=1;
//   int j,num,k,l;
//   while(i<=n){
//     j=n-i+1;
//     num=1;
//     while(j>0){
//       cout<<num<<" ";
//       num++;
//       j--;
//     }
//     k=(i-1)*2;
//     while(k>0){ //stars
//       cout<<"* ";
//       k--;
//     }
//     l=n-i+1;
//     num=n-i+1;
//     while(l>0){
//       cout<<num<<" ";
//       num--;
//       l--;
//     }
    int col, star1, star2,num;
    while(row<=n){
        col = n-row+1;
        num=1;
        while(col>0){
            cout<<num;
            num++;
            col--;
        }
    }
    // cout<<endl;
    // row++;
  }
  
