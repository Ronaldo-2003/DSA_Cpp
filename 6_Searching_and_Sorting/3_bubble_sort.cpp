#include<iostream>
using namespace std;

void bubble_sort(int arr[] , int n){
    // termination condition
    if(n<=1){
        return ;
    }

    // places right element at the last index
    for(int i=0;i<n-1;i++){
        // swapping elements if next element is smaller than current element
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    bubble_sort(arr, n-1); // recursive call on arr of size (n-1)
}

void bubbleSort(int arr[], int n) {
        for(int i=n-1;i>0;i--){
            for(int j=0;j<i;j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }

int main(){

    int n;
    cout<<"Size:";
    cin>>n;

    int arr[n];

    cout<<"Input array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    bubble_sort(arr , n);  // calling bubble_sort function to sort the array

    cout<<"The elements of sorted array are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}