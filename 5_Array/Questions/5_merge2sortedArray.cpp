#include<iostream>
using namespace std;

void merge2sortedArray(int arr1[] , int n , int arr2[] , int m){
    int arr[n+m];
    int i=0, j=0, k=0;
    while(i<n || j<m){
        if(arr1[i] < arr2[j]){
            arr[k] = arr1[i];
            i++;
        }
        else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    cout<<"Elements in arr:";
    for(int i=0; i<k;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n , m;
    int arr1[n];
    int arr2[m];

    cout<<"Give size of arr1:";
    cin>>n;

    cout<<"Give size of arr2:";
    cin>>m;

    cout<<"Give elements in arr1:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Give elements in arr2:";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    merge2sortedArray(arr1 , n , arr2 , m);
}