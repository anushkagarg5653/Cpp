#include<iostream>
using namespace std;

int main(){
    int num1, num2,temp;
    cout<<"\n Enter the two numbers : ";
    cin>>num1>>num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"\n The swapped numbers are: "<<num1<<" and "<<num2;
    return 0;
}