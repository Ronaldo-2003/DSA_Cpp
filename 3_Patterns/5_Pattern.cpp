#include<iostream>
using namespace std;

int main(){
    int i,j,N;

    cout<<"Give the value of N:";
    cin>>N;

    i=1;
    while(i<=N){
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
