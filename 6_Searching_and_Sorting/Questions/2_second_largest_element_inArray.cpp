#include<iostream>
#include<climits>
using namespace std;

int second_largest(int arr[] , int n){
    int max = INT_MIN;
    int second_max = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > max){
            second_max = max;
            max = arr[i];
        }
        if(arr[i] < max && arr[i] > second_max){
            second_max = arr[i];
        }
    }

    return second_max;

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

    cout<<second_largest(arr , n);
}