#include<iostream>
using namespace std;

class a{
    public:
    void funa(){
        cout<<"Func A\n";
    }
};

class b{
    public:
    void funb(){
        cout<<"Func B\n";
    }
};

class c: public a, public b{
public:
};

int main(){
    c C;
    C.funb();
    C.funa();
    return 0;
}