#include<iostream>
using namespace std;

char toLowerCase(char c){
    if(c>='a' && c<='A'){
        return c;
    }
    else{
        char temp = c - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
          
        }
        else{
          s++;
          e--;
        }
    }
    return 1;
}


int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    cout<<"Enter string"<<endl;
    char name[20];
    cin>>name;
    int n = getLength(name);
    cout<<checkPalindrome(name,n);
    return 0;
}