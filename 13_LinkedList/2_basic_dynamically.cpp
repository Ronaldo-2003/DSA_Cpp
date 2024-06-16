#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};

int main(){

    // creating objects of Node class dynamically
    Node * n1 = new Node(5);
    Node * n2 = new Node(15);

    // storing address of Node n1 in head
    Node * head = n1; // here , & is not used because n1 is itself a pointer

    // connecting nodes of Linked List
    n1->next = n2; // storing address of n2 in next of n1(arrow is used here because n1 is itself a pointer)

    // Accessing data of n1 and n2
    cout<<"Data in n1:"<<n1->data<<endl;
    cout<<"Data in n2:"<<n2->data<<endl;

    // Accessing data of n2 using n1
    cout<<"Data in n2 using n1:"<<n1->next->data<<endl;

    // Accessing data of n1 and n2 using head pointer
    cout<<"Data of n1 using head:"<<head->data<<endl;
    cout<<"Data of n2 using head:"<<head->next->data<<endl;
}