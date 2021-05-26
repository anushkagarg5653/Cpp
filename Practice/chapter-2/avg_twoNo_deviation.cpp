#include<iostream>
using namespace std;

int main(){
    int num1,num2,avg,devi1,devi2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    avg = (num1 + num2)/2;
    devi1 = num1 - avg;
    devi2 = num2 - avg;
    cout<<"Avg of 2 numbers are "<<avg<<" "<<"Deviation of two numbers are "<<devi1<<" "<<devi2;
    return 0;
}