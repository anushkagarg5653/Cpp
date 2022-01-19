#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

    m[1] = "Anushka";
    m[2] = "Garg";
    m[3] = "Anu";

    m.insert({5, "hey"});
    cout<<"before erase"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding -13"<<m.count(-13)<<endl;

    //m.erase(13);

    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    auto it = m.find(5);

    for(auto i=it;i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}