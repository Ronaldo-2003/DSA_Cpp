#include<iostream>
using namespace std;
#include<vector>
#include<queue>

vector<int> BruteFirstNegative(vector<int>& nums , int k){ // 1st -ve no. in every window of size k
    int i=0 , j=i+k-1;
    vector<int> result;

    int n = nums.size();
    int end = n-k;

    for(int i=0;i<=end;i++){
        int flag=0;
        for(int x=i;x<=j;x++){
            if(nums[x] < 0){
                result.push_back(nums[x]);
                flag=1;
                break;
            }
        }
        if(flag==0){
            result.push_back(0);
        }
        j++;
    }
    return result;
}

vector<int> FirstNegative(vector<int> &nums , int k){
    int n = nums.size();

    vector<int> result; // to store the result
    queue<int> window;  // to store the indices of -ve no. within particular window

    // storing indices of -ve no. present in 1st window
    for(int i=0;i<k;i++){
        if(nums[i] < 0){
            window.push(i);
        }
    }

    // storing result for 1st window
    if(!window.empty()){
        result.push_back(nums[window.front()]);
    }
    else{
        result.push_back(0);
    }

    int end = n-k; // till where i will go
    for(int i=1;i<=end;i++){
        // checking whether the -ve no's index is in this window or not(if not -> pop it out)
        if(!window.empty() && window.front() < i){
            window.pop();
        }

        // if item included in window is -ve , store its index in window
        if(nums[i+k-1] < 0){
            window.push(i+k-1);
        }

        if(!window.empty()){
            result.push_back(nums[window.front()]);
        }
        else{
            result.push_back(0);
        }
    }
    return result;

}

int main(){
    vector<int> nums = {12,-1,-7,8,-15,30,16,28};
    int k = 3;

    vector<int> result;
    result = FirstNegative(nums,k);

    cout<<"Result vector is:";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}