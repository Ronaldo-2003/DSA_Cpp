#include <iostream>
using namespace std;

void generateFibonacci_recursive(int arr[], int n, int currentIndex = 0) {
    if (currentIndex >= n) {
        return;
    }

    if (currentIndex == 0) {
        arr[currentIndex] = 0;
    } else if (currentIndex == 1) {
        arr[currentIndex] = 1;
    } else {
        arr[currentIndex] = arr[currentIndex - 1] + arr[currentIndex - 2];
    }

    generateFibonacci_recursive(arr, n, currentIndex + 1);
}

void generateFibonacci_iterative(int arr[] , int n ){
    if(n >= 1){
        arr[0] = 0;
    }
    if(n >= 2){
        arr[1] = 1;
    }
    for(int i=2; i<n ;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
}

int main() {
    int n;
    //cout<<"Give n:";
    cin>>n;
    
    int fibSeq[n];

    generateFibonacci_iterative(fibSeq, n);

    // cout<<"Fibonacci series:";
    for (int i = 0; i < n; ++i) {
        cout << fibSeq[i] << " ";
    }

    return 0;
}
