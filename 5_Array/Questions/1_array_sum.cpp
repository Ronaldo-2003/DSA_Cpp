#include<iostream>
using namespace std;

// sum of elements of array iteratively
int array_sum(int arr[] , int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}

// sum of elements of array recursively
int array_sum_recursion(int arr[] , int n){
    if(n==0){
        return 0;
    }
    return arr[0] + array_sum_recursion(arr+1 , n-1) ;
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

    // int sum = array_sum(arr , n);
    int sum = array_sum_recursion(arr , n) ;
    cout<<"Sum of all the elements of array:"<<sum<<endl;

}