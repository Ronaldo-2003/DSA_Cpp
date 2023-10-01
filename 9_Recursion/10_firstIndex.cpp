#include<iostream>
using namespace std;

int FirstIndex(int input[], int size, int x) {
    if (size <= 0) {
        return -1;
    }
    if (input[0] == x) {
        return 0;
    }
    int result = FirstIndex(input+1,size-1,x);

    if(result != -1){
        return result+1;
    }
    return -1;
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;

    int result = FirstIndex(arr,n,x);
    cout<<result<<endl;
}
