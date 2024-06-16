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

void print(Node * head){ // has its own copy of head , not original head
    while(head != NULL){
        cout<<head->data<<" ";
        head = head -> next;
    }

    cout<<endl;
}

int main(){
    // creating 5 nodes of Node class dynamically
    Node * n1 = new Node(15);
    Node * n2 = new Node(25);
    Node * n3 = new Node(35);
    Node * n4 = new Node(45);
    Node * n5 = new Node(55);

    // creating head to store address of 1st node
    Node * head = n1;

    // Linking nodes of Linked List
    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    n4 -> next = n5;

    cout<<"Elements of Linked List are:";
    print(head);


}

