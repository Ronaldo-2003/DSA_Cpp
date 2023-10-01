#include <iostream>
using namespace std;

int main()
{
    int i,j,k,N;

    cout<<"Give no. of rows:";
    cin>>N;

    i=1;k=1;
    while(i<=N){
        j=1;
        k=i;
        while(j<=i){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}


