#include<iostream>
using namespace std;

int main(){
    int i =10;
    int *p = &i;  // p is an integer pointer to i

    cout<<"i:"<<i<<endl;
    cout<<"p:"<<p<<endl;
    cout<<"*p:"<<*p<<endl;  // will print value whose address is stored at p

    cout<<"size of i:"<<sizeof(i)<<endl;
    cout<<"size of p:"<<sizeof(p)<<endl;

    i++;

    cout<<"i:"<<i<<endl;
    cout<<"*p:"<<*p<<endl;

    int a = *p;
    a++;

    cout<<"a:"<<a<<endl;
    cout<<"*p:"<<*p<<endl;

    i = 30;
    cout<<"i:"<<i<<endl;
    cout<<"*p:"<<*p<<endl;

    int *j = &i;
    cout<<"i:"<<i<<endl;
    cout<<"*p:"<<*p<<endl;
    cout<<"*j:"<<*j<<endl;

    i++;

    cout<<"i:"<<i<<endl;
    cout<<"*p:"<<*p<<endl;
    cout<<"*j:"<<*j<<endl;

    (*p)++;

    cout<<"i:"<<i<<endl;
    cout<<"*p:"<<*p<<endl;
    cout<<"*j:"<<*j<<endl;

}

