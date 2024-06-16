#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int* add_a = &a;
    // Getting address where integer 10 is stored or where variable a is located
    cout<<"&a:"<<&a<<endl;
    cout<<"add_a:"<<add_a<<endl;

    float b = 89.26;
    float* add_b = &b;
    // Getting address where float 89.26 is stored or where variable b is located
    cout<<"&b:"<<&b<<endl;
    cout<<"add_b:"<<add_b<<endl;

    // We can also get the value if we have the address
    // Getting 10 through add_a
    // Getting 89.26 through add_b

    cout<<"a:"<<*(add_a)<<endl;
    cout<<"b:"<<*(add_b)<<endl;
}
