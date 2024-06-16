#include<iostream>
using namespace std;

class Student{
    int id;
public:
    string name;
    int age;

    void setId(int i , int password){
        if(password != 4500){
            return;
        }
        if(i<5000){
            return;
        }
        id = i;
    }

    int getId(){
        return id;
    }
};

int main(){
    Student s1;
    s1.name = "Ronaldo";
    s1.age = 20;
    s1.setId(5403,4500);

    int id = s1.getId();

    cout<<id<<endl;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
}
