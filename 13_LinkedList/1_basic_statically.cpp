#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

int main(){

    // creating object of Node class statically
    Node n1(5);
    Node * head = &n1; // storing address of Node n1 in head 

    cout<<"Data in Node n1:"<<n1.data<<endl; // printing data of Node n1

    // creating 2nd object of Node class statically
    Node n2(15);
    n1.next = &n2; // storing address of Node n2 in next of n1
    cout<<"Data in node n2:"<<n2.data<<endl; // printing data of Node n2
    cout<<"Data in node n2 using n1:"<<n1.next->data<<endl; // since , n1.next is a pointer, we are using arrow operator instead of dot 

    // printing data of n1 and n2 using head
    cout<<"Data in n1 using head:"<<head->data<<endl;
    cout<<"Data in n2 using head:"<<head->next->data<<endl;

}