template<typename T>

class Stack{
    T* arr;
    int nextIndex;
    int capacity;

    public:

    Stack(){
        arr = new T[4];
        nextIndex=0;
        capacity=4;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex==0;
    }

    T top(){
        if(isEmpty()){
            cout<<"Stack is empty."<<endl;
            return INT_MIN;
        }
        else{
            return arr[nextIndex-1];
        }
    }

    void push(T data){
        if(nextIndex == capacity){
            T* newarr = new T[2*capacity];
            for(int i=0;i<capacity;i++){
                newarr[i] = arr[i];
            }
            capacity = 2*capacity;
            delete[] arr;

            arr = newarr;
        }
        arr[nextIndex] = data;
        nextIndex++;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty/ Underflow condition."<<endl;
            return;
        }
        nextIndex--;
    }
};