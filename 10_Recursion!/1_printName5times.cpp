#include<iostream>
#include<string>
using namespace std;

int count = 0; // global variable

void printNames(string name , int n){
    if(count == n){
        return;
    }
    cout<<name<<endl;
    count++;
    printNames(name , n);
}

int main(){
    int n;
    cout<<"Give n:";
    cin>>n;

    string name;
    cout<<"Give name:";
    cin>>name;

    printNames(name , n);

    return 0;
}