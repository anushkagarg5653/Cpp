#include <iostream>
#include <string>
using namespace std;

class human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getage(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }
};

class Male: public human{

    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};

int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;
    return 0;
}