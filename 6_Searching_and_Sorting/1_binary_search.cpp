#include<iostream>
using namespace std;

// binary search using recursion
int binary_search(int arr[], int n, int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            return binary_search(arr, n, mid + 1, high, target);
        } else {
            return binary_search(arr, n, low, mid - 1, target);
        }
    }

    return -1; // Target not found
}

// binary search using iteration
int binary_search_iteratively(int arr[] , int n , int low , int high , int target){
    while(low <= high){

        int mid = low+(high-low)/2;

        if(target == arr[mid]){
            return mid;
        }

        else if(target < arr[mid]){
            high = mid - 1 ;
        }

        else{
            low = mid + 1;
        }
    }
    return -1 ;  // target not found
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

    int low = 0;
    int high = n-1;
    int index = binary_search_iteratively(arr , n , low , high, target);

    if(index == -1){
        cout<<"The target element is not in the array."<<endl;
    }
    else{
        cout<<"The target element is at index:"<<index<<endl;
    }

}