#include<iostream>
using namespace std;

int main()
{
    int a[10];
    // both will contain the address of 1st element of array a[10]
    cout<<"a:"<<a<<endl;
    cout<<"&a:"<<&a[0]<<endl;

    a[0]=5;
    cout<<"*a:"<<*a<<endl;
    cout<<"*(a+1):"<<*(a+1)<<endl;  // gives garbage value

    int *p = &a[0]; // pointer p stores address of 1st block of array a[10]
    // both will give same memory address
    cout<<"a:"<<a<<endl;
    cout<<"p:"<<p<<endl;

    cout<<"&p:"<<&p<<endl;
    cout<<"&a:"<<&a<<endl;

    cout<<"sizeof(p):"<<sizeof(p)<<endl;
    cout<<"sizeof(a):"<<sizeof(a)<<endl; // will give 40(4*10)

    // p=p+1; allowed -> because now it is pointing to the next element of the array
    // a=a+1; // not allowed -> because name of the array is constant pointer to first element of array and it cant be modified
    // But in recursive function , we use (arr+1) because in function while passing the name of the array , it decays into
    // pointer and pointer can be modified like that

}
