#include<iostream>
using namespace std;

int main()
{


    /*
    Operators-
    1.Arithmetic(+ , - , * , / , %) (Priority of + and - is same , Priority of * and / is same , Modulo(%) gives remainder.)
    2.Relational(== , < , > , != , >= , <= ) (All of these will give Boolean(bool) value in the form of 0 and 1.)
    3.Logical (&&(and -> true only if both statements are true) , ||(or -> true even one of them is true) , !(negation))

     */

    cout<<"Arithmetic Operators:-"<<endl;

    cout<<"Sum of 2 and 3 is:"<<2+3<<endl;
    cout<<"Difference of 3 and 2 is:"<<3-2<<endl;
    cout<<"Product of 3 and 2 is:"<<3*2<<endl;
    cout<<"Division of 3 and 2 is:"<<3.0/2<<endl;
    cout<<"Remainder when of 3 is divided by 2 is:"<<3%2<<endl;


    cout<<"Relational Operators:-"<<endl;  // (expressions to be put in round brackets)

    cout<<"5==7:"<<(5==7)<<endl;
    cout<<"5<7:"<<(5<7)<<endl;
    cout<<"5>7:"<<(5>7)<<endl;
    cout<<"6!=7:"<<(6!=7)<<endl;
    cout<<"5<=7:"<<(5<=7)<<endl;
    cout<<"5>=7:"<<(5>=7)<<endl;


    cout<<"Logical Operators:-"<<endl;

    cout<<"(5>1 && 9>8):"<<(5>1 && 9>8)<<endl;
    cout<<"(5>1 || 9>18):"<<(5>1 && 9>8)<<endl;




}

