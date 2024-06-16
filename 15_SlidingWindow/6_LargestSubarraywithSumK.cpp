#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int BruteLargestSubarraywithSumK(vector<int>& nums , int k){
    int n = nums.size();
    int maxi=0;

    for(int i=0;i<n;i++){
        int sum=0 ;
        for(int j=i;j<n;j++){
            sum = sum+nums[j];
            if(sum ==k){
                int curr=j-i+1;
                maxi=max(curr,maxi);
                break;
            }
            else if(sum > k){
                break;
            }
        }
    }
    return maxi;

}

// variable size window
int LargestSubarraywithSumK(vector<int>& nums , int k){
    int n = nums.size();
    int maxi=0;
    int i=0 , j=0;
    int sum=0;
    
    while(j<n){
        sum=sum+nums[j];
        if(sum==k){
            maxi = max(maxi , j-i+1);
        }
        else if(sum > k ){
            while(sum > k){
                sum = sum - nums[i];
                i++;
            }
        }
        j++;
    }
    
    return maxi;
}

int main(){
    vector<int> nums = {4,1,1,1,2,3,5};
    int k=5;

    int result = LargestSubarraywithSumK(nums , k);
    cout<<"Size of largest subarray is : "<<result<<endl;
}