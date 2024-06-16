#include<iostream>
using namespace std;

int main(){
    int i =10;
    int *p = &i;  // p is an integer pointer to i

    cout<<"i:"<<i<<endl; // will print what is contained in varible i
    cout<<"p:"<<p<<endl; // will print what is contained in variable p
    cout<<"*p:"<<*p<<endl;  // will print value whose address is stored at p

    cout<<"size of i:"<<sizeof(i)<<endl; // will print the size of int variable
    cout<<"size of p:"<<sizeof(p)<<endl; // will print the size of pointer variable

    i++; // i will increment by 1

    cout<<"i:"<<i<<endl; // will print new value of i
    cout<<"*p:"<<*p<<endl; // will effectively print the value of variable of i

    int a = *p; // a will effectively contain the value stored in variable i(because of *p) but it won't refer to that 
    a++; // now a is incremented

    cout<<"a:"<<a<<endl; // will print 12 (a is incremented)
    cout<<"*p:"<<*p<<endl; // will print 11(p points to variable i(which is not incremented))

    i = 30; // reassigning i with new integer value
    cout<<"i:"<<i<<endl; // will print 30(new value)
    cout<<"*p:"<<*p<<endl; // will print 30(because it will print what is there in the varibale i)

    int *j = &i; // j stores address of i
    cout<<"i:"<<i<<endl; // will print 30(i=30)
    cout<<"*p:"<<*p<<endl; // will print 30(p contains address of i)
    cout<<"*j:"<<*j<<endl; // will print 30(j also contains address of i)

    i++; // i incrementd by 1

    cout<<"i:"<<i<<endl; // will print 31
    cout<<"*p:"<<*p<<endl; // will print 31
    cout<<"*j:"<<*j<<endl; // will print 31

    (*p)++; // increasing in this manner will increase the actual integer which is stored in i and whose add. pointed by(p and  j)

    cout<<"i:"<<i<<endl; // will print 32 
    cout<<"*p:"<<*p<<endl; // will print 32 
    cout<<"*j:"<<*j<<endl; // will print 32 

}

