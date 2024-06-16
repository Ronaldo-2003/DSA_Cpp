#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;
    int age;

    Student(int id , string name , int age){
        // this keyword is a pointer which holds the address of the current object 
        cout<<"this:"<<this<<endl;
        // explicitly tells the compiler to assign the value of the id parameter to the id member variable of the current object
        this -> id = id;
        this -> name = name ;
        this -> age = age;
    }
};

int main(){
    Student s1(5403,"Ronaldo",20);
    cout<<"address of s1:"<<&s1<<endl;
    cout<<"id:"<<s1.id<<endl;
    cout<<"name:"<<s1.name<<endl;
    cout<<"age:"<<s1.age<<endl;

    cout<<endl;

    Student s2(5000,"Ram",19);
    cout<<"address of s2:"<<&s2<<endl;
    cout<<"id:"<<s2.id<<endl;
    cout<<"name:"<<s2.name<<endl;
    cout<<"age:"<<s2.age<<endl;
}