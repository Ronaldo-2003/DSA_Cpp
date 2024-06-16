#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSum(vector<int> &num , int k){
    int n = num.size();
    if(k>n) return -1;
    if(n==1) return num[0];

    int currsum =0;
    for(int i=0;i<k;i++){
        currsum+=num[i];
    }

    if(k==n) return currsum;

    int maxsum = currsum;
    int end = n-k; // till where loop will go

    for(int i=1;i<=end;i++){
        currsum+=num[i+k-1] -num[i-1];
        maxsum = max(currsum,maxsum);
    }
    return maxsum;
}

int main(){
    vector<int> arr = {4,-1,0,3,4};

    int k;
    cout<<"Give the value of k:";
    cin>>k;

    int maxsum = maxSum(arr,k);
    cout<<"Maximum sum is:"<<maxsum<<endl;

}