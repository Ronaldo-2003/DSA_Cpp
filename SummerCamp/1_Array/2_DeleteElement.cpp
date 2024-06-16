#include<bits/stdc++.h>
using namespace std;

int MinOps(vector<int>& arr){
    map<int,int> freq;
    for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
    }

    int minops=0;
    for(auto it : freq){
        if(it.second % 3 ==0){
            minops+=it.second/3;
        }else if()
    }
}

int main(){
    vector<int> arr = {2,3,3,2,2,4,2,3,4};
}