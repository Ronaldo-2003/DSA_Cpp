#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

Node* TakeInput(){
    int data;
    cout<<"Give data for new node:";
    cin>>data;

    Node* head = NULL;
    Node* tail = NULL;

    while(data != -1){
        Node* newNode = new Node(data);

        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }

        cout<<"Give data for new node:";
        cin>>data;
    }

    return head;
}

void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* Insert(Node* head , int i , int data){
    if(i ==0){
        Node* temp = head;
        Node* newNode = new Node(data);
        head = newNode;
        head->next = temp;
    }
    else{
        int count = 1;
        while(count < i){
            head = head->next;
            count++;
        }
        Node* temp = head->next;
        Node* newNode = new Node(data);
        head->next = newNode;
        head->next->next = temp;
        }
    return head; 
}

int main(){
    Node* head = TakeInput();
    cout<<"Elements of Linked List are:";
    print(head);

    int i;
    cout<<"Give position at which you want to insert data:";
    cin>>i;

    int data;
    cout<<"Give the data you want to insert:";
    cin>>data;

    head = Insert(head , i , data);
    cout<<"Elements of Linked List after addition of new node are:";
    print(head);
}