// reverse word in String
#include <iostream>

using namespace std;
void reverse(string a){
    int n =a.length();
    int temp;
    int s=0;
    for(int i =0;i<=n;i++){
        if(a[i]==32 || a[i]=='\0'){
            
            int end=i-1;
            while(s<=end){
                temp=a[s];
                a[s]=a[end];
                a[end]=temp;
                s++;
                end--;
            }
            s=i+1;
        }
    }
    for(int i =0;i<n;i++){
        cout<<a[i];
    }
}
int main()
{
    string s = "My name is Iti";
   reverse(s);

    return 0;
}