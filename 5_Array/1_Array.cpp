#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Size:";
    cin>>n;

    cout<<"Input Elements:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Elements are:";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}
