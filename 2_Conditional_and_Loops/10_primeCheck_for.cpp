#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Give the number which you want to check for prime:";
    cin>>n;

    int flag=0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag=1;
        break;
        }

    }
    if(flag==1){
        cout<<"The number is not prime."<<endl;
    }
    else if(n==2){
        cout<<"The number is prime."<<endl;
    }
    else{
        cout<<"The number is prime."<<endl;
    }
}
