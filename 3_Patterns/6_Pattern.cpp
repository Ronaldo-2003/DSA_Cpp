
#include<iostream>
using namespace std;

int main(){
    int i,j,k,N;

    cout<<"Give the value of N:";
    cin>>N;

    i=1;k=1;
    while(i<=N){
        j=1;
        while(j<=N){
            cout<<k;
            j++;
        }
        cout<<endl;
        k++;
        i++;
    }
}
