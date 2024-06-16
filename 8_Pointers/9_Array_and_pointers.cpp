#include<iostream>
using namespace std;

// function to calculate sum of elements of array

// what we used to do
int sum_array1(int arr[] , int size){
    int sum =0;
    for(int i=0; i<size; i++){
        sum = sum+arr[i];
    }
    return sum;
}

// what it actually is
int sum_array2(int* arr, int size){
    int sum =0;
    for(int i=0; i<size; i++){
        sum = sum+arr[i];
    }
    return sum;
}


int main(){
    int n;
    cout<<"Give size of array:";
    cin>>n;

    int arr[n];

    cout<<"Give the elements of the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum1 = sum_array1(arr , n);
    cout<<"The sum of the elements of the array:"<<sum1<<endl;

    int sum2 = sum_array2(arr , n);
    cout<<"The sum of the elements of the array:"<<sum2<<endl;    
}