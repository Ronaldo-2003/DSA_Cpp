#include<iostream>
using namespace std;

int countDigit(int n){
    if(n/10 == 0){
        return 1;
    }
    return 1 + countDigit(n/10);
}

int main(){
    int n ;
    cout<<"Give the number of which you want to count digit:";
    cin>>n;

    cout<<"Number of digits in "<<n<<":"<<countDigit(n)<<endl;
}
