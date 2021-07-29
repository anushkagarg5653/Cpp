#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int i=0;
    int CurrLen=0, maxLen=0;
    int st=0, maxst = 0;

    while(1){
        if(a[i] == ' ' || a[i] == '\0' ){
            if(CurrLen>maxLen){
                maxLen = max(maxLen, CurrLen);
                maxst = st;
            }CurrLen = 0;
            st = i+1;
        }else
        CurrLen++;
        if(a[i] == '\0'){
            break;
        }
        i++;
    }

    cout<<maxLen<<endl;
    for(int i=0; i<maxLen; i++){
        cout<<a[i+maxst];
    }
    return 0;
}