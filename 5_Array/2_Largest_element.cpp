#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cout<<"Size:";
    cin>>n;

    int arr[n];
    cout<<"Input the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max= INT_MIN;
    int i=0;
    while(i<n){
        if (arr[i] > max){
            max=arr[i];
        }
        i++;
    }

    cout<<"Largest element:"<<max<<endl;
}
