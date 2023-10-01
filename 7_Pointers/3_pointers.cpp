#include<iostream>
using namespace std;

int main(){

    int i ;
    cout<<i<<endl;

    i++;
    cout<<i<<endl;

    // int *p;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // (*p)++;   // This can be very dangerous . So,always try to initialize the pointer even u can make null pointer.
    // cout<<*p<<endl;

    int *p = 0;
    cout<<p<<endl;
    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;

}
