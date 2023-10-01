#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Give the number which needs to be checked:";
    cin>>n;

    int i=2;
    int flag=0;
    while(i<n){
        if(n%i==0){
            flag=0;
            break;
        }
        else{
            flag=1;
        }
        i=i+1;
    }
    if(flag==1 || n==2){
        cout<<"The number is prime."<<endl;
    }
    else{
        cout<<"The number is not prime."<<endl;
    }
}
