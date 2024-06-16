#include<iostream>
using namespace std;
#include"7_TemplatesDiffData.cpp"

int main(){
    // goal is to create a triplet using Pair class
    // 1st value should be float , 2nd= int , 3rd =int

    // creating an object with(int , int) so that it can be 2nd argument in main pair class
    // object created dynamically  // prefer creating statically while using templates
    Pair<int , int>* p1 = new Pair<int , int>();
    p1->setX(20);
    p1->setY(30);

    // creating object of main pair class
    Pair<float , Pair<int , int>>* p = new Pair<float , Pair<int , int>>();
    p->setX(25.5);
    p->setY(*p1);

    // printing values of triplets using object p

    //printing 1st value
    cout<<p->getX()<<endl;
    //printing 2nd value
    cout<<p->getY().getX()<<endl; // used dot operator because it will return object not pointer
    //printing 3rd value
    cout<<p->getY().getY()<<endl; // used dot operator because it will return object not pointer

}