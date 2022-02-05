#include<iostream>
using namespace std;

int fact(int n){
    //base case
    if(n==0)
    return 1;

    int smallerProblem = fact(n-1);
    int biggerProblem = n*smallerProblem;

    return biggerProblem;
}

int main(){
    int n;
    cin>>n;

    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
}