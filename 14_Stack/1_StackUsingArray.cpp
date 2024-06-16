#include<iostream>
#include<climits>
using namespace std;

class Stack {
    private:
    int* arr;      // Pointer to an array for stack implementation
    int nextIndex;  // Index where the next element will be inserted
    int capacity;  // to keep track whether my stack is full or not

    public:
    // Constructor to allocate size to array
    Stack(int maxSize) {
        arr = new int[maxSize];  // Dynamically allocate memory for the array
        nextIndex = 0;             // Initializing nextIndex to 0, as the stack is initially empty
        capacity = maxSize;
    }


    // returning the size of the stack
    int size(){
        return nextIndex;
    }

    // method to check whether stack is empty or not
    bool isEmpty(){
        // if(nextIndex == 0){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        return nextIndex ==0 ; // -> short form of above code
    }

    // returning top element
    int top(){
        if(isEmpty()){
            cout<<"Stack is empty."<<endl;
            return INT32_MIN;
        }
        else{
            return arr[nextIndex-1];
        }
    }

    // method to insert element at last of stack
    void push(int data){
        if(nextIndex >= capacity){
            cout<<"Condition overflow."<<endl; // if stack is full but still want to insert element
            return;
        }
        arr[nextIndex] = data;
        nextIndex++;
        
    }

    // method to delete element from last of stack
    void pop(){
        if(nextIndex <= 0){
            cout<<"Condition underflow."<<endl;  // if stack is empty but still want to remove element
        }
        else{
            nextIndex--;
        }
    }

    // method to show elements of stack
    void show(){
        if(isEmpty()){
            cout<<"Stack is empty.";
        }
        else{
            cout<<"Elements of stack are:";
            for(int i=0;i<nextIndex;i++){
                cout<<arr[i]<<" ";
            }
        }
    }

};

