#include<iostream>
using namespace std;

class a{
    public:
    void funcA(){
        cout<<"Func A"<<endl;
    }
};

class B : public a{
    public:
    void funcB(){
        cout<<"Func B"<<endl;
    }
};

class C : public B{
    public:
};

int main(){
    C c;
    c.funcA();
    c.funcB();
    return 0;
}