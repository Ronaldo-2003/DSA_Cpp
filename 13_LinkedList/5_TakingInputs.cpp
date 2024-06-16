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

Node * TakeInput(){
    int data;
    cout<<"Input data for new node:";
    cin>>data;

    Node * head = NULL;
    Node * tail = NULL;

    while(data != -1){
        Node *  newNode = new Node(data);
        
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cout<<"Input data for new node:";
        cin>>data;
    }

    return head;
    
}

void print(Node * head){  // has its own copy of head , not original head
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node * head = TakeInput();
    cout<<"Nodes of linked list are:";
    print(head);

}