#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number:";
    cin>>n;

    int i=1;
    int Sum=0;
    while(i<=n){
        if(i%2==0){
            Sum=Sum+i;
        }
        i=i+1;
    }

    cout<<"Sum="<<Sum<<endl;
}
