#include<iostream>
using namespace std;

int main(){
    int i,j,k,N;

    cout<<"Give the number of rows:";
    cin>>N;

    i=1;
    while(i<=N){
        j=1;
        k=1;
        while(j<=N){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
