#include<iostream>
using namespace std;

void insertion_sort(int arr[] , int n){
    // this loop swaps pair if later one is smaller
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }

        int j = i;

        // this loop checks for an element if it is at lower index than the current and has greater value than current then swap
        while(j>0){
            if(arr[j] < arr[j-1]){
                int temp1 = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp1;
            }
            j--;
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
 
    insertion_sort(arr , n);  // calling insertion_sort function to sort the array

    cout<<"The elements of sorted array are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}