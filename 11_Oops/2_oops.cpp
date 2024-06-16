#include<iostream>
using namespace std;
// #include"1_Oops.cpp"

class Sweet{
    public:
    string name;
    int weight_gm;
    int price;

    // use of constructor to create objects as well as assigning values to them
    Sweet(string n , int w, int p) : name(n) , weight_gm(w) , price(p) {}
};

int main(){
    // Student s1(15,"Aman",95);

    Sweet sw1("Rassogulla" , 10 , 35);
    Sweet sw2("Gulabjamun" , 15 , 25);


    cout<<sw1.name<<endl;
    cout<<sw1.weight_gm<<endl;
    cout<<sw1.price<<endl;

    cout<<sw2.name<<endl;
    cout<<sw2.weight_gm<<endl;
    cout<<sw2.price<<endl;

    // cout<<s1.id<<endl;
    // cout<<s1.name<<endl;
    // cout<<s1.age<<endl;


    return 0;
}
