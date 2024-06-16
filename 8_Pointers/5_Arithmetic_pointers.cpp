#include<iostream>
using namespace std;

int main(){
    int i = 10;
    int *p = &i;

    cout<<"p:"<<p<<endl;
    p=p+1; // it points towards the next memory block
    cout<<"p:"<<p<<endl;
}
