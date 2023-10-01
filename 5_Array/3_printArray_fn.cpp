#include<iostream>
using namespace std;

// while passing array to function , you have to explicitly give its size

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Size:";
    cin>>n;

    int arr[n];
    cout<<"Input elements of array:";
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }

    cout<<"Elements of array:";
    printArray(arr,n);
}
