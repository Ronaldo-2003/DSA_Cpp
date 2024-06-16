#include<iostream>
using namespace std;

class Student{
    public:
    int batch;
    string branch;

    Student(int batch , string branch){
        this -> batch = batch;
        this -> branch = branch;
    }

    void display(){
        cout<<batch<<"  "<<branch<<endl;
    }
};

int main(){
    Student s1(2025,"CSE");
    Student s2(2024,"ECE");

    cout<<"batch"<<"  "<<"branch"<<endl;
    s1.display();
    s2.display();

    // we have created both the objects and by mistake details in s2 is wrong
    // properties of s2 is same as s1 (ofcourse copy constructor cant be used now)

    //copying properties of s1 in s2
    // s2.batch = s1.batch; // here we have to do it manually for every property
    // s2.branch = s1.branch;

    // we can use copy assignment operator to copy all prop of s1 in s2
    s2 = s1;

    s1.display();
    s2.display();

}