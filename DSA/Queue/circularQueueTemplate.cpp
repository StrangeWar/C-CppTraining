#include <iostream>
using namespace std;
#define SIZE 5


template <typename T>
class circularQueue{
    private:
    int front = -1;
    int rear = -1;
    T arr[SIZE];

    public:

    bool isFull(){

        if((rear+1)%SIZE == front){
            return true;
        }

        else{
            return false;
        }
        
    }

    bool isEmpty(){

        if(front == -1 && rear == -1){
            return true;
        }

        else{
            return false;
        }

    }

    void enqueue(T val){

        if(isFull()){
            cout<<"Overflow"<<endl;
            return;
        }

        else if(isEmpty()){
            front = 0;
            rear = 0;
            arr[rear] = val;
            return;
        }

        else{
            rear = (rear+1)%SIZE;
            arr[rear] = val;
            return;
        }

    }

    void dequeue(){

        if(isEmpty()){
            cout<<"Underflow"<<endl;
            return;
        }

        else if(front == rear){
            front = -1;
            rear = -1;
            return;
        }

        else{

            front = (front+1) % SIZE;
            return;
        }
    }

    T getFront(){

        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        else
            return arr[front];

    }


    T getRear(){

        if(isFull()){
            cout<<"Queue is full"<<endl;
        }

        else
            return arr[rear];
    }

};


int main() {

    circularQueue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout<<"Is Empty: "<<(q.isEmpty()?"True":"False")<<endl;
    cout<<"Is Full: "<<(q.isFull()?"True":"False")<<endl;

    q.enqueue(60);

    while(!q.isEmpty()){
        cout<<q.getFront()<<endl;
        q.dequeue();

    }

    q.dequeue();

    cout<<"Is Empty: "<<(q.isEmpty()?"True":"False")<<endl;
    cout<<"Is Full: "<<(q.isFull()?"True":"False")<<endl;


    circularQueue <string> q1;
    q1.enqueue("vivek");
    q1.enqueue("ayush");
    q1.enqueue("ritik");
    q1.enqueue("sobhit");
    q1.enqueue("sumit");

    cout<<"Is Empty: "<<(q1.isEmpty()?"True":"False")<<endl;
    cout<<"Is Full: "<<(q1.isFull()?"True":"False")<<endl;

    q1.enqueue("ashutosh");

    while(!q1.isEmpty()){
        cout<<q1.getFront()<<endl;
        q1.dequeue();

    }

    q1.dequeue();

    cout<<"Is Empty: "<<(q1.isEmpty()?"True":"False")<<endl;
    cout<<"Is Full: "<<(q1.isFull()?"True":"False")<<endl;

    return 0;
}