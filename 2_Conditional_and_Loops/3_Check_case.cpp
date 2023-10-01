#include<iostream>
#include<string>
using namespace std;

int main(){

    char ch;

    cout<<"Give the character which is to be tested:";
    cin>>ch;

    if(isalpha(ch)==0){
        cout<<"The character is not a alphabet."<<endl;
    }
    else{
        cout<<"The character is a alphabet."<<endl;

        if(isupper(ch)==0){
            cout<<"The alphabet is lowercase."<<endl;
        }
        else{
            cout<<"The alphabet is uppercase."<<endl;
        }
    }

    // Never equate something with 1 thinking true will give 1
    // True will give non zero value
    // False will give 0
    // Comparing in if-else , compare with 0
}

