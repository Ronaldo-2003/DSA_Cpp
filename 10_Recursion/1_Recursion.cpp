#include<iostream>
using namespace std;

void Hello(){
    cout<<"Hello World"<<endl;
    Hello();
}

int main(){
    Hello();
}
