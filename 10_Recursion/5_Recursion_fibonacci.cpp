#include<iostream>
using namespace std;

int Fib(int n){
    if(n<=0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    cout<<n<<endl;
    return Fib(n-1)+Fib(n-2);

}

int main(){
    int n;
    cout<<"Give the number:";
    cin>>n;

    int result = Fib(n);
    cout<<n<<"th fibonacci number is:"<<result<<endl;
}
