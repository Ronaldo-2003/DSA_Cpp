#include<iostream>
#include<climits>
using namespace std;
#include"10_StackUsingTemplate.cpp"

int main(){
    Stack<int> s1;
    s1.push(15);
    s1.push(25);
    s1.push(35);
    s1.push(45);
    s1.push(55);
    s1.push(65);

    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
}