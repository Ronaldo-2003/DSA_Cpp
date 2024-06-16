#include<iostream>
using namespace std;

int SumofDigits(int n){
    if(n<=0){
        return 0;
    }
    int sum = (n- ((n/10)*10)) + SumofDigits(n/10);
    return sum;
}

int main(){
    int n;
    cout<<"Give the integer:";
    cin>>n;

    int sum = SumofDigits(n);
    cout<<"Sum of digits of integer:"<<sum<<endl;;

}
