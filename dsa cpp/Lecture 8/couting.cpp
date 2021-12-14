#include<iostream>
using namespace std;

// functio Signature
void Counting(int n){
    // function body
    for(int i=0;i<=n;i++){
        cout<<i<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    // function call
    Counting(n);

    return 0;
}