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

int main(){
    B b; // constructor of A,B will be called both(1st->base class , 2nd->child class)
}