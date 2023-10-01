#include<iostream>
using namespace std;

int main(){
    // Printing integers upto n

    int n;
    cout<<"Give the number upto which you want to print:";
    cin>>n;

    int i=1;
    while(i<=n){
        cout<<i<<endl;
        i=i+1;
    }
}
