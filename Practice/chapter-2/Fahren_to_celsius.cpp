#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float fahrenheit, celsius;
    cout<<"Enter the temperature in fahrenheit: ";
    cin>>fahrenheit;
    celsius = (0.56) * (fahrenheit - 32);
    cout<<setprecision(2);
    cout<<"\n Temperature in degrees celsius = "<<celsius;
    return 0;
}