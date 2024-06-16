#include<iostream>
using namespace std;

// using iteration
int linear_search(int arr[] , int n , int x){
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

// using recursion
int linear_search_recursion(int arr[] , int n , int x , int length ){
    if(n==0){
        return -1;
    }
    else if(arr[0] == x){
        return (length-n);
    }
    return linear_search_recursion(arr+1,n-1 ,x ,length) ;
    
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

    int target;
    cout<<"Give target element:";
    cin>>target;

    int index = linear_search_recursion(arr , n , target, n);
    if(index == -1){
        cout<<"The target element is not in the array."<<endl;
    }
    else{
        cout<<"The target element is at index:"<<index<<endl;
    }

}