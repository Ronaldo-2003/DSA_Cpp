#include<iostream>
#include<climits>
using namespace std;

void selection_sort(int arr[] , int n){

    // after 1st reursion 1st element i.e. element at 0th index will be at right position
    if(n<=1){
        return;
    }

    int min = INT_MAX ;

    int index = -1;
    int i = 0;

    // using while loop to get the minimum element and note its index
    while(i<n){
        if(arr[i] < min){
            min = arr[i];
            index = i;
        }
        i++;
    }

    // swapping minimum element with element at 0th index
    int temp = arr[0];
    arr[0] = arr[index] ;
    arr[index] = temp;

    selection_sort(arr+1 , n-1); // recursive call -> will be applied on rest of array(leaving 1st element)
    
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
 
    selection_sort(arr , n);  // calling selection_sort function to sort the array

    cout<<"The elements of sorted array are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

