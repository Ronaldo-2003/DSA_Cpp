#include<iostream>
using namespace std ;

void arrange(int arr[] , int n){
    int i =0 , j= n-1;
    int x = 1 , y=2;

    while(i<=j){
        arr[j] = y;
        arr[i] = x;

        i++;
        j--;
        x=x+2;
        y=y+2;
    }
}

int main(){
    int n;
    cout<<"Size:";
    cin>>n;

    int arr[n];

    arrange(arr , n); // calling the function

    cout<<"Elements of the array are:";
    for(int j=0;j<n;j++){   
        cout<<arr[j]<<" ";
    }

}