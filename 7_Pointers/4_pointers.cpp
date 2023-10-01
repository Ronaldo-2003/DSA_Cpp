#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 15;
    cout<<&b<<endl;
    int *c = &b;
    cout<<c<<endl;
    cout<<*c<<endl;
    *c = 12;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<b<<endl;

}

