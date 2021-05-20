#include<iostream>
#include<ctype.h>
using namespace std;

int main(){
    char c;
    cout<<"\n Enter the character in uppercase : ";
    cin>>c;
    cout<<"\n The name in lowercase is : "<<(char)tolower(c); 
    return 0;
}