#include<iostream>
using namespace std;

int main(){
    int S, E, W;

    cout<<"Give start Fahrenheit value:";
    cin>>S;

    cout<<"Give end Fahrenheit value:";
    cin>>E;

    cout<<"Give step size:";
    cin>>W;

    cout<<"Cel"<<" "<<"Fah"<<endl;
    while(S<=E){
        cout<<S;
        int C=((S-32)*5)/9;
        cout<<"  "<<C<<endl;

        S=S+W;
    }
}
