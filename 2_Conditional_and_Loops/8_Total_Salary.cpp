#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int S;
    cout<<"Enter the basic salary:";
    cin>>S;

    char G;
    cout<<"Enter the grade(A,B or C):";
    cin>>G;

    float hra=(20*S)/100;
    float da=(50*S)/100;
    float pf=(11*S)/100;

    int allow=0;
    if(G=='A'){
        allow=1700;
    }
    else if(G=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }

    int Total_Salary=round(S+hra+da+allow-pf);
    cout<<"Total salary is "<<Total_Salary<<endl;

}
