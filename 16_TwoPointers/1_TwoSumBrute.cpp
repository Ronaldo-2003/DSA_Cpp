#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> TwoSum(vector<int>& num , int target){
    int n = num.size();
    vector<int> result;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(num[i] + num[j] == target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
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