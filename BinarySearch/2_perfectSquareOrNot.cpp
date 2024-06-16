#include<bits/stdc++.h>
using namespace std;

bool PerfectSquare(int n){
    if(n==0 || n==1) return true;
    int l=1,r=n;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(mid*mid == n) return true;
        else if(mid*mid < n) l=mid+1;
        else r=mid-1;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    if(PerfectSquare(n)){
        cout<<n<<" is a perfect square."<<endl;
    }else{
        cout<<n<<" is not a perfect square."<<endl;
    }
}