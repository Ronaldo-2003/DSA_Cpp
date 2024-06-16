#include<iostream>
using namespace std;
#include"7_TemplatesDiffData.cpp"

int main(){
    Pair<int , float> p1;
    // creating object dynamically
    // Pair<int , float>* p1 = new Pair<int , float>();
    p1.setX(20);
    p1.setY(25.5);

    cout<<"For object p1:"<<endl;
    cout<<"X:"<<p1.getX()<<endl;
    cout<<"Y:"<<p1.getY()<<endl;

    Pair<char , int> p2;
    p2.setX('M');
    p2.setY(20);

    cout<<"For object p2:"<<endl;
    cout<<"X:"<<p2.getX()<<endl;
    cout<<"Y:"<<p2.getY()<<endl;

    

}