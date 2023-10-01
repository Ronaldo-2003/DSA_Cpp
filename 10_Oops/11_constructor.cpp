#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;
    int age;

    Student(){
        cout<<"Default constructor called."<<endl;
    }

    Student(int id){
        cout<<"Constructor 1 called."<<endl;
        this -> id = id;
    }

    Student(int age , string name){
        cout<<"Constructor 2 called."<<endl;
        this -> age = age;
        this -> name = name;
    }
};

int main(){

    Student s1;  // default constructor called

    Student s2(1000); // constructor 1 called

    Student s3(20,"Ram"); // constructor 2 called

    Student s4(s3);  // copy constructor

    s2 = s1;   // copy assignment operator

    Student s5 = s3;  // copy constructor
}