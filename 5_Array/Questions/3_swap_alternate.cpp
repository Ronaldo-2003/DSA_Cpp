#include<iostream>
using namespace std;

// swapping iteratively
void swap_alternate(int arr[] , int n){
    int i =0 , j =1 ;
    while(i<n && j<n){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i=i+2;
        j=j+2;
    
    }
}

//swapping recursively
void swap_alternate_recursively(int arr[] , int n){
    if(n==0 || n==1){
        return;
    }
    int temp = arr[0];
    arr[0] =  arr[1];
    arr[1] = temp;

    swap_alternate_recursively(arr+2 , n-2) ;
}

int main(){

    int n;
    cout<<"Size:";
    cin>>n;

    int arr[n];  
    cout<<"Input Elements:"; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    swap_alternate_recursively(arr , n);

    cout<<"Elements after swapping alternate elements are:";
    for(int j=0;j<n;j++){   
        cout<<arr[j]<<" ";
    }
}