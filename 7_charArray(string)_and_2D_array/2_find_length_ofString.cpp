#include<iostream>
using namespace std;

int length_of_string(char arr[] ){
    int count = 0;
    for(int i=0;arr[i] != '\0' ; i++){
        count++;
    }
    return count;

}

int main(){

    char array[100];
    cout<<"Give input array:";
    cin>>array;

    int length = length_of_string(array );
    cout<<"The length of string:"<<length<<endl;

}
