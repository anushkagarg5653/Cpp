// Input: str1 = “onetwofour”, str2 = “hellofourtwooneworld” 
// Output: YES 

#include<bits/stdc++.h>
using namespace std;

bool strCheck(string& str1, string &str2, string & res){
       int i = 0;
       int j = 0;
       int k = 0;
       int n = str1.length();
       int m = str2.length();
       int f = res.length();
       if(n + m != f) 
        return 0;
       while(k < f){
        if(i < n && str1[i] == res[k])
            i++;
        else if( j< m && str2[j] == res[k])
            j++;
        else
            return 0;
        k++;
       }
       if(i<n || j < m) cout<<"no";
       return 1;
      
}

int main(){
    string str1;
    string str2;
    string res;

    cin>>str1>>str2>>res;
    bool ans = strCheck(str1, str2,res);
    if(ans)
        cout<<"YES";
    else
        cout<<"No";
    return 0;
}