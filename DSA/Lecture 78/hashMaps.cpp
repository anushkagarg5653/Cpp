#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    
    //creation
    unordered_map<string,int> m;

    //insertion

    // 1
    pair<string, int> pair1 = make_pair("Anushka", 3);
    m.insert(pair1);

    //2
    pair<string, int> pair2("Garg", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    //what will happen
    m["mera" ]= 2;

    //search
    cout<<m["mera"] << endl;
    cout<<m.at("Garg") << endl;

    cout<<m["Anu"] << endl;
    cout<<m.at("Anu")<<endl;

    //size
    cout<<m.size() << endl;

    //to check presence
    cout<<m.count("Anushka") << endl;

    //erase
    m.erase("mera");
    cout<<m.size() << endl;

    //iterator
    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<< it->first << " " << it->second << endl;
        it++;
    }
    return 0;
}