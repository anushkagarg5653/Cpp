#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    bool flag=0;
    cout<<"Enter the  number : ";
    cin>>n;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"Not prime"<<endl;
            flag = 1;
            break;
        }
        // else{
        //     cout<<"prime"<<endl;
        // }
    }
    if(flag==0){
        cout<<"Prime"<<endl;
    }
    return 0;
}