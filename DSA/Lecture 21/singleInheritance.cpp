#include<iostream>
using namespace std;

class A{
    public:
    void funcA(){
        cout<<"Inherited";
    }
};

class B : public A{
    
};

int main(){
    B b;
    b.funcA();
    return 0;
}