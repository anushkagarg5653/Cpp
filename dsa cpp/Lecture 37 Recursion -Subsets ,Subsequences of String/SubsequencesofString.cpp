#include<vector>

void solve(string str, vector<string>& ans,string output, int index){

    //base case
    if(index >= str.length()){
        ans.push_back(output);
        return;
    }

    //exclude call
    solve(str,ans,output,index+1);
    //inclusive call
    char element = str[index];
    output.push_back(element);
    solve(str,ans,output,index+1);
}
vector<string> subsequence(string str){

    vector<string> ans ;
    string output = '';
    int index = 0;
    solve(str,ans,output,index);
    return ans;
}