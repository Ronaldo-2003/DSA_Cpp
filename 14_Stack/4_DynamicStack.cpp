#include<iostream>
using namespace std;
#include"3_DynamicStack.cpp"

int main(){
    Stack* stack1 = new Stack();
    stack1->push(10);
    stack1->push(12);
    stack1->push(10);
    cout<<stack1->size()<<endl;
    stack1->push(12);
    stack1->push(10);
    cout<<stack1->size()<<endl;
    stack1->push(12);
    cout<<stack1->size()<<endl;
}