#include <iostream>
using namespace std;

void reverse(int arr[] , int n){
    int i=0 , j=n-1;
    while(i<=j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int n;
    cout<<"Size of array:";
    cin>>n;

    int arr[n];

    cout<<"Input elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverse(arr,n);

    cout<<"Reversed elements of array are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
