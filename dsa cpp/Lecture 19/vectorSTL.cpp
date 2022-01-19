#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    //other way
    vector<int> a(5,1);
    cout<<"Capacity"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity"<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Capacity"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity"<<v.capacity()<<endl;
    cout<<"size of"<<v.size()<<endl;

    cout<<"Element at 2nd index"<<v.at(2)<<endl;

    cout<<"front" << v.front()<<endl;
    cout<<"back" << v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
    cout<<"before clear size"<<v.size()<<endl;
    v.clear();
    cout<<"after clear size"<<v.size()<<endl;
    return 0;
}