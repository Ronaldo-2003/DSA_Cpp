#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& arr , int target){
    int l=0,r=arr.size()-1;

    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid] < target){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2,3,6,7,9,17,46};
    int target;
    cout<<"Give target:";
    cin>>target;

    int ans=BinarySearch(arr,target);
    cout<<"Index of target:"<<ans<<endl;
}