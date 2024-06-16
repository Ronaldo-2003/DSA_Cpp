#include<iostream>
#include<cstring>
using namespace std;

// using char array -> recursive method
bool checkPalindrome_charArray(char str[]){
    int length = strlen(str);
    if(length <= 1){
        return true;
    }
    else if(str[0] != str[length-1]){
        return false;
    }
    str[length-1] = '\0';
    return checkPalindrome_charArray(str+1);
}

// using string -> recursive method
bool checkPalindrome_string(string str){
    int length = str.length();
    if(length <= 1){
        return true;
    }
    else if(str[0] != str[length-1]){
        return false;
    }
    return checkPalindrome_string(str.substr(1,length-2));
}


int main(){
    // using char array -> recursive method
    // char array[100];
    // cout<<"Give input array:";
    // cin>>array;
    // int answer = checkPalindrome_charArray(array);
    // if(answer == 1){
    //     cout<<"The character array is palindrome."<<endl;
    // }else{
    //     cout<<"The character array is not palindrome."<<endl;
    // }

    // using string -> recursive method
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