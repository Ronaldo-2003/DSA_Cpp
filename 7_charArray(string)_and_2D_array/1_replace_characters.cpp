#include<iostream>
using namespace std;

void replace_character_iterative(char arr[] ,char char1 , char char2){
    int length = 0;
    for(int i=0; arr[i] != '\0' ; i++){
        length++;
    }

    for(int i=0;i<length;i++){
        if(arr[i] == char1){
            arr[i] = char2;
        }
    }

}

void replace_character_recursive(char arr[] , char char1 , char char2 , int length){
    if(length == 0){
        return ;
    }
    if(arr[0] == char1){
        arr[0] = char2;
    }
    length--;
    return replace_character_recursive(arr+1 , char1 , char2 , length);
    
}

int main(){

    char array[100];
    cout<<"Give input array:";
    cin>>array;

    char char1;
    cout<<"Give the character to be replaced:";
    cin>>char1;

    char char2;
    cout<<"Give the character you want to replace with:";
    cin>>char2;

    replace_character_recursive(array , char1 , char2 , 5);

    cout<<"The new array is:"<<array<<endl;
}