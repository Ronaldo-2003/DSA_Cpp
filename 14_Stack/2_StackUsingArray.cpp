#include<iostream>
using namespace std;
#include"1_StackUsingArray.cpp"


int main(){
    Stack* stack1 = new Stack(2);
    cout<<stack1->isEmpty()<<endl;
    stack1->push(15);
    stack1->push(12);
    stack1->push(34);
    stack1->pop();
    stack1->pop();
    stack1->pop();
    int result = stack1->top();
    cout<<result<<endl;
    stack1->push(17);
    cout<<stack1->size()<<endl;
    stack1->show();

    delete stack1; // releasing the memory by deleting the stack
    return 0;
}
