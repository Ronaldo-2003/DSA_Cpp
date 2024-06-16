#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr , int low , int mid , int high){
    int left=low , right=mid+1;
    //temp arr to store sorted elements
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
     // if elements in left arr is left and right is exhausted
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    // if elements in right arr is left and left is exhausted
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    // now copying elements from temp to original arr
    for(int i=0;i<temp.size();i++){
        arr[low+i] = temp[i];
    }
}

void mergeSort(vector<int>& arr , int low , int high){
    if(low>=high) return;
    int mid = low+(high-low)/2;
    mergeSort(arr,low,mid); // dividing left part
    mergeSort(arr,mid+1,high); // diving right part
    merge(arr,low,mid,high); // merging in sorted manner
}

int main(){
    vector<int> arr = {4,7,3,9,6};
    mergeSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}