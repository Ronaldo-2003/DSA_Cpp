#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    // creating an empty integer vector
    vector <int> a;  // it won't be initialised to 0 or garbage value
    cout<<"Size of vector a:"<<a.size()<<endl;  // size = 0
    cout<<"Is vector a empty:"<<a.empty()<<endl; // returns boolean -> checks whether vector is empty or not

    cout<<endl;

    // creating an integer vector of size of 10
    vector <int> b(10); // all will be intialised to 0 // vector <int> b(10,5)-> all will be initialised to 5
    cout<<"Size of vector b:"<<b.size()<<endl;
    // looping through each element of vector
    cout<<"Elements of vector b:";
    for(int i=0;i<b.size();i++){
        cout<<b[0]<<" ";
    }

    cout<<endl;
    cout<<endl;

    // creating an integer vector conatining some values
    vector <int> c = {10,15,17,12};
    cout<<"For integer vector c:"<<endl;
    cout<<"Size:"<<c.size()<<endl;
    // looping through each element of vector c
    cout<<"Elements:";
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }

    cout<<endl;
    cout<<endl;

    cout<<"After pushing 1 element in the vector:"<<endl;
    c.push_back(20); // increases the size of vector by 1 and adds the specified element at the last index
    cout<<"Size:"<<c.size()<<endl;
    cout<<"Elements:";
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }

    cout<<endl;
    cout<<endl;

    cout<<"After popping 1 element out of the vector:"<<endl;
    c.pop_back(); // removes last element and decreses the size of vector by 1
    cout<<"Size:"<<c.size()<<endl;
    cout<<"Elements:";
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }

    cout<<endl;

    cout<<"Front/First element:"<<c.front()<<endl;
    cout<<"Back/Last element:"<<c.back()<<endl;

    cout<<endl;

    // deleting all elements of vector c
    cout<<"After deleting all elements:"<<endl;
    c.clear();
    cout<<"Size:"<<c.size()<<endl;

    // declaring 2D vector
    // vector < vector <int> > arr ; // without specified size
    // vector < vector <int> > arr(n , vector <int> (m)) // with size = n*m



}

/*
vector<int> myVector = {1, 2, 3, 4, 5};

    // Remove element at index 2 (which is the third element)
    int indexToRemove = 2;
    myVector.erase(myVector.begin() + indexToRemove);

*/