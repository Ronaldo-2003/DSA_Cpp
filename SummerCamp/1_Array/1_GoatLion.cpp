#include<bits/stdc++.h>
using namespace std;

int MinSwap(vector<char>& arr ){
    int G_count=0,L_count=0;
    int min_swap=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]=='G') G_count++;
        else L_count++;
    }

    int size=min(G_count,L_count);
    int j=arr.size()-1;
    if(size == G_count){
        for(int i=0;i<G_count;i++){
            if(arr[i]=='L'){
                while(j >= G_count && arr[j] != 'G'){
                    j--;
                }
            }
            if(arr[i]=='L' && arr[j]=='G'){
                char temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                min_swap++;
            }
        }
    }
    else{
        for(int i=0;i<L_count;i++){
            if(arr[i]=='G'){
                while(j >= L_count && arr[j] != 'L'){
                    j--;
                }
            }
            if(arr[i]=='G' && arr[j]=='L'){
                char temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                min_swap++;
            }
        }
    }

    return min_swap;

}

int main(){
    vector<char> arr= {'L','G','L','G','L','G','L','G','G'};
    int result=MinSwap(arr);
    cout<<result<<endl;


}