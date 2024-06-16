#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this -> data = data;
        next = NULL;
    }
};

// n1=15 , n2=25 , n3=35 , n4=45 , n5=55

int main(){

    // creating 5 nodes dynamically
    Node * n1 = new Node(15);
    Node * n2 = new Node(25);
    Node * n3 = new Node(35);
    Node * n4 = new Node(45);
    Node * n5 = new Node(55);

    // storing address of n1 in head pointer
    Node * head = n1;

    // connecting nodes of Linked List
    n1->next = n2;  // storing address of n2 in next of n1
    n2->next = n3;  // storing address of n3 in next of n2
    n3->next = n4;  // storing address of n4 in next of n3
    n4->next = n5;  // storing address of n5 in next of n4

    // Accessing data of nodes
    cout<<"Data in node n1:"<<n1->data<<endl;
    cout<<"Data in node n2:"<<n2->data<<endl;
    cout<<"Data in node n3:"<<n3->data<<endl;
    cout<<"Data in node n4:"<<n4->data<<endl;
    cout<<"Data in node n5:"<<n5->data<<endl;

    cout<<endl;

    // Accessing data of every node from head pointer
    cout<<"Data of n1 from head:"<<head->data<<endl;
    cout<<"Data of n2 from head:"<<head->next->data<<endl;
    cout<<"Data of n3 from head:"<<head->next->next->data<<endl;
    cout<<"Data of n4 from head:"<<head->next->next->next->data<<endl;
    cout<<"Data of n5 from head:"<<head->next->next->next->next->data<<endl;
}