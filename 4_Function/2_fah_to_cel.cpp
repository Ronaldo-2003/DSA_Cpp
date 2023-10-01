#include<iostream>
using namespace std;

int TempConverter(int S, int E, int W){
    int start_temp=S;
    int C=0;
    while(S<=E){
        C=((S-32)*5)/9;
        cout<<S<<" "<<C<<endl;
        S=S+W;
    }

}

int main(){
    int S,E,W;

    cout<<"Give starting temperature in Fahrenheit:";
    cin>>S;

    cout<<"Give ending temperature:";
    cin>>E;

    cout<<"Give the gap for temperature:";
    cin>>W;

    TempConverter(S,E,W);










}
