#include<iostream>
using namespace std;

class Sweet{
    public:
    string name;
    int weight_gm;
    int price;

    Sweet(int weight_gm , int price){
        this -> weight_gm = weight_gm;
        this -> price = price;
    }
};

int main(){
    Sweet s1(30,45);
    s1.name = "Rassogulla";

    cout<<"Properties of s1:"<<endl;
    cout<<"name:"<<s1.name<<endl;
    cout<<"weight_gm:"<<s1.weight_gm<<endl;
    cout<<"price:"<<s1.price<<endl;

    cout<<endl;

    Sweet s2(s1); // copy constructor -> it copies properties of some other object in an object(copying properties of s1 in s2)
    s2.name = "GulabJamun";
    cout<<"Properties of s2:"<<endl;
    cout<<"name:"<<s2.name<<endl;
    cout<<"weight_gm:"<<s2.weight_gm<<endl;
    cout<<"price:"<<s2.price<<endl;

    // some part remaining(pointer)
}