#include<iostream>
using namespace std;

int power(int x , int n){
    if( n== 0){
        return 1;
    }
    int result = x * power(x,n-1);
    return result;
}

int main(){
    int x,n;

    cout<<"Base:";
    cin>>x;

    cout<<"Power:";
    cin>>n;

    int Result = power(x,n);
    cout<<"Result is:"<<Result<<endl;

}
