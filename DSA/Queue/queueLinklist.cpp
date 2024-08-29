#include <iostream>
using namespace std;

class Queue{
    public:
    int data;

    Queue* next;

    Queue(int val): data(val), next(NULL){};
};


void enqueue(Queue*& head, int val){
    Queue* new_node = new Queue(val);
    if (head == NULL) {
        head = new_node;
        return;
        }

    Queue* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
        }
    temp->next = new_node;
}


void dequeue(Queue*& head){
    if (head == NULL) {
        cout<<"Queue is empty." << endl;
        return;
    }
    Queue* temp = head;
    head = head->next;
    delete temp;

}

bool isEmpty(Queue* head){
    return head == NULL;
}

int getrear(Queue* head){
    if (head == NULL) {
        return -1;
    }

    Queue* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    return temp->data;
}

int getfront(Queue* head){
    if (head == NULL) {
        return -1;
    }
    return head->data;
}

void print(Queue* head){
       Queue* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
    }
    cout << endl;
}

int main() {

    Queue* head = NULL;
    // enqueue(head, 10);
    // enqueue(head, 20);
    // enqueue(head, 30);
    // print(head);

    // dequeue(head);
    // print(head);
    // dequeue(head);
    // print(head);
    // dequeue(head);
    // print(head);


    enqueue(head, 40);
    enqueue(head, 50);
    enqueue(head, 60);

    while(!isEmpty(head)){
        cout << getfront(head) << " ";
        dequeue(head);
    }
 

    return 0;
}