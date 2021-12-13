#include<iostream>
using namespace std;

// 1 -> even
// 2 -> odd
bool isEven(int a){
    if(a&1)
        return 0;
    return 1;
};

int main(){
    int n;
    cin>>n;

    if(isEven(n)){
        cout<<"Num is Even";
    }
    else{
        cout<<"num is odd";
    };

    return 0;
}