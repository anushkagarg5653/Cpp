#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v, int k){
    int s = k+1;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v){
    for(int i=0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> v;

    v.push_back(11);
    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(13);
    int k = 2;
    vector<int> ans = reverse(v,k);
    print(ans);
    return 0;
}