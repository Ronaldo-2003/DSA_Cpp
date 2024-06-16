#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> TwoSum(vector<int>& num , int target){
    vector<int> result;
    int start =0 , end = num.size()-1;

    while(start < end){
        if(num[start] + num[end] == target){
            result.push_back(start);
            result.push_back(end);
            return result;
        }
        if(num[start] + num[end] > target){
            end--;
        }
        else{
            start++;
        }
    }

    result.push_back(-1);
    return result;
}

int main(){
    vector<int> num = {-4,-1,0,3,4};

    int target;
    cout<<"Give the target value:";
    cin>>target;

    vector<int> result = TwoSum(num , target);
    if(result.size() == 1){
        cout<<"No such pair is found ."<<endl;
    }
    else{
        cout<<"The elements are at the indices: "<<result[0]<<","<<result[1]<<endl;
    }
}