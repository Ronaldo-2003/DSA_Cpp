#include<iostream>
using namespace std;

int main(){
    int i,j,N;

    cout<<"Give the number of rows:";
    cin>>N;

    i=1;
    while(i<=N){
        j=1;
        while(j<=N){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

 }
