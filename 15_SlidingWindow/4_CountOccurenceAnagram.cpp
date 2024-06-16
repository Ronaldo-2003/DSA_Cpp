#include<iostream>
using namespace std;
#include<map>
#include<vector>

int BruteCountAnagram(string s , string p){
    int n = s.length();
    int m = p.length();

    map<char , int> freq_s;
    map<char , int> freq_p;

    // storing freq. of every char of p in freq_p
    for(auto it : p){
        freq_p[it]++;
    }

    // storing freq. of every char of 1st window in freq_s
    for(int i=0;i<m;i++){
        char c = s[i];
        freq_s[c]++;
    }

    int count=0;
    int flag =0;
    // checking anagram in 1st window
    for(auto pair:freq_p){
        auto it = freq_s.find(pair.first);
        if(it == freq_s.end() || freq_s[pair.first] != pair.second){
            flag=1;
            break;
        }
    }
    if(flag==0){
        count++;
    }

    int end = n-m; // till where i will go
    // now checking for anagram in rest of the string s , window-wise
    for(int i=1;i<=end;i++){
        freq_s[s[i-1]]--; // removing freq. of char which is not in window now
        freq_s[s[i+m-1]]++; // adding freq. of char which is now included in window

        flag=0;

        for(auto pair : freq_p){
            auto it = freq_s.find(pair.first);
            if(it == freq_s.end() || freq_s[pair.first] != pair.second){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
    }

    return count;

}

int CountAnagram(string s , string p){
    int n = s.length();
    int m = p.length();

    // creating 2 vectors to store the freq. of char 
    vector<int> freq_s(26,0); // size 26 , all initialised to 0
    vector<int> freq_p(26,0);

    // storing freq. of char of string p
    for(char it : p){
        freq_p[it - 'a']++;
    }

    // storing freq. of char of 1st window
    for(int i=0;i<m;i++){
        freq_s[s[i] - 'a']++;
    }

    int count =0; // to store count of anagram

    // checking whether 1st window is anagram or not
    int flag=0;
    for(int i=0;i<26;i++){
        if(freq_p[i] != freq_s[i]){
            flag=1;
            break;
        }
    }

    if(flag ==0){
        count++;
    }

    int end = n-m; // till where i will go
    for(int i=1;i<=end;i++){
        // subtracting freq. of char. which no longer part of window
        freq_s[s[i-1] - 'a']--;

        // adding freq. of char. which just became part of window
        freq_s[s[i+m-1] - 'a']++;

        flag=0;
        // now checking for anagrams in rest of the window
        for(int j=0;j<26;j++){
            if(freq_s[j] != freq_p[j]){
                flag=1;
                break;
            }
        }

        if(flag==0){
            count++;
        }
    }
    return count;
}

int main(){
    string s= "aabaabaa";
    string p = "aaba";

    int count = CountAnagram(s,p);
    cout<<count<<endl;
}