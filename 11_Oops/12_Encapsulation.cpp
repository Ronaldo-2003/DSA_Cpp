#include<iostream>
using namespace std;

class Student{
    int id;
    string name;

    public:
    void setId(int ID){
        if(ID < 2000) return;
        else id=ID;
    }

    void setName(string NAME){
        name=NAME;
    }

    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
};

int main(){
    Student s;
    s.setId(4000);
    s.setName("Ronaldo");

    cout<<"Id:"<<s.getId()<<endl;
    cout<<"Name:"<<s.getName()<<endl;
}