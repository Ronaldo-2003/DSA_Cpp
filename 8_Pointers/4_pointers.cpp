#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 15;

    cout<<"&b:"<<&b<<endl; // add of variable b

    int *c = &b;   // c is an int pointer to b
    cout<<"c:"<<c<<endl;
    cout<<"*c:"<<*c<<endl;

    *c = 12; // it means the variable whose address is in c now carries int 12
    cout<<"c:"<<c<<endl;
    cout<<"*c:"<<*c<<endl;

    cout<<"b:"<<b<<endl;

}

