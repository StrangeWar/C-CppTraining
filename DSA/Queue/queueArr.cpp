#include <iostream>
using namespace std;

#define SIZE 5

class Queue{
    public:
    int queue[SIZE];
    int front = -1;
    int rear = -1;

    void enqueue(int item){
        if(front == -1)
            front = rear = 0;
        else if(rear == SIZE - 1)
            rear = 0;
        else
            rear++;

        queue[rear] = item;
    }

    void dequeue(){
        if(front == rear){
            cout << "Queue is empty"<<endl;
            front = rear = -1;
            return;
        }

        front++;
    }

    int getfront(){
     
        return queue[front];
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        return false;
    }

    bool isFull(){
        if(rear == SIZE - 1)
            return true;
        
        return false;
        
    }
};

int main() {
    Queue q;

    q.enqueue(43);
    q.enqueue(56);
    q.enqueue(67);
    q.enqueue(78);
    q.enqueue(89);

    q.dequeue();

    cout<<q.getfront()<<endl;
    q.dequeue();
    cout<<q.getfront()<<endl;
    q.dequeue();

    cout<<"Is Empty: " << (q.isEmpty()?"True":"False")<<endl;
    cout<<"Is FUll: " << (q.isFull()?"True":"False")<<endl;


    return 0;
}