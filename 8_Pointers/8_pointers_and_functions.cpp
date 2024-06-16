#include<iostream>
using namespace std;

void print(int* p){ // printing the value stored at the pointed address
    cout<<"*p:"<<*p<<endl;
}

void incrementPointer(int* p){ // increasing the value of p(address) and then print it
    p++;
    cout<<"Value of p inside increment function:"<<p<<endl;
}

void increment(int* p){ // printing the value stored at p , incrementing it , then again , printing it
    cout<<"Value stored at address p before:"<<*p<<endl;
    (*p)++;
    cout<<"value stored at address p after:"<<*p<<endl;

}

int main(){

    int a = 10;
    int* p = &a;

    print(p); // function to print the value stored at p

    cout<<"p:"<<p<<endl;
    incrementPointer(p); // function to increase the value of p(address) and then print it
    cout<<"p:"<<p<<endl;

    increment(p); // function to print the value stored at p , increment it , then again , print it
}