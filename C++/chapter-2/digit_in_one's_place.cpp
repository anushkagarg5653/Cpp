#include<iostream>
using namespace std;

int main(){
    int num, digit;
    cout<<"\n Enter any number :";
    cin>>num;
    digit = num % 10;
    cout<<"\n The digit in ones place of "<<num<<" is "<<digit;
    return 0;
}