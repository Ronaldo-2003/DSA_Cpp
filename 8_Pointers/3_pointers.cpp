#include<iostream>
using namespace std;

int main(){

    int i ;
    cout<<"i:"<<i<<endl; // will print garbage value
    i++;  // increases i by 1
    cout<<"i:"<<i<<endl; // above garbage value increased by 1

    // int *p;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // (*p)++;   // This can be very dangerous . So,always try to initialize the pointer even u can make null pointer.
    // cout<<*p<<endl;

    int *p = 0;  // null pointer

    // its not ideal to perform below given operations

    cout<<"p:"<<p<<endl; // will give output : 0
    cout<<"*p:"<<*p<<endl; // it tries to print the value stored at p -> nothing is there
    (*p)++; // increases the value by 1 which doesnt exist
    cout<<"*p:"<<*p<<endl; // tries to print the increased value

}
