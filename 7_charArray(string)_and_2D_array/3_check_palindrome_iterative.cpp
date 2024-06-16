#include<iostream>
using namespace  std;

// approach 1 -> using char array iterative method
bool checkPalindrome_charArray(char str[]) {
    int length =0;
    for(int i=0;str[i] != '\0' ;i++){
        length++;
    }
    int j =length-1;
    for(int i=0;i<=j;i++){
        if(str[i] != str[j]){
            return false;
        }
        j--;
    }
    return true;
}

// approach 2 -> using string iterative approach
bool checkPalindrome_string(string str){
    int length = str.length();
    int i =0 , j= length -1;
    while(i<=j){
        if(str[i] != str[j]){
            return false;
        }
        i++ , j--;
    }
    return true;
}


int main(){
    // approach 1 -> using char array iterative method
    // char array[100];
    // cout<<"Give input array:";
    // cin>>array;
    // int answer = checkPalindrome_charArray(array);
    // if(answer == 1){
    //     cout<<array<<" is palindrome."<<endl;
    // }else{
    //     cout<<array<<" is not palindrome."<<endl;
    // }

    // approach 2 -> using string iterative approach
    string str;
    cout<<"Give input string:";
    cin>>str;
    int answer = checkPalindrome_string(str);
    if(answer == 1){
        cout<<str<<" is palindrome."<<endl;
    }else{
        cout<<str<<" is not palindrome."<<endl;
    }

    
}
