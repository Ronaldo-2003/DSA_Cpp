#include<iostream>
using namespace std;

int main(){

    int a[] = {1,2,3};
    char b[] = "abc";

    cout<<"a:"<<a<<endl; // will give address of 1st block of array a
    cout<<"b:"<<b<<endl;  // will print the whole array -> char array behaves differently
    cout<<"sizeof(a):"<<sizeof(a)<<endl; // 12(3*4)
    cout<<"sizeof(b):"<<sizeof(b)<<endl; // 4(3*1+1) -> 1 is for null character

    char* c = &b[0];
    cout<<"c:"<<c<<endl; // it will print all the characters from given address till it encounters null pointer(\0)

    cout << "Address of the first element of b: " << static_cast<void*>(&b[0]) << endl;
    cout << "Address stored in pointer c: " << static_cast<void*>(c) << endl;

    // Once run in GDB(below code) to clarify

    char c1 = 'a';
    char* pointer_c1 = &c1;

    cout<<"c1:"<<c1<<endl; // it will print the value which is hold by the variable c1
    cout<<"pointer_c1:"<<pointer_c1<<endl; // it will print the value pointed by pointer and will continue to print
    // the values of next blocks until encounters a null pointer

    char str[] = "abcde";
    cout<<"str:"<<str<<endl;
    char* pointer_str = "abcde";  // Wrong way because its pointing towards temporary memory -> abcde not having any address permanently
    cout<<"pointer_str:"<<pointer_str<<endl;

}

