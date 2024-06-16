#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Size:";
    cin>>n;

    int arr[n];  // declaring array of size n
    cout<<"Input Elements:";  // taking inputs using loop
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Elements are:";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}
