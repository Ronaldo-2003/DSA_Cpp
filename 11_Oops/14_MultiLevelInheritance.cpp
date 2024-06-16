#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor of A is called."<<endl;
    }
};

class B : public A{
    public:
    B(){
        cout<<"Constructor of B is called."<<endl;
    }
};

class C : public B{
    public:
    C(){
        cout<<"Constructor of C is called."<<endl;
    }
};

int main(){
    C c;  // constructor of all the classes will be called(starting from base to child)
}