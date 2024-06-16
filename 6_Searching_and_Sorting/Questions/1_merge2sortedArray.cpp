#include<iostream>
using namespace std;

void merge2sortedArray(int n1 , int arr1[] , int n2 , int arr2[] , int n3 , int arr3[]){

    int i = 0 , j = 0 , k = 0;

    while(k < n3){

        if(i<n1 && j<n2){
            if(arr1[i] < arr2[j]){
                arr3[k] = arr1[i];
                i++;
            }
            else{
                arr3[k] = arr2[j];
                j++;
            }
        }

        else if(i<n1){
            arr3[k] = arr1[i];
            i++;
        }

        else{
            arr3[k] = arr2[j];
            j++;
        }

        k++;
    }

}

int main(){

    int n1;
    cout<<"Size1:";
    cin>>n1;

    int arr1[n1];  
    cout<<"Input Elements:"; 
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    int n2;
    cout<<"Size2:";
    cin>>n2;

    int arr2[n2];  
    cout<<"Input Elements:"; 
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    int n3 = n1 + n2;
    int arr3[n3];

    merge2sortedArray(n1 , arr1 , n2 , arr2 , n3 , arr3) ;

    cout<<"The elements of final sorted array are:";
    for(int i=0;i<n3;i++){
        cout<<arr3[i]<<" ";
    }


}