#include<iostream>
using namespace std;

int main(){
    int N,i,j,val;

    cout<<"Give the value of N:";
    cin>>N;

    i=1;
    val=1;
    while(i<=N){
        j=1;
        while(j<=i){
            cout<<val<<" ";
            val=val+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

