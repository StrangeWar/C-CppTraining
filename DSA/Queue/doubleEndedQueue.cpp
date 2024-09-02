//double ended queue.

#include <iostream>
using namespace std;
#define SIZE 5


class queue{
    
    int arr[SIZE];
    int front;
    int rear;

    public:    
    queue():front(-1), rear(0){};

    bool isFull();
    bool isEmpty();
    int getFront();
    int getRear();
    void insertFront(int);
    void insertRear(int);
    void deleteFront();
    void deleteRear();
};


bool queue::isEmpty(){

    if(front == -1){
        return true;
    }
    else{
        return false;
    }
}

bool queue::isFull(){

    if((front == 0 && rear == SIZE - 1) || (front == rear+1)){
        return true;
    }
    else{
        return false;
    }
}

void queue::insertFront(int val){
    if(isFull()){
        cout<<"Overflow"<<endl;
        return;
    }
    if(front == -1){
        front = 0;
        rear = 0;
    }
    else if(front == 0){
        front = SIZE - 1;
    }
    else{
        front--;
    }

    arr[front] = val;
    //front++;
}

void queue::insertRear(int val){
    if(isFull()){
        cout<<"Overflow"<<endl;
        return;
    }
    if(front == -1){
        front = 0;
        rear = 0;
    }
    else if(rear = SIZE - 1){
        rear = 0;
    }
    else{
        rear++;
    }

    arr[rear] = val;

}

int queue::getFront(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return -1;
    }

    return arr[front];
}

int queue::getRear(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return -1;
    }

    return arr[rear];
}

void queue::deleteFront(){
    if(isEmpty()){
        cout<<"Underflow"<<endl;
        return;
    }

    if(front == rear){
        rear = -1;
        front = -1;
    }

    else if(front == SIZE - 1){
        front = 0;
    }
    else{
        front++;
    }

}

void queue::deleteRear(){
    if(isEmpty()){
        cout<<"UnderFlow"<<endl;
        return;
    }

    if(front == rear){
        front = -1;
        rear = -1;
    }
    else if(rear = 0){
        rear = SIZE - 1;
    }
    rear--;

}


int main() {

    queue q;

    cout <<"Queue is Full: "<<(q.isFull()? "True":"False")<<endl;
    cout <<"Queue is Empty: "<<(q.isEmpty()? "True":"False")<<endl;

    q.insertFront(10);
    q.insertFront(20);
    q.insertFront(30);
    q.insertFront(40);
    q.insertFront(50);
    q.insertFront(60);

    //q.deleteFront();

    //cout << q.getFront() << endl;
    //q.insertRear(40);
   // cout << q.getRear() << endl;

    cout <<"Queue is Full: "<<(q.isFull()? "True":"False")<<endl;

    cout << "Print from front:"<<endl;
    while(!q.isEmpty()){
        cout << q.getFront() << endl;
        q.deleteFront();
    }

    q.insertFront(10);
    q.insertFront(20);
    q.insertFront(30);
    q.insertFront(40);
    q.insertFront(50);
    q.insertFront(60);

    cout << "Print from back:"<<endl;
    while(!q.isEmpty()){
        cout << q.getRear() << endl;
        q.deleteRear();
    }

    return 0;
}