#include<iostream>
using namespace std;
#include<algorithm>
#include<deque>
#include<vector>

vector<int> BruteMaxofAllSubarray(vector<int>& nums , int k){
    int n = nums.size();

    int maxi = nums[0];
    // for 1st window
    for(int i=1;i<k;i++){
        maxi = max(maxi , nums[i]);
    }
    vector<int> result;
    result.push_back(maxi);

    int end =n-k; // till where loop will go
    for(int i=1;i<=end;i++){
        maxi=nums[i];
        for(int j=i+1;j<=i+k-1;j++){
            maxi=max(maxi,nums[j]);
        }
        result.push_back(maxi);
    }
    return result;
}

vector<int> MaxofAllSubarrays(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> result;
    deque<int> window;

    // Processing the first window
    for (int i = 0; i < k; ++i) {
        // Remove elements smaller than the current element
        while (!window.empty() && nums[i] >= nums[window.back()]){
            window.pop_back();
        }
        window.push_back(i);
    }

    // Adding maximum of the first window to the result
    result.push_back(nums[window.front()]);

    // Processing subsequent windows
    for (int i = 1; i <= n - k; ++i) {
        // Remove elements outside the current window
        while (!window.empty() && window.front() <= i - 1){
            window.pop_front();
        }
        // Remove elements smaller than the current element
        while (!window.empty() && nums[i + k - 1] >= nums[window.back()]){
            window.pop_back();
        }
        window.push_back(i + k - 1);

        // Add maximum of current window to result
        result.push_back(nums[window.front()]);
    }

    return result;
}
int main(){
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k =3;

    vector<int> result = MaxofAllSubarrays(nums , k);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

}