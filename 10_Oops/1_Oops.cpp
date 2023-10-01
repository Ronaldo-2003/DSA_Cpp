#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;
    int age;

    // Student(int i,string n,int a): id(i) ,name(n) ,age(a){}  // short hand of constructor

};


int main(){
    Student s1; // object statically created
    // assigning properties to s1
    s1.id = 5403;
    s1.name = "Ronaldo";
    s1.age = 19;
    
    // accessing properties of s1
    cout<<"Properties of s1:"<<endl;
    cout<<"id:"<<s1.id<<endl;
    cout<<"name:"<<s1.name<<endl;
    cout<<"age:"<<s1.age<<endl;
    cout<<endl;

    Student s2;  // object statically created 
    // assigning properties to s2
    s2.id = 10000;
    s2.name = "Aman";
    s2.age = 19;

    // accessing properties of s2
    cout<<"Properties of s2:"<<endl;
    cout<<"id:"<<s2.id<<endl;
    cout<<"name:"<<s2.name<<endl;
    cout<<"age:"<<s2.age<<endl;
    cout<<endl;

    // s3 is dynamically created
    Student * s3 = new Student();
    // we will use arrow operator instead of dot because of use of pointer
    s3->id = 5000;   // (*s3).id = 5000;
    s3->name = "Akash";
    s3->age = 20;
    
    // accessing properties of s3
    cout<<"Properties of s3:"<<endl;
    cout<<"id:"<<s3->id<<endl;
    cout<<"name:"<<s3->name<<endl;
    cout<<"age:"<<s3->age<<endl;

    return 0;
}

