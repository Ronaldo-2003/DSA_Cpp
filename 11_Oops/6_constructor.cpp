#include<iostream>
using namespace std;

class Student{
    int id;
public:
    string name;
    int age;

    void display(){
        cout<<id<<" "<<name<<" "<<age<<endl;
    }

    // Default constructor
    Student(){
        cout<<"Default constructor called."<<endl;
    }

    // Parameterized constructor called
    Student(int a){
        cout<<"Constructor 2 called."<<endl;
        id = a;
    }

    // we can create as many constructor as we want in a class but they should be distinguishable from one another
    Student(int i , string n){
        cout<<"Constructor 3 called."<<endl;
        id = i;
        name = n;
    }
};

int main(){
    Student s1;
    // For any object a constructor will be called only once (not less than that not more than that)
    s1.name = "Aman";
    s1.display();

    cout<<endl;

    Student s2(5403);
    // A constructor will be called during creation of an object
    s2.name = "Ronaldo";
    s2.display();

    cout<<endl;
    Student s3(5000,"Ram");
    s3.display();


}
