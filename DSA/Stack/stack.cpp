#include <iostream>
#define SIZE 5

using namespace std;

class Stack{

    int arr[SIZE];
    int pos;

    public:
    Stack(){
        pos = -1;
        }
    
    void push(int data){
        if(pos < SIZE - 1){
            arr[++pos] = data;
            }
        else{
            cout<<"Stack is full."<<endl;
        }
    }

    int pop(){

        if(pos != -1){
            return arr[pos--];
        }
        else{
            cout<<"Stack is empty."<<endl;
            return -1;
        }

    }


    int size(){

        return pos+1;

    }


    bool isEmpty(){
        if(pos == -1){
            return true;
        }

        return false;
    }


    int top(){
        if( pos != -1)
            return arr[pos];

        return -1;
    }

};


int main() {

    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);


    cout<<"Size: "<<s1.size()<<endl;
    cout<<"Top element: "<<s1.top()<<endl;
    cout<<"Is Empty: " << (s1.isEmpty()?"true":"false")<<endl;

    cout<<"pop: "<< s1.pop()<<endl;
    cout<<"pop: "<< s1.pop()<<endl;
    cout<<"Top element: "<<s1.top()<<endl;
    cout<<"Size: "<<s1.size()<<endl;

    while(!s1.isEmpty()){
        cout<<"element: "<<s1.pop()<<endl;
    }

    return 0;
}