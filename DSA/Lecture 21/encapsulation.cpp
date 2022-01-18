#include<iostream>
using namespace std;

class A{
    public:
    int a;
    void funcA(){
        cout<<"Public:";
    };

    private:
    int b;
    void funB(){
        cout<<"Private";
    };

    protected:
    int c;
    void funcC(){
        cout<<"Protected";
    };
};

int main(){
    A obj;
    obj.funcA();
    // obj.funcB();
    return 0;
}