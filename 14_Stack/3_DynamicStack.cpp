#include<iostream>
#include<climits>
using namespace std;

class Stack{
    int* arr;
    int nextIndex;
    int capacity;

    public:

    Stack(){
        arr = new int[4];
        nextIndex = 0;
        capacity = 4;
    }

    int size(){
        return nextIndex;
    }

    int top(){
        if(isEmpty()){
            cout<<"Stack is empty."<<endl;
            return INT32_MIN;
        }
        else{
            return arr[nextIndex-1];
        }
    }

    bool isEmpty(){
        if(nextIndex <= 0){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int data){
        if(nextIndex >= capacity){
            int* newArr = new int[2* capacity]; // creating a new array double the size of prev one
            
            // copying data of prev arr to new arr
            for(int i=0;i<capacity;i++){
                newArr[i] = arr[i];
            }

            // doubling the capacity
            capacity = 2*capacity;

            // deleting old arr
            delete[] arr;

            // arr should point to new arr
            arr = newArr;
        }
        
        arr[nextIndex] = data;
        nextIndex++;
        
    }

    void pop(){
        if(nextIndex <= 0){
            cout<<"Condition underflow."<<endl;
        }
        else{
            nextIndex--;
        }
    }

};

