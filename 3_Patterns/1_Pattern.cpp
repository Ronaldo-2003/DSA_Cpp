#include<iostream>
using namespace std;

int main(){
    int N,i,j;

    cout<<"Give the value of N:";
    cin>>N;

    i=1;
    while(i<=N){
        j=1;
        while(j<=i){
            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

