void solve(string str, vector<string> &ans,int index,string output  ){
    //base casse
    if(index >= str.length() ){
        if(output.length() >0)
            ans.push_back(output);
        return;
    }
    
    //excldue
    solve(str, ans, index+1, output);
    
    //include
    char elemnt = str[index];
    output.push_back(elemnt);
    solve(str, ans, index+1, output);
}

vector<string> subsequences(string str){
	
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, ans, index, output);
    return ans;
}
