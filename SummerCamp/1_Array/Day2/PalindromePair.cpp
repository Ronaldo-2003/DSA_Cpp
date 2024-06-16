#include <bits/stdc++.h>
using namespace std;

bool PalindromeChecker(string s) {
    int i = 0, j = s.length() - 1;
    while (i <= j) {
        if (s[i] != s[j]) {
            return false;
        } else {
            i++, j--;
        }
    }
    return true;
}

vector<vector<pair<int, int>>> PalindromePair(vector<string>& arr) {
    vector<vector<pair<int, int>>> result;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            string s = arr[i] + arr[j];
            if(i!=j){
                if (PalindromeChecker(s) == true) {
                vector<pair<int, int>> res;
                res.push_back(make_pair(i, j));
                result.push_back(res);
            }
            }
        }
    }
    return result;
}

int main() {
    vector<string> arr = {"abcd", "dcba", "lls", "s", "sssll"};
    vector<vector<pair<int, int>>> result = PalindromePair(arr);
    for (int i = 0; i < result.size(); i++) {
        for(int j=0;j<result[i].size();j++){
            cout<<(result[i][j]).first<<" ";
        }
        cout<<endl;
    }
}