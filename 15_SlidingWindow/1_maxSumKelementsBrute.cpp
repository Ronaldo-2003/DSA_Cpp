#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSum(vector<int> &arr , int k){
    if(k > arr.size()) return -1;

    int maxSum = 0;

    int n = arr.size();
    int end = n-k; // end-> till where outer loop will run

    for(int i=0;i<=end;i++){
        int currSum =0;
        for(int j=i;j<i+k;j++){
            currSum+=arr[j];
        }
        maxSum=max(currSum,maxSum);
    }
    return maxSum;
}

int main(){
    vector<int> arr = {4,-1,0,3,4};

    int k;
    cout<<"Give the value of k:";
    cin>>k;

    int maxsum = maxSum(arr,k);
    cout<<"Maximum sum is:"<<maxsum<<endl;

}