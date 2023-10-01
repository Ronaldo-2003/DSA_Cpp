#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout<<"Enter 1st number:";
    cin>>a;

    cout<<"Enter 2nd number:";
    cin>>b;

    // Nested if-else
    // It is not necessary to use else if we are using if

    /*
    if(a==b){
        cout<<"Both the numbers are equal."<<endl;
    }
    else{
        if(a>b){
            cout<<"1st number is greater."<<endl;
        }
        else{
            cout<<"2nd number is greater."<<endl;
        }
    }
    */

    // Above problem without nesting if-else
    // Using else -if

    if(a==b){
        cout<<"Both numbers are equal."<<endl;
    }
    else if(a>b){
        cout<<"1st number is greater."<<endl;
    }
    else{
        cout<<"2nd number is greater."<<endl;
    }

    // We can have multiple if without else.
    // If there are only ifs present there it will check all ifs.

}
