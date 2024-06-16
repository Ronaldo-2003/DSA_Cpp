#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int age;
private:
    int id;
    //  Student(string n , int a , int i): name(n) , age(a) , id(i) {}  // Can't do here because it will become private and we cant assign values from main

public:
    int getId(){
        return id;
    }
    Student(string n , int a , int i): name(n) , age(a) , id(i) {}
};

int main(){

    Student s1("Ronaldo" , 20, 5403);

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    // cout<<s1.id<<endl;    // Will show error in this line because id is private member of class
    int result = s1.getId();
    cout<<result<<endl;
}
