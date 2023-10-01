#include<iostream>
using namespace std;

int fact(int n){
    if(n == 0){ // termination condition
        return 1;
    }
    int factorial = n * fact(n-1);
    return factorial;
}

int main(){
    int n;
    cout<<"Input the number:";
    cin>>n;

    int factorial_ans = fact(n);
    cout<<"Factorial is:"<<factorial_ans<<endl;


}
