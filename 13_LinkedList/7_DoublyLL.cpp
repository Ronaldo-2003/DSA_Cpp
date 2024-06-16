#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->back = NULL;
    }
    
    Node(int data , Node* next , Node* back){
        this->data = data;
        this->next = next;
        this->back = back;
    }
};

int main(){
    Node* n1 = new Node(15);
    Node* head = n1;
    
    Node* n2 = new Node(25);
    n1->next = n2;
    n2->back = n1;
    
    Node* n3 = new Node(35);
    n2->next = n3;
    n3->back = n2;
    
    Node* tail = n3;
    
    cout<<"Data of doubly LL are:";
    while(head->next != nullptr){
        cout<<head->data<<" ";
        head= head->next;
    }
    cout<<head->data<<endl;
    
    cout<<"Data of doubly LL in reverse order are:";
    while(tail->back != NULL){
        cout<<tail->data<<" ";
        tail=tail->back;
    }
    cout<<tail->data<<endl;
    
    
}