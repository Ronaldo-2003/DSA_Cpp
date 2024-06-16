#include<iostream>
using namespace std;

bool FindX(int x , int arr[] , int n){
    if(n<=0){
        return false;
    }
    if(arr[0] == x){
        return true;
    }
    bool result = FindX(x,arr+1,n-1);
    if(result){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Give size of array:";
    cin>>n;

    int arr[n];
    cout<<"Give elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Give the element you find to find:";
    cin>>x;

    bool result = FindX(x,arr,n);
    cout<<result<<endl;
}
