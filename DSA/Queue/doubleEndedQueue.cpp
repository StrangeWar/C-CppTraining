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
    void insertFront();
    void insertRear();
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

    if((front == 0 && rear == SIZE - 1) || (front == rear-1)){
        return true;
    }
    else{
        return false;
    }
}



int main() {


    return 0;
}