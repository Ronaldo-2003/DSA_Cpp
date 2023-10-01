#include<iostream>
using namespace std;

void increment(int a , int arr[] , int n){
    a++;
    arr[0]++;
}

int main(){
    int a = 10;
    int arr[10] = {2,65,44};

    increment(a,arr,10);

    // Value of a will remain unchanged
    cout<<"Value of a:"<<a<<endl;
    // Value of arr[0] will change
    cout<<"Value of arr[0]:"<<arr[0]<<endl;
}
