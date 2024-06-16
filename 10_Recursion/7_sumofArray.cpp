#include<iostream>
using namespace std;

int sumOfArray(int arr[], int n){
    if(n==0){
        return 0;
    }
    int result =   arr[n-1] + sumOfArray(arr,n-1);
    return result;
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

    int sum = sumOfArray(arr,n);
    cout<<"Sum of elements of the array:";
    cout<<sum<<endl;
}
