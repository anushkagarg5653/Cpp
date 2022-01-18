#include<iostream>
using namespace std;

// function overloading

class polymorphism{
    public:
    void fun(){
        cout<<"I am fun with np arg"<<endl;
    }

    void fun(int x){
        cout<<"I am a function with int arg"<<endl;
    }
    void fun(double x){
        cout<<"I am fun with double"<<endl;
    }
};

int main(){
    polymorphism obj;
    obj.fun();
    obj.fun(4);
    obj.fun(4.2);
    return 0;
}