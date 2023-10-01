#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;
    int age;

    Student(int id , string name , int age){
        cout<<"Default constructor called."<<endl;
        this -> id = id;
        this -> name = name;
        this -> age = age;
    }

    void display(){
        cout<<id<<" "<<name<<" "<<age<<endl;
    }

    ~Student(){
        cout<<"Destructor called."<<endl;
    }
};

int main(){
    Student s1(1000,"Ram",20);
    s1.display();
    
}
// destructor for dynamically created object using delete 