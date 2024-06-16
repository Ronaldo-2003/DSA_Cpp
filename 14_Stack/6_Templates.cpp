#include<iostream>
using namespace std;
#include"5_Templates.cpp"

int main(){
    Pair<int> p1;
    p1.setX(15);
    p1.setY(20);

    cout<<"For object p1:"<<endl;
    cout<<"X:"<<p1.getX()<<endl;
    cout<<"Y:"<<p1.getY()<<endl;

    Pair<float> p2;
    p2.setX(20.5);
    p2.setY(90.1);

    cout<<"For object p2:"<<endl;
    cout<<"X:"<<p2.getX()<<endl;
    cout<<"Y:"<<p2.getY()<<endl;

    Pair<char> p3;
    p3.setX('A');
    p3.setY('Z');

    cout<<"For object p3:"<<endl;
    cout<<"X:"<<p3.getX()<<endl;
    cout<<"Y:"<<p3.getY()<<endl;
}