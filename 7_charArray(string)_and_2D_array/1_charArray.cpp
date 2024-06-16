#include<iostream>
using namespace std;

int main(){

    // int a[40]; // declaring an integer array(size -> 160 bytes)
    // int n;
    // cout<<"Size:";
    // cin>>n;  // taking size as input

    // cout<<"Input array elements:";
    // for(int i=0;i<n;i++){   // taking input for array
    //     cin>>a[i];
    // }

    // cout<<"Elements of array are:";  // printing the elements of array
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }

    // cout<<endl;

    // cout<<"Size of a:"<<sizeof(a)<<endl;

    // char b[40];  // declaring a character array(size -> 40 bytes)
    // cout<<"Give the character:";
    // cin>>b; // taking character input -> no need to use a loop to take input (char array behaves differently)
    // cout<<"The character array is:"<<b<<endl; // printing char array -> it will print the array instead of address in case of other types of arrays
    // cout<<"Size of b:"<<sizeof(b)<<endl;

    // cout<<"a:"<<a<<endl;  // it will print the address of array a
    // cout<<"b:"<<b<<endl;  // it will print the characters contained in the the array b till it finds null character

    char name[100];
    cout<<"Enter the name:";
    cin>>name;
    cout<<"size of name array:"<<sizeof(name)<<endl;
    cout<<"name:"<<name<<endl;

    name[8] = 'm';  // has added m at 8th index 
    cout<<"name:"<<name<<endl;  // but its not showing because it encounters null character(/0)

    name[7] = 'a';  // a is added at the same position where the null character is present
    cout<<"name:"<<name<<endl; // because null character has been repalced by another character , it will print till it finds null character

    // now place null character at an index , then it wont print anything after that
    name[4] = '\0';
    cout<<"name:"<<name<<endl;

}