#include<iostream>
using namespace std;

// 3 functions

int main(){
    int i = 10;  // creating an integer variable
    int* p = &i; // creating an integer pointer to store address of integer variable

    // But what to do if we have to store address of a pointer
    // Syntax : (datatype of variable whose address is to be stored) * new_var_name = &(whose address needs to be stored)
    // Ex: int* p = &i;

    // double pointer
    int** add_p = &p;
    cout<<"add_p:"<<add_p<<endl; // double pointer
    cout<<"&p:"<<&p<<endl;  // address of pointer which stores address of an integer

    cout<<"&i:"<<&i<<endl; // address of i
    cout<<"p:"<<p<<endl; // value of p which points address of i
    cout<<"*(add_p):"<<*(add_p)<<endl; // printing address of variable "i" using de-referencing double pointer "add_p"

    cout<<"i:"<<i<<endl;  // value of i
    cout<<"*p:"<<*p<<endl; // getting value of i using de-referencing
    cout<<"**(add_p):"<<**(add_p)<<endl; // getting value of i using double de-referencing

}