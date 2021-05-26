#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter 2 numbers\n";
    cin>>num1>>num2;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout<<num1<<" "<<num2;
    return 0;
}