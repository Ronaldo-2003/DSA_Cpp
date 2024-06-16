#include<iostream>
using namespace std;

class Student{
    int id;
public:
    string name;
    int age;

    void setId(int i){
        id =i;
    }

    int getId(){
        return id;
    }
};

int main(){
    Student s1;

    s1.name = "Ronaldo";
    s1.age = 20;
    s1.setId(5403);

    int id = s1.getId();

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<id<<endl;

}
