#include<iostream>
using namespace std;

int sum(int a){
    int ans = 0;
    for( int i=1; i<=a;i++){
        ans += i;
    }
    // ans = (a*(a+1))/2;
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<sum(n)<<endl;
    return 0;
}