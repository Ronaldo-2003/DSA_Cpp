#include<iostream>
using namespace std;


int factorial(int a){
    int i=1;
    int fact=1;
    while(i<=a){
        fact=fact*i;
        i++;
    }
    return fact;
}

int main(){
    // Finding n_c_r
    int n,r;
    cout<<"n:";
    cin>>n;
    cout<<"r:";
    cin>>r;

    int fact_n= factorial(n);
    int fact_r= factorial(r);
    int fact_n_r= factorial(n-r);

    int n_c_r= fact_n/(fact_n_r * fact_r);
    cout<<"n_c_r:"<<n_c_r;

    /*

    // Finding n factorial
    int fact_n=1;
    int i=1;
    while(i<=n){
        fact_n=fact_n*i;
        i++;
    }

    // Finding r factorial
    int fact_r=1;
    i=1;
    while(i<=r){
        fact_r=fact_r*i;
        i++;
    }

    // Finding n_r factorial
    int fact_n_r=1;
    i=1;
    while(i<=n-r){
        fact_n_r=fact_n_r*i;
        i++;
    }

    // Finding n_c_r
    int n_c_r=fact_n/(fact_r * fact_n_r);
    cout<<n_c_r;

    */
}
