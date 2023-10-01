#include <iostream>
using namespace std;

int main()
{
    int i,j,N;

    cout<<"Give no. of rows:";
    cin>>N;

    i=1;
    while(i<=N){
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}

